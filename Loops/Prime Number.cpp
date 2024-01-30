#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int n, i;
	cout << "Enter a number: ";
	cin >> n;
	bool isPrime = true;
	
	for (i = 2; i <= n - 1; /* i <= n /2 */ i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
		
	}
	if (isPrime == true)
	{
		cout << "a prime number";
	}
	else 
	{
		cout << "not a prime number";
	}
	
}