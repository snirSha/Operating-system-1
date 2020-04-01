CC = gcc
FLAGS = -Wall -g

all: Subtask1 Subtask2 Subtask3

Subtask1: main2.o Subtask1.o
	$(CC) $(FLAGS) -o $@ main2.o Subtask1.o 

Subtask2: main2.o Subtask2.o
	$(CC) $(FLAGS) -o $@ main2.o Subtask2.o 

Subtask3: main2.o Subtask3.o
	$(CC) $(FLAGS) -o $@ main2.o Subtask3.o 

main2.o: main2.c part_b.h
	$(CC) $(FLAGS) -c main2.c 

Subtask1.o: Subtask1.c part_b.h
	$(CC) $(FLAGS) -c Subtask1.c

Subtask2.o: Subtask2.c part_b.h
	$(CC) $(FLAGS) -c Subtask2.c

Subtask3.o: Subtask3.c part_b.h
	$(CC) $(FLAGS) -c Subtask3.c


.PHONY: clean all

clean:
	rm -f *.o Subtask1 Subtask2 Subtask3
