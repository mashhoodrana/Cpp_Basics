
#include <iostream>

using namespace std;

void reverse(int a[], int n)
{ 
    
    cout << "\nReversed array is: ";
    for (int k = n-1; k>=0; k--) 
    {
        cout<<a[k] << " ";
    } 
}


int main()
{
    int size;
    cout << "Enter the size of the arary: ";
    cin >> size; 

    int arr[size];
    for (int i=0; i<size; i++)
    {
         cout << "Enter the " << i << " elements of the array: "; 
         cin >> arr[i]; 
    }
    reverse(arr, size); 

}

