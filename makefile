# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c temp_api.c
OBJ = $(SRC:.c=.o)
TARGET = weather_app

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c temp_api.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: clean