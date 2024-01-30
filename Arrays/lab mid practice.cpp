#include <iostream>

using namespace std;

int main() 
{

	int row_matrix_1;
	int row_matrix_2;
	int column_matrix_1;
	int column_matrix_2;
	
	int  row_matrix_3;
	int  column_matrix_3;
	
	int matrix1[row_matrix_1][column_matrix_1];
	int matrix2[row_matrix_2][column_matrix_2];
	int matrix3[row_matrix_3][column_matrix_3];
	
	 cout << "Enter the rows of first matrix: ";
	 cin >> row_matrix_1;
	 cout << "Enter the columns of first matrix: ";
	 cin >> column_matrix_1;
	 
	 cout << "Enter the rows of second matrix: ";
	 cin >> row_matrix_2;
	 cout << "Enter the columns of second matrix: ";
	 cin >> column_matrix_2;
	 

	 
	 for (int i=0; i<row_matrix_1; i++)
	 {
	 	for (int j=0; j<column_matrix_1; j++)
	 	{
	 		cout << "enter the value of " << i << j << "index: ";
	 		cout <<  matrix1[row_matrix_1][column_matrix_1];
		}
	}
	
	cout << "Matrix 1 is: ";
	for (int i=0; i<row_matrix_1; i++)
	 {
	 	for (int j=0; j<column_matrix_1; j++)
	 		cout <<  matrix1[row_matrix_1][column_matrix_1];
	 }
	 
	cout << "Matrix 2 is: ";
	for (int i =0; i<row_matrix_2; i++)
	{
		for (int j=0; j<column_matrix_2; j++)
		{
			cout << matrix2[row_matrix_2][column_matrix_2];
		}
	}

	if (column_matrix_2==row_matrix_2)	
	{
		for (int i=0; i<row_matrix_1; i++)
		{
			for (int j=0; j<column_matrix_2; j++)
			{
				int sum=0;
				for (int k=0; k<column_matrix_1;  k++)
				{
					sum += matrix1[row_matrix_1][column_matrix_3] * matrix1[row_matrix_3][column_matrix_3];
				}
				matrix3[row_matrix_3][column_matrix_3] = sum;
				cout << matrix3[row_matrix_3][column_matrix_3];
			}
		}
	}
	else
	cout << "Error occured!, columns of first matrix is not equal to rows of second matrix...";
	

}