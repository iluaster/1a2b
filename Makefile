all: 1a2b

CC=gcc
CFLAGS= -std=c99 -g 
shellcode: 1a2b.o
		$(CC) $(CFLAGS) -o 1a2b 1a2b.o
shellcode.o:1a2b.c
		$(CC) $(CFLAGS) -c 1a2b.c
			
clean:
		rm -f 1a2b.o
