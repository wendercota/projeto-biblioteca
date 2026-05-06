CC = gcc
CFLAGS = -Wall -Iinclude

SRC = $(wildcard src/*.c)

programa:
	$(CC) $(SRC) $(CFLAGS) -o programa

clean:
	rm -f programa