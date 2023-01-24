CC=gcc
CFLAGS=-Wall -Wextra -pedantic
EXEC=ex4
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(EXEC)

ex4: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -o $@ -c $<

clean:
	rm -rf *.o
