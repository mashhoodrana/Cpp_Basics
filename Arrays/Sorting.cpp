#include <iostream>

using namespace std;

int main()

//Selection sorting

/*{
	int num[5], i, j, min, temp;
	
	for (int i=0; i<5; i++)
	{
		cout << "Enter value for " << i << " index: ";
		cin >> num[i];
	}

	for (int i=0; i<4; i++)
	{
		for (int j=i+1; j<5; j++)
		{
			if(num[j] < num[i])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	
	for (int i=0; i<5; i++)
		cout << num[i] << "\t";
}*/

{
	int num[5], i, j, min, temp; //num[5] == num[n], input
	
	for (int i=0; i<5; i++)
	{
		cout << "Enter value for " << i << " index: ";
		cin >> num[i];
	}
	
	int counter = 1;
	while (counter < 4) //n-1
	{
		for (int i=0; i<5-counter; i++)
		{
			if (num[i]>num[i+1])
			{
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}
			counter++;	
		}
	}
	
	for (int i=0; i<5; i++)
	{
		cout << num[i] << "\t";
	}
	
	
}