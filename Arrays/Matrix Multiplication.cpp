#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Assuming a maximum size for the matrices

void input(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
	{
        for (int j = 0; j < columns; ++j)
		{
            cout << "Enter the value at index [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    int noOfRows, noOfColumns;

    cout << "Enter the number of rows: ";
    cin >> noOfRows;

    cout << "Enter the number of columns: ";
    cin >> noOfColumns;

    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

    cout << "Input for Matrix 1:\n";
    input(matrix1, noOfRows, noOfColumns);

    cout << "Input for Matrix 2:\n";
    input(matrix2, noOfRows, noOfColumns);

    // Displaying matrices
    cout << "Matrix 1:\n";
    for (int i = 0; i < noOfRows; ++i) {
        for (int j = 0; j < noOfColumns; ++j) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:\n";
    for (int i = 0; i < noOfRows; ++i) {
        for (int j = 0; j < noOfColumns; ++j) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
