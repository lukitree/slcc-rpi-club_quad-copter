CC=gcc
CFLAGS=-Wall -std=c++11
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.cpp=.o)
EXEC=testing

BINDIR=../bin
MKDIR=mkdir -p
RM=rm -f

all: $(EXEC)

$(EXEC): $(OBJS)
	@$(MKDIR) $(BINDIR)
	$(CC) -o $(EXEC) $(OBJS)
	mv $(EXEC) ../bin/

$(OBJS): $(SRCS)
	$(CC) -c $^ $(CFLAGS)

.PHONY: clean 

clean:
	$(RM) $(OBJS)
	$(RM) $(BINDIR)/$(EXEC)
