#include <cassert>
#include <iostream>
#include "beepboopbook.h"

using namespace std;

void run_challenge(const int n, const int p, const int expect)
{
	const int value = f(n, p);
	cout << "f(" << n << ", " << p << ") = " << value << endl;
	assert(value == expect);
}

void challenge1() 
{
	// Challenge 1
	/*
	input: n = 5, p = 3
	output: 1
	*/
	run_challenge(5, 3, 1);

	/*
	input: n = 10, p = 1
	output: 0
	*/
	run_challenge(10, 1, 0);

	/*
	input: n = 400, p = 15
	output: 7
	*/
	run_challenge(400, 15, 7);
}


void challenge2()
{
	// Challenge 2
	/*
	input: n = 5, p = 3
	output: 1
	*/
	run_challenge(5, 3, 1);

	/*
	input: n = 10, p = 1
	output: 0
	*/
	run_challenge(10, 1, 0);

	/*
	input: n = 6, p = 6
	output: 0
	*/
	run_challenge(6, 6, 0);

	/*
	input: n = 6, p = 5
	output: 1
	*/
	run_challenge(6, 5, 1);

	/*
	input: n = 10, p = 6
	output: 2
	*/
	run_challenge(10, 6, 2);
}


int main(void)
{
/*	cout << "Challenge1 pt 1" << endl;
	run_challenge(5, 3, 1);
	exit(0);
*/
	cout << "Challenge 1" << endl;
	challenge1();
	cout << "... PASSED!" << endl;
	cout << "Challenge 2" << endl;
	challenge2();
	cout << "... PASSED!" << endl;
	return 0;
}
