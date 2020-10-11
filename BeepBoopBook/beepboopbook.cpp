#include <iostream>
#include "beepboopbook.h"

using namespace std;

const int count_from_front(const int n, const int p)
{
	int count = 0;
	int right_page = 1;
	int left_page = 0;
	while (p > right_page)
	{
		count++;
		right_page += 2;
		left_page += 2;
	}

	return count;
}

const int count_from_back(const int n, const int p)
{
	int count = 0;
	int left_page = int((n + 1) / 2) * 2;
	int right_page =  left_page + 1;
	while (left_page > p)
	{
		count++;
		right_page -= 2;
		left_page -= 2;
	}

	return count;
}

const int f(const int n, const int p)
{
	int count;

	// Do we start from the front of the book, or from the back?
	const int from_front = count_from_front(n, p);
	const int from_back = count_from_back(n, p);

	if (from_back < from_front)
	{
		count = from_back;
	}
	else
	{
		count = from_front;
	}

	return count;
}
