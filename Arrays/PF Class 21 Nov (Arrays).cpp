#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	int num[10];
	
	for (int i=0; i<10; i++)
	{
		cout << "Enter the marks of student " << i << ": ";
		cin >> num[i];
	}
	
	int max = 0, j;
	for (int i=0; i<10; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			j = i+1;
		}
	}
	cout << "The maximum number is " << max << "at the index " << j;
	
	
}