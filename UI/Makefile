CC = g++
VPATH = src include
STD = -std=c++17
CPPFLAGS = $(STD) -Wall -Wpedantic -I include

terminal: main.cpp terminal.o
	$(CC) $(CPPFLAGS) $^ -o $@ 

terminal.o: terminal.cpp terminal.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm terminal*