#include <iostream>

using namespace std;

void table(int a)
{
	for (int i=1; i<=10; i++)
	{
		int tab = a*i;
		cout << a << "*" << i << " = " << tab << endl;
	}
	
}

int main()
{
	int n, choice;
	cout << "Enter a number: ";
	cin >> n;
	table(n);
	 
	cout << "Are u want to continue? press 1 to continue and 0 to cancel: ";
	cin >> choice;
	
	if (choice == 1)
	{
		cout << "Enter a number: ";
		cin >> n;
		table(n);
	}
		
	else
		cout << "Program terminate";
}