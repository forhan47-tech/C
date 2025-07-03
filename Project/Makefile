all: main

main: main.o mathops.o display.o
    gcc -o main main.o mathops.o display.o

main.o: main.c mathops.h display.h
    gcc -c main.c

mathops.o: mathops.c mathops.h
    gcc -c mathops.c

display.o: display.c display.h
    gcc -c display.c

clean:
    rm -f *.o main

.PHONY: all clean
