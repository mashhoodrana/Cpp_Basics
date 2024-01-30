#include <iostream>

using namespace std;

int main()

{
	int a[3][3];  //{{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
	int i;
	for (int i=0; i<3; i++)
	{
		cout << "Enter values for rows: ";
	}
	cin >> a[i];
	for (int j=0; j<3; j++)
	{
		cout << "Enter values for coulumns: ";
	}
	cin >> a[j];
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			a[i][j]=i;
			cout << a[i][j]<<"\t";
		}
		cout << endl;
		
	}
	
	
	
}