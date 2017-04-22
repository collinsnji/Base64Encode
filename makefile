SRC = $(shell pwd)/src/Base64Encode.cpp
CC = g++
DEBUG = -g
CPP_STD = -std=c++11
FLAGS = -Wall -Wextra $(DEBUG) $(CPP_STD)

build:
	$(CC) $(FLAGS) $(SRC) -o Base64Encode
clean:
	\rm -r src/*.o
test:
	./Base64Encode
