CC = g++
VPATH = src include
CPPFLAGS = -I include

terminal: main.cpp terminal.o
	$(CC) $(CPPFLAGS) $^ -o $@ 

terminal.o: terminal.cpp terminal.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm terminal*