#include <stdio.h> //printf
#include <stdlib.h> //u_int8_t
#include <pthread.h> //threads
#include <unistd.h> //sleep
#include <string.h> //strerror

#define SIZE 5 //amount of philosophers
#define HUNGER_SAT 3 //amount to satistfy hunger

//thread stuff
pthread_t philosophers[SIZE]; //a philosopher
u_int8_t food_level[SIZE]; //food_level for each philosopher (3 implies full)
pthread_mutex_t chopstick[SIZE]; //chopstick for each philosopher

void* act(void* index); //thread function
void* listener(); //thread listener for exiting program
int whilevar = 1; //global while variable, disablable by our listener thread

//message stuff
pthread_mutex_t print; //printing mutex, so the print screen is always clean
enum msg_type { chop1_avail, chop2_avail, chop1_unavail, chop2_unavail, let_go, thinking, eating };
void print_msg(u_int8_t msg, u_int8_t index);

//philosopher functions, all of which need the index operator
int check_chopsticks(u_int8_t i);
void put_down_chopsticks(u_int8_t i);

int main() //in order to eat, philosophers need chopstick i and i+1%5
{
	int err;

	for (u_int8_t i = 0; i < SIZE; i++) {
		err = pthread_create(&(philosophers[i]), NULL, &act, &i);
		if (err != 0)
			printf("\ncan't create thread :[%s]\n", strerror(err));
		sleep(1); //ensure index is correctly set
	}

	//pthread_t stop_thread;
	//err = pthread_create(&stop_thread, NULL, &listener, NULL);

	for (size_t i = 0; i < SIZE; i++)
		pthread_join(philosophers[i], NULL);

	return 0;
}

void* act(void* index)
{
	int has_chopsticks = 0; //bool for having chopsticks
	int i = *(u_int8_t*)index; //cast the index to an unsigned byte

	//printf("i = %d\n", i); //print to ensure initialization is correct

	while (whilevar) {
		if (has_chopsticks) {
			if (food_level[i] >= HUNGER_SAT) { //full
				put_down_chopsticks(i);
				has_chopsticks = 0;
			} else { //eat
				print_msg(eating, i);
				food_level[i]++;
			}
		} else { //don't have chopsticks
			if (food_level[i] > 0) { //not hungry
				print_msg(thinking, i);
				food_level[i]--;
			} else { //hungry
				if (check_chopsticks(i)) { //got the chopsticks
					has_chopsticks = 1;
				} else { //didn't get chopsticks
					//do nothing for now
				}
			}
		}

		sleep(1); //give philosophers time before next action
		//also, the sleep call ensures threads are not starved for system resources
	}

	return NULL;
}

void* listener()
{
	return NULL;
}

int check_chopsticks(u_int8_t i)
{
	if (pthread_mutex_trylock(&chopstick[i]) == 0) { //first chopstick avail
		print_msg(chop1_avail, i);
		if (pthread_mutex_trylock(&chopstick[(i+1)%5]) == 0) { //eat!!!
			return 1; //got control
		} else { //first chopstick available but not second one
			print_msg(chop2_unavail, i);
			pthread_mutex_unlock(&chopstick[i]); //unlock the first mutex we locked
		}
	} else { //first chopstick unavail
		print_msg(chop1_unavail, i);
	}

	return 0; //didn't get control
}

void put_down_chopsticks(u_int8_t i)
{
	print_msg(let_go, i);
	pthread_mutex_unlock(&chopstick[i]);
	pthread_mutex_unlock(&chopstick[(i+1)%5]);
}

void print_msg(u_int8_t msg, u_int8_t index)
{
	pthread_mutex_lock(&print);

	printf("Philosopher number %d: ", index+1);
	switch (msg) {
	case chop1_avail:
		printf("Can grab the right chopstick.");
		break;
	case chop2_avail:
		printf("Can grab the left chopstick. Eating!");
		break;
	case chop1_unavail:
		printf("Cannot grab the right chopstick. Waiting...");
		break;
	case chop2_unavail:
		printf("Cannot grab the left chopstick. Waiting...");
		break;
	case let_go:
		printf("Full, putting down chopsticks.");
		break;
	case thinking:
		printf("Not hungry, thinking.");
		break;
	case eating:
		printf("Have both chopsticks, eating.");
		break;
	default:
		printf("ERROR WITH MSG_TYPE!");
	}

	printf("\n");

	pthread_mutex_unlock(&print);
}
