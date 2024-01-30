#include <iostream>

using namespace std;

int main ()

{
	int n = 10; //using nested for;
	int i, j;
	for (i = 1; i<= n; i++) //for rows
	{
		for (j = 1; j <= i; j++) // for coloumn
		{
			cout << "*";
		}
		cout << endl;
			
		
	}
	
}