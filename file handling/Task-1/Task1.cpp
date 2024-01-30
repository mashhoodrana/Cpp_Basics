#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream my_file;
    my_file.open("example1.txt");
    
    int arr[5]={10, 11, 12, 13, 14};
    for (int i=0; i<=4; i++)
    {
       my_file<<arr[i];
    }
}