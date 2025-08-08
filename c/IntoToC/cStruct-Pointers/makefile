CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iheaders

SOURCES = struct.c main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = struct-pointers

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	rm -f $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
