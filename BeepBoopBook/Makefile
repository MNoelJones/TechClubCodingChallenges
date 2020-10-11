CC?=gcc
CPP=g++

%.o: %.cpp
	$(CPP) -c -o $@ $<

beepboopbook: test.o beepboopbook.o
	$(CPP) -o $@ $^

all: beepboopbook

clean:
	rm *.o

test.o: beepboopbook.h
beepboopbook.o: beepboopbook.h
