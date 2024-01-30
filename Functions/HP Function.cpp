/*#include <iostream>

using namespace std;

int sum(int a, int b);
	
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	sum(a, b);
}
int sum(int x, int y)
{

	int add = x+y;
	cout << add;
	//return add;
}*/

/*#include <iostream>

using namespace std;

void sum(int a);
	
int main()
{ 
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	sum(n);
}

void sum(int x)
{
 	int numBefore = x-1;
 	int afterNum = x+1;
 	cout << "The number before " << x << " is " << numBefore;
 	cout << "\nThe number after " << x << " is " << afterNum;
}*/

/*#include <iostream>

using namespace std;

void factorial(int a);
	
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	factorial(num);
}

void factorial(int x)
{
	int factorial = 1;
	for (int i=1; i<=x; i++)
	{
		factorial *= i;
	}
	
	cout << "Factorial of " << x << " is " << factorial << ".";
}*/

#include <iostream>

using namespace std;

char grade(int g);
	
int main()
{
	int marks;
	char m;
	cout << "Enter your marks out of 100: ";
	cin >> marks;
	
	m = grade(marks);
	cout << "Your grade is " << m;
	
}

char grade(int n)
{
	if (n >= 80)
	{
		return 'A';
	}
	else if (n > 60)
	{
		return 'B';
	}
	else if (n > 40)
	{
		return 'C';
	}
}




   