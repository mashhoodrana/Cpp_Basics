#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    arr[1] = 2;

    for (int i:arr)
    {
        cout <<i<< endl;
    }
}