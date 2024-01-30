#include <iostream>

using namespace std;

int main()
{
	int a = 4;
	int *p;
	p = &a;
	*p = 10;
	a = 15;
	cout << a << endl;
	cout << &a << endl;
	cout << p << endl;
	cout << *p << endl;
}