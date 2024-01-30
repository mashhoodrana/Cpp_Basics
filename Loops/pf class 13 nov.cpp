#include <iostream>

using namespace std;

int main()

{
	int i=1;  
	while (i<=3)
	{
		int j = 2;
		while (j>=i)
		{
			cout <<" ";
			j--;
		}
		int k = 1;
		while (k<=(i*2)-1)
		{
			cout << "*";
			k++;
		}
		i++;
		cout << endl;
	}
	i = 1;
	while (i<=2)
	{
		int j = 1;
		while (j<=i)
		{
			cout << " ";
			j++;
		}
		int k = 3;
		while (k>=(i*2)-1)
		{
			cout << "*";
			k--;
		}
		cout << endl;
		i++;
	}
}