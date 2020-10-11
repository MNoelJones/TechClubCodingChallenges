#include "book.h"

void Book::turn_pages(int count, bool backwards)
{
	const int direction = (backwards ? -1 : 1);
	const int expected_page = (count * 2 * direction) + this->current_page;
	if (expected_page > this->number_of_pages)
	{
		this->current_page = this->number_of_pages;
	}
	else if (expected_page < this->first_page_number)
	{
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

bool Book::is_page_visible(int page_no)
{
	bool response = false;
	if (page_no == this->current_page || page_no == this->current_page - 1)
	{
		response = true;
	}
	return response;
}

void Book::goto_first_page()
{
	this->current_page = this->first_page_number;
}

int Book::get_last_page_number()
{
	return this->first_page_number + this->number_of_pages - 1;
}

void Book::goto_last_page()
{
	this->current_page = this->get_last_page_number();
}

