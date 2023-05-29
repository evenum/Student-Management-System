CC = gcc
CFLAGS = -Wall -Wextra

CFILES = main.c student.c
OBJECTS = main.o student.o

all: final

final: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o final

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean: 
	rm final *.o

