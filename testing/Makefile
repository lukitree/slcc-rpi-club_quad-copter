CC=gcc
CFLAGS=-Wall -Wextra -DNDEBUG -std=c11
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
TARGET=testing

OUTDIR=../bin

MKDIR_P=mkdir -p
RM=rm -f

all: $(TARGET)

$(TARGET): $(OBJS) $(OUTDIR)
	$(CC) -o $(OUTDIR)/$(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $^ $(CFLAGS)

$(OUTDIR):
	@$(MKDIR_P) $@

clean:
	$(RM) *.o
	$(RM) $(OUTDIR)/$(TARGET)

.PHONY: clean all
