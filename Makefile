# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99 -Iinclude
LDFLAGS = -lncurses

SRC = src/main.c src/game.c src/map.c src/player.c
OBJ = $(SRC:.c=.o)
TARGET = adventureGame

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)