CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDFLAGS = -lncurses

SRC = src/main.c src/game.c src/map.c src/player.c src/log.c src/render.c
OBJ = $(SRC:.c=.o)
TARGET = adventureGame

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)
