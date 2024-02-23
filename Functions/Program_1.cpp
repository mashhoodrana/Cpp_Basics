#include <iostream>

using namespace std;

int main()
{
    int size, largest, second_largest;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements in the array: ";
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }


//Assigning maximum value to one of the index
    if(arr[0] < arr[1])
    {
        largest = arr[1];  /
        second_largest = arr[0];  
    }

    else
    {
        largest = arr[0];
        second_largest = arr[1];
    }

//checking each index with maximum number and changing it untill the loops terminate.

    for (int i=2; i<size; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest; 
            largest = arr[i]; 
        }

        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i]; //contains the second highest number in the array element
        }
    }

    cout << "\nThe second largest number is: " << second_largest;
}
