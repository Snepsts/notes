OBJS = Stack.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

stack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o stack.out

main.o : main.cpp Stack.h
	$(CC) $(CFLAGS) main.cpp

Stack.o : Stack.cpp Stack.h
	$(CC) $(CFLAGS) Stack.cpp
