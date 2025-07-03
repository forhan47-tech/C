CC = gcc
CFLAGS = -Wall -Wextra -std=c11

OBJS = main.o mathops.o display.o
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f $(OBJS) $(TARGET)

.PHONY: all clean
