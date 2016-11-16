CC=g++
FLAGS=-Wall -std=c++11
EXEC=testing

all: program

run: program
	./$(EXEC)

program: main.o
	@g++ -o $(EXEC) main.o

main.o: main.cpp
	$(CC) -c main.cpp $(FLAGS)

clean:
	rm $(EXEC)
