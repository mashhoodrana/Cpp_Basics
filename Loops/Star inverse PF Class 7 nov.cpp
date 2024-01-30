#include <iostream>

using namespace std;

int main ()
{
	for (int i = 1; i<=2; i++)
	{
		for (int k = 1; k<=i; k++)
		{ 
			cout << " ";	
		}
	
		for (int j = 3; j>=(i*2)-1; j--)
		{
			cout << "*";
		}	
		cout << endl;
	}
	
}