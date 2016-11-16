CC=g++
FLAGS=-Wall -std=c++11
EXEC=testing
DEL=rm -f
BINDIR=../bin

all: program

run: program
	./$(BINDIR)/$(EXEC)

program: main.o
	@mkdir $(BINDIR)
	g++ -o $(BINDIR)/$(EXEC) main.o

main.o: main.cpp
	$(CC) -c main.cpp $(FLAGS)

clean:
	$(DEL) $(BINDIR)/$(EXEC)
	$(DEL) *.o
