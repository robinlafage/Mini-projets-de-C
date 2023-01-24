CC=gcc
CFLAGS=-Wall -Wextra -pedantic
LDFLAGS=
EXEC=ex1
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(EXEC)

ex1: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o
