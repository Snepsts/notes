#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> //POSIX thread

void *print_message(void *ptr);

int main()
{
	pthread_t thread_one, thread_two;
	const char* msg_one = "Thread 1";
	const char* msg_two = "Thread 2";
	int iret1, iret2;

	/* Create independent threads each of which will execute function */

	iret1 = pthread_create(&thread_one, NULL, print_message, (void*)msg_one);
	iret2 = pthread_create(&thread_two, NULL, print_message, (void*)msg_two);

	/* Wait till threads are complete before main continues. Unless we */
	/* wait we run the risk of executing an exit which will terminate */
	/* the process and all threads before the threads have completed. */

	pthread_join(thread_one, NULL);
	pthread_join(thread_two, NULL);

	printf("Thread 1 returns: %d\n", iret1);
	printf("Thread 2 returns: %d\n", iret2);

	return 0;
}

void *print_message(void *ptr)
{
	char *message;
	message = (char *)ptr;
	printf("%s \n", message);

	return NULL;
}
