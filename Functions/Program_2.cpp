#include <iostream>

using namespace std;

int main()
{
    int arr[2][2] = {1, 2,
                     3, 4};

    int row_index, coloumn_index;
    cout << "Tell the row-index you want to locate the value: ";
    cin >> row_index;  
    cout << "Tell the row-index you want to locate the value: ";
    cin >> coloumn_index;      

    cout << "The value at index (" << row_index << coloumn_index << ") is " << arr[row_index][coloumn_index];
       
}