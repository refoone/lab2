CC=gcc
CFLAGS=-c	 
SOURCES=main.c	variant2.c
OBJECTS=$(SOURCES:.c=.o)

all: start

start: $(OBJECTS)
	$(CC) $(OBJECTS) -o start -lm
	objdump -x -s -w -d start > start.dump
	objcopy -O binary start start.bin
main.o: main.c	stdlib.h	stdio.h	string.h	variant2.h
	$(CC) $(CFLAGS) main.c
variant2.o: variant2.c	stdlib.h	variant2.h	string.h
	$(CC) $(CFLAGS) variant2.c
clean: 
	rm -f start $(OBJECTS) start.dump start.bin
	
