#include <iostream>
#include <iomanip>

using namespace std;

int main ()

//Q1

/*{
	for (int i = 1; i<=5; i++)
	{
		cout << i<<"    "<< 6 - i << endl;
	}
	
	
}*/

//Q2

/*{
	int sum = 0;
	for (int i = 1; i<=5; i++)
	{
		sum = sum + i;
		cout << i<<"    "<< sum << endl;
	}
}*/

//Q3-----

/*{
	
	int sum = 0;
	
	for (int i = 1; i<=100; i++)
	{
		sum = sum + 1/i*i;
		
	}
	cout << sum << endl;
	
}*/



//Q4

/*{
	for (char i = 'A'; i <='Z'; i++)
	{
		cout << i << endl;
		
	}
}*/


//Q5---
/*{
	int n, o;
	cout << "Enter the whole numbers: ";
	cin >> n;
	cout << n << " is largest number";
	
	for (n; n<o; n++)
	{
		cout << n << " is smallest.";
	}
	
	
	
}*/

{
	int qs , a, b, c, d, ans;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	for (int i = 1; i<=20; i++)
	{
		cout << "What is 9 + 10?";
		cout << "11" << setw(5) << "15";
		cout << "19" << setw(5) << "18";
		cin >> qs;
		cin >> ans;
		
		switch (ans)
		{
			case 11:
				a++;
				break;
			case 15:
				b++;
				break;
			case 19:
				c++;
				break;
			case 18:
				d++;
				break;			 
		}
		
		
	}
}

