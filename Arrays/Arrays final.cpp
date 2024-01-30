#include <iostream>

using namespace std;

int main()

{
	// Maximum, Minimum marks and Average of Final.........
	   
	int fnl[10], fnlSum=0;
	double fnlAverage;
	
	for (int i=1; i<=10; i++)
	{
		fnl[i] = rand() % 50;
		fnlSum += fnl[i];
	}
	
	
	int totalMax=0, t;
	for (int i=1; i<=10; i++)
	{
		if (total[i] > totalMax)
		{
			totalMax = total[i];
			t = i+1;
		}
	}
	
		int totalMin=total[1], t2;
		for (int i=1; i<=10; i++)
	{
		if (total[i] < totalMin)
		{
			totalMin = total[i];
			t2 = i+1;
		}
	}
	
	totalAverage = totalSum/10;
	cout << "The maximum number is " << totalMax << " of Roll.No " << t << " in total." << endl;
	cout << "The minimum number is " << totalMin << " of Roll.No " << t2 << " in total."  << endl;
	cout << "The average of the class in total is " << totalAverage << endl;
}
	