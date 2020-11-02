#include "codingchallenge0_1.h"

const float GRAVITY = 9.8;

float height_given_time(int time)
{
	float initial_velocity = 0.0;
	float acceleration = GRAVITY;

	float displacement = initial_velocity * time + acceleration / 2 * time * time;
	return displacement;
}