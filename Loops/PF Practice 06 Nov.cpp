#include <iostream>

using namespace std;

int main ()

//Task 1,2
{
	int n = 5;
	
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=i; j++) //starc print jitnay i hain
			cout << "*";
			cout << "\n";
	}
		for (int i = 1; i<=n; i++)
		{
			for (int j = 4; j>=i; j--) //starc print jitnay i hain
				cout << "*";
				cout << "\n";
					
  		}
}



//task 3


{
	int n = 5;
	 for (int i = 1; i<=n; i++)
	 {
	 	for (int j = 1; j<=n-i; j++)
		 	cout << "  ";
	 			for (int j = 1; j<=i; j++)
	 				cout << "*";
				 	cout << endl; 	
	 }
}
	




