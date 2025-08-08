CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iheaders

SOURCES = File.c main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = FileIO

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	rm -f $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
