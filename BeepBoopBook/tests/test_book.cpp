// test_book.cpp
#include <cassert>
#include <cstddef>
#include <iostream>

#include "book.h"

using namespace std;

void test_1()
{
	Book* book = new Book(10);

	assert(book != NULL);
	assert(book->get_current_page_number() == 1);
	book->turn_page();
	assert(book->get_current_page_number() == 2);
	book->turn_page(true);
	assert(book->get_current_page_number() == 1);
}

void test_2()
{
	Book* book = new Book(10);

	assert(book->is_page_visible(1));
	assert(!book->is_page_visible(3));
	book->turn_page();
	assert(!book->is_page_visible(1));
	assert(book->is_page_visible(3));
	assert(book->is_page_visible(2));
}

void test_3()
{
	Book* book = new Book(10);

	while (!book->is_page_visible(4))
	{
		book->turn_page();
	}
	assert(book->is_page_visible(4));
	assert(book->is_page_visible(5));
}

const int count_page_turns(Book& book, const int target_page, bool backwards=false)
{
	int count = 0;

	while (!book.is_page_visible(target_page))
	{
		count++;
		book.turn_page(backwards);
	}
	return count;
}

void test_4()
{
	Book* book = new Book(5);
	const int count = count_page_turns(*book, 3);
	assert(count == 1);
}

int main(void)
{
	test_1();
	test_2();
	test_3();
	// test_4();
	return 0;
}