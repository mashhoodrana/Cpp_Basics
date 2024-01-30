#include <iostream>

using namespace std;

int main() 
{
  
	for (int i = 1; i<=8; i++) 
	{
		for (int j = 7; j>=i; j--)
		{
			cout <<" ";	
		}
		for (int k = 1; k<=(i*2)-1; k++)
		{
			cout << "*";
		}
			cout << endl;
	}
		
	for (int i = 1; i<=7; i++)
	{
		for (int j = 1; j<=i; j++)
		{ 
			cout << " ";	
		}
	
		for (int k = 13; k>=(i*2)-1; k--)
		{
			cout << "*";
		}	
		cout << endl;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	



	
