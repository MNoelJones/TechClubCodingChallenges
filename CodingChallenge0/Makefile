CC?=gcc
CPP=g++

all: tests/test

%.o: %.cpp
	$(CPP) -c -o $@ $< -I .

tests/test: tests/test.o codingchallenge0_0.o codingchallenge0_1.o
	$(CPP) -o $@ $^

run: tests/test
	tests/test

clean:
	-@rm *.o
	-@rm tests/*.o

tests/test.o:  codingchallenge0_0.h codingchallenge0_1.h
codingchallenge0_0.o:  codingchallenge0_0.h
codingchallenge0_1.o:  codingchallenge0_1.h
