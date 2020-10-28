CC?=gcc
CPP=g++

all: tests/test

%.o: %.cpp
	$(CPP) -c -o $@ $< -I .

tests/test: tests/test.o codingchallenge0.o
	$(CPP) -o $@ $^

clean:
	-@rm *.o
	-@rm tests/*.o

tests/test.o:  codingchallenge0.h
codingchallenge0.o:  codingchallenge0.h
