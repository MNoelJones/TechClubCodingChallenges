// tests.cpp
#include <cassert>
#include <iostream>
#include "codingchallenge0_0.h"
#include "codingchallenge0_1.h"

using namespace std;

void challenge0()
{
	assert(seconds_in_days(5) == 432000);
	return;
}

void challenge1()
{
	float height = height_given_time(5);
	cout << "height_given_time(5) = " << height << endl;
	assert(height == 122.5);
	return;
}

void challenge2()
{
	assert(false);
	return;
}

int main(void)
{
	cout << "Challenge 0" << endl;
	challenge0();
	cout << "... PASSED!" << endl;
	cout << "Challenge 1" << endl;
	challenge1();
	cout << "... PASSED!" << endl;
	cout << "Challenge 2" << endl;
	challenge2();
	cout << "... PASSED!" << endl;
	return 0;
}
