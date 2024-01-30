#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void input(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns)

{
	int row_matrix1, column_matrix1, row_matrix2, column_matrix2;
	
	int matrix[row_matrix1][column_matrix1];
	
	cout << "Enter the rows for first matrix: ";
	cin >> row_matrix1;
	cout << "Enter the columns for the first matrix: ";
	cin >> column_matrix1;
	
	for (int i=1; i<row_matrix1; i++)
	{
		for (int j=1; j<column_matrix1; j++)
		{
			cout << "enter the value of " << i << j << "index: ";
	 		cout <<  matrix[row_matrix1][column_matrix1];
		}
	}
	
	cout << "Matrix 1 is: ";
	for (int i=0; i<row_matrix1; i++)
	 {
	 	for (int j=0; j<column_matrix1; j++)
	 		cout <<  matrix[row_matrix1][column_matrix1];
	 }
	
	cout << "Enter the rows for second matrix: ";
	cin >> row_matrix2;
	cout << "Enter the columns for the second matrix: ";
	cin >> column_matrix2;
	
	int matrix2[row_matrix2][column_matrix2];
	
	for (int i=1; i<row_matrix2; i++)
	{
		for (int j=1; j<column_matrix2; j++)
		{
			cout << "enter the value of " << i << j << "index: ";
	 		cout <<  matrix2[row_matrix2][column_matrix2];
		}
	}
	
	cout << "Matrix 2 is: ";
	for (int i =0; i<row_matrix2; i++)
	{
		for (int j=0; j<column_matrix2; j++)
		{
			cout << matrix2[row_matrix2][column_matrix2];
		}

	}
}



int main()
{
	int noOfRows, noOfColumns;
	cout << "Enter size of row: ";
	cin >> noOfRows;
	cout << "Enter size of columns: ";
	cin >> noOfColumns;

	int matrix1[MAX_SIZE][MAX_SIZE];	
   input(matrix1, noOfRows, noOfColumns);
	
}

