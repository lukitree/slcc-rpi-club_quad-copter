CC=g++
FLAGS=-Wall -std=c++11
EXEC=testing
DEL=rm -f

all: program

run: program
	./$(EXEC)

program: main.o
	g++ -o $(EXEC) main.o

main.o: main.cpp
	$(CC) -c main.cpp $(FLAGS)

clean:
	$(DEL) $(EXEC)
	$(DEL) *.o
