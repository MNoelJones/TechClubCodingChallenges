// tests.cpp
#include <cassert>
#include <iostream>
#include "codingchallenge0.h"

using namespace std;

void challenge0()
{
	assert(seconds_in_days(5) == 432000);
	return;
}

void challenge1()
{
	assert(false);
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
