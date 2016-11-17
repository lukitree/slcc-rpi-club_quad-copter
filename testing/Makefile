# Project name
TARGET 		= testing

CC			= gcc
# Compiler flags
CFLAGS		= -Wall -Wextra -std=c11 -Iinclude

LINKER		= $(CC) -o
# Linker flags
LFLAGS		= 

# Directories
SRCDIR		= src
OBJDIR		= obj
BINDIR		= ../bin

SOURCES		:= $(wildcard $(SRCDIR)/*.c)
OBJECTS		:= $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
RM			= rm -f
MKDIR_P		= mkdir -p

all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(MKDIR_P) $(BINDIR)
	$(LINKER) $@ $(LFLAGS) $(OBJECTS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(MKDIR_P) $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR)/*.o
	$(RM) $(BINDIR)/$(TARGET)

.PHONY: clean all
