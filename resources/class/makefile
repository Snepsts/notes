OBJS = student.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

student : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o student.out

main.o : main.cpp student.h
	$(CC) $(CFLAGS) main.cpp

student.o : student.cpp student.h
	$(CC) $(CFLAGS) student.cpp
