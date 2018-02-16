#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

//example taken from: https://www.thegeekstuff.com/2012/05/c-mutex-examples/?refcom

void* do_something(void *arg);

#define SIZE 2

pthread_t tid[SIZE]; //threads
uint counter; //global counter variable

int main()
{
	int err;

	for (size_t i = 0; i < SIZE; i++) {
		err = pthread_create(&(tid[i]), NULL, &do_something, NULL);
		if (err != 0)
			printf("\ncan't create thread :[%s]\n", strerror(err));
	}

	for (size_t i = 0; i < SIZE; i++)
		pthread_join(tid[i], NULL);

	return 0;
}

void* do_something(void *arg) //counter is accessed by each thread
{
	counter += 1;
	printf("\n Job %d started\n", counter);

	for (u_int64_t i = 0; i < (0xFFFFFFFF); i++); //wait for it to finish

	printf("\n Job %d finished\n", counter); //print finished result

	return NULL;
}
