//enter two integer 90+ A, 80+B, 70+C, 60+D, 50+E

#include <iostream>

using namespace std;
 main()
{
	float grade;
	cout << "Enter your PF marks: ";
	cin >> grade;
	
	if (grade >= 90 && grade <= 100)
	{
		cout << "Your grade is A. ";
	}
	else if (grade >= 80 && grade < 90)
	{
		cout << "Your grade is B ";
	}
	else if (grade >= 70 && grade < 80)
	{
		cout << "Your grade is C ";
	}
	else if (grade >= 60 && grade < 70)
	{
		cout << "Your grade is D";
	}
	else if (grade >= 50 && grade < 60)
	{
		cout << "Your grade is E";
	}	
	else 
	{
		cout << "Your grade is F.";
	}
	return 0;
}






