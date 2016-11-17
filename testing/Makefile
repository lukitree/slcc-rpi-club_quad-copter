CC=gcc
CFLAGS=-Wall -Wextra -DNDEBUG -std=c11
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.cpp=.o)
EXEC=testing

BINDIR=../bin
MKDIR=mkdir -p
RM=rm -f

all: $(EXEC)

$(EXEC): $(OBJS)
	@$(MKDIR) $(BINDIR)
	$(CC) -o $(BINDIR)/$(EXEC) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -c $^ $(CFLAGS)

.PHONY: clean 

clean:
	$(RM) *.o
	$(RM) $(BINDIR)/$(EXEC)
