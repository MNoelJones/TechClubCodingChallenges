#include <iostream>
#include "book.h"

using namespace std;

void Book::turn_pages(int count, bool backwards)
{
	const int direction = (backwards ? -1 : 1);
	const int expected_page = (count * 2 * direction) + this->current_page;
	if (expected_page > this->number_of_pages)
	{
		cout << "Cannot turn pages past end of book" << endl;
		this->current_page = this->number_of_pages;
	}
	else if (expected_page < this->first_page_number)
	{
		cout << "Cannot turn pages past start of book" << endl;
		this->current_page = this->first_page_number;
	}
	else
	{
		this->current_page = expected_page;
	}
}

void Book::turn_page(bool backwards)
{
	this->turn_pages(1, backwards);
}

bool Book::is_current_page_on_right()
{
	const int page_diff = this->current_page - this->first_page_number;
	return ((page_diff % 2) == (this->first_page_is_on_right ? 0 : 1));
}

bool Book::is_page_visible(int page_no)
{
	bool response = false;
	bool is_page_on_right = this->is_current_page_on_right();

	if (page_no == this->current_page)
	{
		response = true;
	}
	else if (
		is_page_on_right && (this->current_page - 1 == page_no) ||
		!is_page_on_right && (this->current_page + 1 == page_no)
	)
	{
		response = true;
	}
	return response;
}

void Book::goto_first_page()
{
	this->current_page = this->first_page_number;
}

int Book::get_current_page_number()
{
	return this->current_page;
}

int Book::get_last_page_number()
{
	return this->first_page_number + this->number_of_pages - 1;
}

void Book::goto_last_page()
{
	this->current_page = this->get_last_page_number();
}

