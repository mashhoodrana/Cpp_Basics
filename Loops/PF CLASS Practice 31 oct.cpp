#include <iostream>

using namespace std;

int main ()

{
	int n, k;
	cout << "Enter the number for table: ";
	cin >> n;
	cout << "Enter the number for table: ";
	cin >> k;
	
	
	
	for (int i = n; i <= 10; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			cout  << i << "*" << j << "=" << i*j << "\t";
		}
			cout << "\n";
	}
	
	
	
}