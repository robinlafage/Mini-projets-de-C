CC=gcc
CFLAGS=-Wall -Wextra -pedantic
EXEC=ex2
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(EXEC)

ex2: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -o $@ -c $<

clean:
	rm -rf *.o
