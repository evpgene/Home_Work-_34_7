.PHONY: all clean install uninstall

LINK = sudo g++ -std=c++20 -D_DEBUG -o
COMPILE = sudo g++ -std=c++20 -D_DEBUG -c -o
FLAGS = `mysql_config --cflags --libs`

all: main



main.o: main.cpp
	$(COMPILE) main.o main.cpp

main: main.o
	$(LINK) main main.o





