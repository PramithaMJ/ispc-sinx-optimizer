CC = g++
ISPC = ispc
CFLAGS = -O2

all: main

main: sinx.o sinx_ispc.o main.o
	$(CC) $(CFLAGS) -o main sinx.o sinx_ispc.o main.o -lm

sinx.o: sinx.cpp sinx.h
	$(CC) $(CFLAGS) -c sinx.cpp

sinx_ispc.o: sinx.ispc
	$(ISPC) -o sinx_ispc.o -h sinx_ispc.h sinx.ispc

main.o: main.cpp sinx.h sinx_ispc.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o main