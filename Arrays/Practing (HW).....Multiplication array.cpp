#include <iostream>

using namespace std;

int main()

{
	int a1[2][4] = {{23, 85, 25, 55,}, {11, 21, 38, 95}};
	int max, min;
	max = min = a1[0][0];
	for (int i=0; i<2; i++)
		for (int j=0; j<4; j++)
		{
			if (a1[i][j] > max)
			max = a1[i][j];
			if (a1[i][j] < min)
			min = a1[i][j];
		}
	
	cout << "Maximum = " << max << endl << "Minimum = " << min; 
}