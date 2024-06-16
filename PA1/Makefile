CC = g++
CFLAGS = -std=c++17 -Wall
TARGET = PA1

SRCFILES = $(wildcard *.cpp)
OBJFILES = $(SRCFILES:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJFILES)
