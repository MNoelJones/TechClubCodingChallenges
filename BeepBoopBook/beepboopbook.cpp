#include <iostream>
#include "beepboopbook.h"
#include "book.h"

using namespace std;


const int count_page_turns(Book& book, const int target_page, bool backwards=false);

const int count_page_turns(Book& book, const int target_page, bool backwards)
{
	int count = 0;

	while (!book.is_page_visible(target_page))
	{
		count++;
		book.turn_page(backwards);
	}
	return count;
}

const int f(const int n, const int p)
{
	Book* book = new Book(n);
	int count;

	// Do we start from the front of the book, or from the back?
	const int from_front = count_page_turns(*book, p);
	book->goto_last_page();
	const int from_back = count_page_turns(*book, p, true);

	return from_front < from_back ? from_front : from_back;
}
