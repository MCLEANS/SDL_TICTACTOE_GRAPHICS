CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
INFLAGS = -I/usr/include/SDL2
LIBFLAGS  = -L/usr/lib/x86_64-linux-gnu -lSDL2 -lSDL2_image -lSDL2_mixer
OBJS = main.o graphics.o texture.o game.o player.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main $(LIBFLAGS)

main.o : main.cpp graphics.h
	$(CC) $(CFLAGS) $(INFLAGS) main.cpp

graphics.o : graphics.cpp graphics.h
	$(CC) $(CFLAGS) $(INFLAGS) graphics.cpp

texture.o : texture.cpp texture.h
	$(CC) $(CFLAGS) $(INFLAGS) texture.cpp
	
game.o : game.cpp game.h
	$(CC) $(CFLAGS) game.cpp

player.o : player.cpp player.h
	$(CC) $(CFLAGS) player.cpp

clean :
	rm *.o main

run :
	./main
