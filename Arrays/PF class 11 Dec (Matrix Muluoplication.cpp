#include <iostream>

using namespace std;

void display(int a[2][2]);
void input(int b[2][2]);


int main()
{
	int a1[2][2]; 
	input(a1);				
	display(a1);
	cout << endl;
				   
	int a2[2][2];

	input(a2);
	display(a2);
	cout << endl;
				   
	int a3[2][2];
	
	int sum;
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			sum = 0;
			for (int k=0; k<2; k++)
			{
				sum += a1[i][k]*a2[k][j];
			}
			a3[i][j]=sum;
			
		}
	
	}
	display(a3);
}


void display(int a1[2][2]) //display
{
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout << a1[i][j]<<"\t";
		}
		cout << endl;
	}	
}


void input(int a2[2][2]) //input
{
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout << "Enter value: ";
			cin >> a2[i][j];
		}
	}	

}








