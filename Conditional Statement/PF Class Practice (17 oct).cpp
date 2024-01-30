// program to writee which number is greater than other
#include <iostream>

using namespace std;

int main ()
{
	int a, b, c, max;
	cout <<"Enter value of a:";
	cin >> a;
	cout <<"Enter value of b: ";
	cin >> b;
	cout <<"Enter value of c: ";
	cin >> c;
	
	
	if (b > a) 
	{
	
		cout << b << " is greater than " << a << endl;	
	}
	if (a > b)
	{
		
		cout <<  a << " is greater than " << b << endl;
	}
	if ( c > a)
	{
		
		cout <<  c << " is greater than " << a << endl;	
	}
}
	
	
//Program to find one number which is greater among three number, 
// Nested-if statement.	
	
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


// if-else statement


#include <iostream>

using namespace std;

int main () 
{ double grade, salary, increment1, increment2, newSalary1, newSalary2;
	cout << "What is your salary ? :" ;
	cin >> salary;
	cout << "What is your grade ? :" ;
	cin >> grade;
	
	if (grade <= 16)
	{
		increment1 = 10/100; 	
		newSalary1 = increment1 * salary;
		newSalary1 = newSalary1 + salary;
		cout << "After increment your Salary is " << newSalary1;
	}
	else
	{
		increment2 =  5/100; 	
		newSalary2 = increment2 * salary;
		newSalary2 = newSalary2 + salary;
		cout << "After increment your Salary is " << newSalary2;
	}
	
	
}

// if statement


#include <iostream>

using namespace std;

int main () 
{ float grade, salary, increment1, increment2, newSalary1, newSalary2;
	cout << "What is your salary ? " ;
	cin >> salary;
	cout << "What is your grade ? " ;
	cin >> grade;
	
	if (grade <= 16)
	{
		increment1 = 0.1; 	
		newSalary1 = increment1 * salary;
		newSalary1 = newSalary1 + salary;
		cout << newSalary1;
	}
	if (grade > 16)
	{
		increment2 = 0.05; 	
		newSalary2 = increment2 * salary;
		newSalary2 = newSalary2 + salary;
		cout << newSalary2;
	}
	
	
}


		
		
		
	
		
			
		
		
		
		
		
		
		
		
		