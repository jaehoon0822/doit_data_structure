.SUFFIXIES = .o .c
CC = gcc
FLAGS = -W -Wall -g
TARGET = all
FILES = q1_11.c
OBJECTS = q1_11.o

$(TARGET): .c.o
	$(CC) $(OBJECTS) -o $(TARGET)

.c.o: $(FILES)
	$(CC) $(FLAGS) -c $<

clean: 
	$(RM) $(TARGET) *.o
