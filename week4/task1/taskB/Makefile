SHELL=/bin/bash
INC=-Iinclude
CC=g++

.PHONY: all clean prepare build

all: clean prepare build
	@echo "Building application...done"
	echo $(SHELL)

clean:
	rm -rf bin
	rm -rf obj

prepare:
	mkdir -p bin
	mkdir -p obj

build:
	$(CC) -Wall -g -O0 -c $(INC) -o obj/entropy.o src/entropy.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -o bin/main obj/entropy.o obj/main.o

