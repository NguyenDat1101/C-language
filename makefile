CC = gcc

CFLAGS = -Wall -std=c11 -O2
LDFLAGS = -lm

TARGET ?= main

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)

re: clean all

.PHONY: all clean re
