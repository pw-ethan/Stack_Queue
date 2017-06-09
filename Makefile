CC = g++
CPPFLAGS = -std=c++11

sources:=$(wildcard *.cpp)
objects:=$(patsubst %.cpp,%.o,$(sources))

all : $(objects) 
	$(CC) -o out $^

*.o : *.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	rm -f *.o out

.PHONY: all clean