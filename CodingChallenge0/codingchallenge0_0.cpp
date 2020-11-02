#include "codingchallenge0_0.h"
#include <string>

using namespace std;

template </*string TName,*/ class TSubUnit, int TQuantity>
class TimeUnit
{
public:
	TimeUnit(int count) : count(count), subunit(TQuantity) {};
	int get_count()
	{
		return this->count;
	}
	int in_seconds()
	{
		return this->count * subunit.in_seconds();
	}

private:
	int count;
	TSubUnit subunit;
};

class Seconds : public TimeUnit<int, 1>
{
public:
	Seconds(int count) : TimeUnit(count) {};
	int in_seconds()
	{
		return this->get_count();
	}
};

class Minutes : public TimeUnit<Seconds, 60>
{
public:
	Minutes(int count) : TimeUnit(count) {};
};

class Hours : public TimeUnit<Minutes, 60>
{
public:
	Hours(int count) : TimeUnit(count) {};
};

class Days : public TimeUnit<Hours, 24>
{
public:
	Days(int count) : TimeUnit(count) {};
};

int seconds_in_days(int days)
{
	Days* d = new Days(days);

	return d->in_seconds();
}