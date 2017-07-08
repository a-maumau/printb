CC = gcc
CFLAGS = -O2
SRC = src/printb.c src/test.c
DST = bin/printb
all :
	$(shell mkdir -p bin)
	$(CC) -o $(DST) $(SRC) $(CFLAGS)