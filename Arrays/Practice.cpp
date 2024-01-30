#include <iostream>

using namespace std;

int main() 
{
	int r, c;
	int arr[r][c];
	cout << "Enter number of rows and coloumns: ";
	cin >> r;
	cin >> c;
	
	cout << "Enter elements of rows and columns: ";
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Matrix is: " << endl;
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

}