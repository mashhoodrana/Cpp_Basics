#include <iostream>

using namespace std;

void sum(int a, int b); //function prototype---1


int main ()
{
	int x,y;
	cout << "Enter two number: ";
	cin >> x;
	cin >>y;
	sum (x, y);   // function call-----3, it throw its parameters 
	
	for (int i=1; i<10; i++)
	{
		cout << "\nEnter two number: ";
		cin >> x;
		cin >> y;
		sum (x, y);
	}
}

void sum(int a, int b) //function definition-----2, it catch the parameter in any variable name
{
	cout << "Sum = " << a+b;
}

