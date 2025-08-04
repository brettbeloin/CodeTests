CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iheaders

SOURCES = test.c struct.c main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	rm -f $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
