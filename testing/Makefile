CC=g++
FLAGS=-Wall -std=c++11
EXEC=testing
RM=rm -f
BINDIR=../bin
MKDIR=mkdir -p

all: program

run: program
	./$(BINDIR)/$(EXEC)

program: main.o
	@$(MKDIR) $(BINDIR)
	g++ -o $(BINDIR)/$(EXEC) main.o

main.o: main.cpp
	$(CC) -c main.cpp $(FLAGS)

clean:
	$(RM) $(BINDIR)/$(EXEC)
	$(RM) *.o
