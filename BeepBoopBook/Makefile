CC?=gcc
CPP=g++

%.o: %.cpp
	$(CPP) -c -o $@ $< -I .

beepboopbook: tests/test.o beepboopbook.o book.o
	$(CPP) -o $@ $^

tests/test_book: tests/test_book.o book.o
	$(CPP) -o $@ $^

all: beepboopbook tests/test_book

clean:
	rm *.o
	rm tests/*.o

tests/test.o: beepboopbook.h
beepboopbook.o: beepboopbook.h
book.o: book.h
