CC=g++
FLAGS=-Wall -std=c++11

all: testing

run: testing
	./testing

testing: main.o
	@mkdir ../bin
	@g++ -o ../bin/testing main.o

main.o: main.cpp
	@echo g
	@$(CC) -c main.cpp $(FLAGS)
