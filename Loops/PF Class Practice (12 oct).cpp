/*#include <iostream>

using namespace std;

int main()
	{ 				//Qs1: Write a c++ program to swap two numbers using temp variable
		int x, y, temp;
		
		cout << "Enter two numbers: " << endl;
		cin >> x;
		cin >> y;
		temp = x;
		x = y;
		y = temp;
		cout << "The value of x and y after swapping using third variable is:  " << "x = " << x << " and " << " y = " << y << endl;
		
		
		
		//Q2: Write a c++ program to swap two numbers without using temp variable
		
		int a, b;
		a = 987;
		b = 564;
		 
		b = a + b;
		a = b - a;
		b = b - a;
		cout << "The value of a and b after swapping without using third variable is:  " << "a = " << a << " and " << " b = " << b << endl; 
		
		
		//Q3: compute mean, median & mode 
		
		int c, d, e, f, g, h, Mean, Median;
		cout << "Enter multiple numbers: " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		cin >> f;
		cin >> g;
		cin >> h;
		
		//Mean
		
		Mean = (a + b + c + d + e + f + g + h)/8;
			cout << "The Mean of these numbers is: " << Mean << endl;
			
		//Median
		
		
		
		//Q5: Conversion of units
		
		int meter, cm; 
		float gram, pounds, KG, kg ;
		
		gram = 1987;
		kg = gram/1000;
		cout << "kg = " << kg << endl;
		
		meter = 456;
		cm = meter*100;
		cout << "cm = " << cm << endl;
		
		pounds = 70;
		KG = pounds*0.453592;
		cout << "pounds = " << KG << endl;
		
	}*/
	
	
	
	
	#include <iostream>
	

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b : ";
	cin >> b;
	cout << "Enter the value of c : ";
	cin >> c;
	
	if (a > b)
	{
		if (a > c)
		{
			cout << "The greater number is " << a;
	    }
	    else
			cout << "The greater number is " << c;
	}
	if (b > c)
	{
		cout << "The greater number is " << b;
	}
	else
		cout << "The greater number is " << c;
	return 0;
		
}

