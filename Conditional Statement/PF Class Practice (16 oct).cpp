//Program to find INT_MIX, MAX, compound assignment operator (x +=1), constant declaration

#include <iostream>
#define pi 3.14 // 1) constant declration by directive method
				// 2) const datatype variableName = value;
#include <limits.h> //MAX, MIN Values Int, double etc
#include <float.h> //MAX, MIN Values float

using namespace std;

int main()
{
	int x, mashhood;
	x = 5;
	x += 1;
	cout << x;
	
	float y, multiply;
	y = 2;
	multiply = (pi*y);
	cout << multiply;
	
	
	const int a = 9;
	mashhood = 2*a;
	cout << mashhood;
	return 0;
	
}