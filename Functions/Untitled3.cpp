#include <iostream>

using namespace std;

void avg(int a, int b);

int main()
{
	int runs, balls;
	cout << "Enter your runs: ";
	cin >> runs;
	cout << "Enter the number of balls deleivered: ";
	cin >> balls;
	avg(runs, balls);
}

void avg(int a, int b)
{
	int average = (a*60)/b;
	cout << "The average of the player is " << average << ".";
}

void stars(int x)
{
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<x-i-1; j++)
		{
			cout <<" ";
		}
		for (int j=0; j<2*i+1; j++)
		{
			cout <<"*";
		}
		cout << endl;
	}
}

int main()
{
	int x=5;
	stars(x);
}

void reverse()




