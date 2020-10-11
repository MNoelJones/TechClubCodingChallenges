#include <cassert>
#include <iostream>
#include "beepboopbook.h"

using namespace std;

void challenge1() 
{
	// Challenge 1

	/*
	input: n = 5, p = 3
	output: 1
	*/
	cout << "f(5, 3) = " << f(5, 3) << endl;
	assert(f(5, 3) == 1);

	/*
	input: n = 10, p = 1
	output: 0
	*/
	cout << "f(10, 1) = " << f(10, 1) << endl;
	assert(f(10, 1) == 0);

	/*
	input: n = 400, p = 15
	output: 7
	*/
	cout << "f(400, 15) = " << f(400, 15) << endl;
	assert(f(400, 15) == 7);
}

void challenge2()
{
	// Challenge 2
	/*
	input: n = 5, p = 3
	output: 1
	*/
	cout << "f(5, 3) = " << f(5, 3) << endl;
	assert (f(5, 3) == 1);

	/*
	input: n = 10, p = 1
	output: 0
	*/
	cout << "f(10, 1) = " << f(10, 1) << endl;
	assert(f(10, 1) == 0);

	/*
	input: n = 6, p = 6
	output: 0
	*/
	cout << "f(6, 6) = " << f(6, 6) << endl;
	assert(f(6, 6) == 0);

	/*
	input: n = 6, p = 5
	output: 1
	*/
	cout << "f(6, 5) = " << f(6, 5) << endl;
	assert(f(6, 5) == 1);

	/*
	input: n = 10, p = 6
	output: 2
	*/
	cout << "f(10, 6) = " << f(10, 6) << endl;
	assert(f(10, 6) == 2);
}

int main(void)
{
	cout << "Challenge 1" << endl;
	challenge1();
	cout << "... PASSED!" << endl;
	cout << "Challenge 2" << endl;
	challenge2();
	cout << "... PASSED!" << endl;
	return 0;
}
