#include <iostream>

using namespace std;

int main()
{
	int a1[3][2] = {{1, 1}, {1, 1}, {1, 1}}; 
					
	int a2[2][3] = {{2, 2, 2}, {2, 2, 2}};
					
	int c[3][3];				
					
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			int sum = 0;
			for (int k=0; k<3; k++)
			{
				sum += a1[i][k] * a2[k][j];
			}
			c[i][j] = sum;
			cout << c[i][j] << " ";
		}
		cout << endl;		
	}	

}