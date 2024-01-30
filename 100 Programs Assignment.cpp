#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
#include <string>
const double pi = 3.14;

using namespace std;

int main ()

//Q1

{

//Check weather a number is even or odd

	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	if (n % 2 == 0)
	{
		cout << n << " is an even number.";
	}
	else 
	{
		cout << n << " is a odd number.";
	}
	return 0;
}

//Q2

{

//Compare two numbers and print the larger one

	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	if (num1 > num2)
	{
		cout << num1 << " is greater than " << num2;
	}
	else
	{
		cout << num2 << " is greater than " << num1;
	}
	return 0;
}

//Q3

{

//check a character is a vowel or a consonant

	char ch;
	cout << "Enter an alphabet: ";
	cin >> ch;
	
	if (ch == 'a' || ch == 'A')
	{
		cout << ch << " is a vowel.";
	}
	else if (ch == 'e' || ch == 'E')
	{
		cout << ch << " is a vowel.";
	}
	else if (ch == 'i' || ch == 'I')
	{
		cout << ch << " is a vowel.";
	}
	else if (ch == 'o' || ch == 'O')
	{
		cout << ch << " is a vowel.";
	}
	else if (ch == 'u' || ch == 'U')
	{
		cout << ch << " is a vowel.";
	}
	else
	{
		cout << ch << " is a consonant.";
	}
	return 0;
}

//Q4

{
//Check students is passed or not

	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	
	if (marks >= 33)
	{
		cout << "Congratulations, You passed the exam.";
	}
	else 
	{
		cout << "Unfortunately, You failed the exam.";
	}
	return 0;
}

//Q5

{

//Check weather a year is a leap year or not 
	
	int year;
	cout << "Enter a year: ";
	cin >> year;
	
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		cout << year << " is a leap year.";
	}
	else 
	{
		cout << year << " is a not a leap year.";
	}
	return 0;
}

//Q6

//which number is greater

{
	int a, b, c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	
	if (a >= b && a >= c)
	{
		cout << a << " is greater.";
	}
	else if (b >= a && b >= c)
	{
		cout << b << " is greater.";
	}
	else
	{
		cout << c << " is greater.";
	}
	return 0;
}

//Q7

{
//check weather a number is positive, zero or negative

	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	if (num > 0)
	{
		cout << num << " is a positive number.";
	}
	else if (num < 0)
	{
		cout << num << " is a negative number.";
	}
	else
		cout << "The number is zero.";
		return 0;
}

//Q8



{
	double amount, discountedPrice;
	cout << "Enter the purchasing amount: ";
	cin >> amount;
	
	if (amount >= 50000) //15% discount on greater than or equal to $500
	{
		discountedPrice = amount - (amount * 0.15);
		cout << "The amount after discount is: " << discountedPrice;
	}
	else if (amount >= 25000) //10% discount between $250 and $500 
	{
		discountedPrice = amount - (amount * 0.1);
		cout << "The amount after discount is: " << discountedPrice;
	}
	else if (amount >= 10000) //5% discount between $250 and $500 
	{
		discountedPrice = amount - (amount * 0.05);
		cout << "The amount after discount is: " << discountedPrice;
	}
	return 0;
}

//Q9

{

//Check weather a number is perfect square or not 

	int num, squareRoot;
	cout << "Enter a number: ";
	cin >> num;
	
	squareRoot = sqrt(num);
	cout << squareRoot << endl;
	if (squareRoot * squareRoot == num)
	{
		cout << num << " is a perfect square.";
	}
	else
	{
		cout << num << " is not a perfect square.";
	}
	return 0;
}

//Q10

{

//check weather a character is alphabet.

	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	
	if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ))
	{
		cout << ch << " is an alphabet";
	}
	else
		cout << ch << " is not an alphabet";
		return 0;
}  

//Q11

{
	int num1, num2, num3, num4;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	cout << "Enter fourth number: ";
	cin >> num4;
	
	if (num1 >= num2 && num1 >= num3 && num1 >= num4)
	{
		cout << num1 << " is the largest number.";
	}
	else if (num2 > num1 && num2 >= num3 && num2 >= num4)
	{
		cout << num2 << " is the largest number.";
	}
	else if (num3 > num1 && num3 > num2 && num3 >= num4)
	{
		cout << num3 << " is the largest number.";
	}
	else if (num4 > num1 && num4 > num2 && num4 > num3)
	{
		cout << num4 << " is the largest number.";
	}
	return 0;
	
} 

//Q-12

{
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	
	if (marks >= 90)
	{
		cout << "Your grade is A.";
	}
	else if (marks >= 80 && marks < 90)
	{
		cout << "Your grade is B.";
	}
	else if (marks >= 70 && marks < 80)
	{
		cout << "Your grade is C.";
	}
	else if (marks >= 60 && marks < 70)
	{
		cout << "Your grade is D.";
	}
	else if (marks >= 50 && marks < 60)
	{
		cout << "Your grade is E.";
	}
	else
	{
		cout << "You failed the exam..";
	}
	return 0;
}

//Q-13

{
	int side1, side2, side3;
	cout << "Enter three sides of the triangle: ";
	cin >> side1 >> side2 >> side3;
	
	if (side1 == side2 == side3)
	{
		cout << "This is an Equilateral triangle.";
	}
	else if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		cout << "This is an isosceles triangle.";
	}
	else if (side1 != side2 || side1 != side3 || side2 != side3)
	{
		cout << "This is a scalene triangle.";
	}
	return 0;
}

//Q-14

{
	int x, y;
	cout << "Enter two points: ";
	cin >> x >> y;
	
	if (x > 0 && y > 0)
	{
		cout << "The points " << x << " and " << y << " lies in the first quadrant.";
	}
	else if (x < 0 && y > 0)
	{
		cout << "The points " << x << " and " << y << " lies in the second quadrant.";
	}
	else if (x < 0 && y < 0)
	{
		cout << "The points " << x << " and " << y << " lies in the third quadrant.";
	}
	else if (x > 0 && y < 0)
	{
		cout << "The points " << x << " and " << y << " lies in the fourth quadrant.";
	}
	return 0;
}

//Q-15

{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << year << " is a leap year." << endl;
		cout << year << " is both a leap year and common year.";
	}
	else 
	{
		cout << year << " is a common year.";
	}
	return 0;
}


//Q-17

{
	int a;
	a = 1;
	
	name:
	cout << a << ": My name is Mashhood Rana." << endl;
	a++;
	
	if (a <= 10) goto name; 
	cout << "End of the program.";
	getch();
}

//Q-18

{
	int numerator = 10, denominator = 0, result = 0;
	
	
	errorHandler:
		cout << "Error! division by zero is not possible.";
		getch();
		return 1;
		
	if (denominator == 0) goto errorHandler;
	{
		result = (numerator/denominator);
		cout << "The result is " << result;
	}
	return 0;
}

//Q-19

{
	int i = 1;
	
	number:
		cout << i << endl;
		i++;
		
	if (i <= 10) goto number;
	{
		cout << "End";
	}
	return 0;
}

//Q-20
{
   for (int i = 0; i < 5; ++i)
   {
        for (int j = 0; j < 5; ++j)
		{
            if (i == 2 && j == 3)
			{
                goto endLoops; // Breaking out of the nested loops when condition is met
            }
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    endLoops: 
    cout << "Exited nested loops!" << endl;

    return 0;
}

//Q21

{
	int sum, N;
	
	cout << "Enter the natural number: ";
	cin >> N;
	
	for (int i=1; i<=N; i++)
	{
		sum += i;
	}
	cout << "The sum of the natural number upto N is " << sum;
	return 0;
}

//Q-22

{
	int number;
	cout << "Enter the number of which you want to print the table: ";
	cin >> number;
	
	for (int i = 1; i<=10; i++)
	{
		cout << number << " * " << i << " = " << number * i << endl;
	}
	return 0;
}

//Q-23

{
	int i=0, n, first=0, second=1, next;
	cout << "Enter the number u want to print the fibonacci series: ";
	cin >> n;
	
	cout << "Fibonacci series: ";
	while (i<n)
	{
		cout << first << setw(3);
		next = first+second;
		first=second;
		second=next;
		i++;
	}
	return 0;
	
}

//Q-24

{
	double n, factorial=1.0;
	cout << "Enter the number: ";
	cin >> n;
	
	for (int i = 1; i<=n; i++)
	{
		factorial *= i;
	}
	cout << factorial;
	return 0;
}

//Q-25

{
	int n, power=1, base, exponent;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exponent;
	
	
	for (int i = 0; i<exponent; ++i)
	{
		power *= base;
	}
	cout << power;
}

//Q-26

{
	int n, prime=1;
	cout << "Enter the number untill you want to print the prime numbers: ";
	cin >> n;

	for (int i=2; i<=n; i++)
	{
		for (int j = 2; j<=i; j++)
		{
			if (i%j==0)
			{
				break;
			}
			else if (i==j+1)
			{
				cout << i << " ";
			}
		}
	}
}

//Q-27

{
	int n;
	cout << "Enter the limit till you want to print the odd number: ";
	cin >> n;
	for (int i = 1; i <=n; i += 2)	
	{
		cout << i << endl;
	}
}

//Q-29

{
	int n = 3;
	for (int i=1; i<=n; i++)
	{
		for (int j=2; j>=i; j--)
		{
			cout <<" ";
		}
		for (int k=1; k<=(i*2)-1; k++)
		{
			cout <<"*";
		}
		cout << endl;
	}
}

//Q-30

{
	int n, num, digit, rev=0;
	cout << "Enter the number you want to check the palindrome: ";
	cin >> num;
	n = num;
	
	for(int i=num; i!=0;)
	{
		digit = i%10;
		rev= (rev*10) + digit;
		i /=10;
	}
	if (n==rev)
		{
			cout << n << " is a palindrome.";
		}
		else
		{
			cout << n << " is not a palindrome.";
		}
}

{
	int num1, num2;
	char op;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2;
	
	switch (op)
	{
		case '+': 
			cout << num1+num2; 
			break;
		case '-':
			cout << num1-num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		case '/':
			cout << num1/num2;
			break;
		default: 
			cout << "You enter the wrong operator.";				
	}
}

//Q-32

{
	int n;
	cout << "Enter the number of the day: ";
	cin >> n;
	
	switch (n)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "You entered wrong number.";							
	}
}

//Q-33

{
	int n;
	cout << "Enter the number of the month: ";
	cin >> n;
	
	switch (n)
	{
		case 1:
			cout << "January";
			break;
		case 2:
			cout << "Feburary";
			break;
		case 3:
			cout << "March";
			break;
		case 4:
			cout << "April";
			break;
		case 5:
			cout << "May";
			break;
		case 6:
			cout << "June";
			break;
		case 7:
			cout << "July";
			break;
		case 8:
			cout << "August";
			break;
		case 9:
			cout << "September";
			break;
		case 10:
			cout << "October";
			break;
		case 11:
			cout << "November";
			break;
		case 12:
			cout << "December";
			break;
								
		default:
			cout << "You entered wrong number.";							
	}
}

//Q-34


{
	int number;
	cout << "Enter one number: ";
	cin >> number;
	
	switch (number)
	{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		case 10:
			cout << "Ten";
			break;
		default:
			cout << "Number out of range.";
	}	
}

//Q-35


/*{
	int choice, m;
	cout << "1:    Go to menu  \n";
	cout << "2: Start a new game! \n";
	cout << "3: Start the previous game! \n";
	cout << "4: Go to Settings \n\n";
	
	cout << "Click on your choice: ";
	cin >> choice;
	
	switch (choice)	
	{
		case 1:
			cout << "  Go to menu  ";
			break;
		case 2:
			cout << "Game is Starting...........";
			break;
		case 3:
			cout << "Game is Starting...........";
			break;
		case 4: 
			cout << "Personal Settings \n";
			cout << "Change your Avatar \n";
			cout << "Password change \n";
			break;
		default: 
			cout << "Number out of range.";			
				
	}
	return 0;
}*/

//Q-36

{
	int shape;
	cout <<  "1: Circle"<<endl;
	cout << " 2: Rectangle"<<endl;
	cout << " 3: Triangle" << endl;
	
	cout << "Which you shape do you want to display?: ";
	cin >> shape;
	
	switch (shape)
	{
		case 1:
			cout << "    * " << endl;
			cout << " *    *" << endl;
			cout << "*       *" << endl;
			cout << " *     *" << endl;
			cout << "    *" << endl;
			break;
			
		case 2:
			cout << "*******"<<endl;
			cout << "*     *"<<endl;
			cout << "*     *"<<endl;
			cout << "*******";
			break;
		case 3:
			cout << "    * "   <<endl;
			cout <<"   *** "    <<endl;
			cout <<"  ***** "   <<endl;
			cout << " ******* ";
			break;
		default: 
			cout << "You entered wrong number.";		
	}
	
	
}



//Q-37

/*{
	double celcius, fahrenhite, c,f;
	int temp;
	cout << "1: Celcius to fahrenhite"<<endl;
	cout << "2: fahrenhite to Celcius "<<endl;
	
	cout << "Which conversion do you want: ";
	cin >> temp;
	
	switch (temp)
	{
		case 1:
			cout << "Enter the temperature in celcius: ";
			cin >> c;
			fahrenhite = (9/5)*c+32;
			cout << fahrenhite << "F";
			break;
		case 2:
			cout << "Enter the temperature in fahrenhite: ";
			cin >> f;
			celcius = (f-32)*5/9;
			cout << celcius << "C" << endl;
			break;
			default: 
				cout << "Invalid input.";	
	}
}*/

//Q-38

/*{
	int n;
	cout << "Enter the number of the day to check its weekday or weekend: ";
	cin >> n;
	
	switch (n)
	{
		case 1:
			cout << "Monday-----It's a 'Weekday";
			break;
		case 2:
			cout << "Tuesday-----It's a Weekday";
			break;
		case 3:
			cout << "Wednesday-----It's a Weekday";
			break;
		case 4:
			cout << "Thursday-----It's a Weekday";
			break;
		case 5:
			cout << "Friday-----It's a Weekday";
			break;
		case 6:
			cout << "Saturday-----It's Weekend";
			break;
		case 7:
			cout << "Sunday-----It's Weekend";
			break;
		default:
			cout << "You entered wrong number.";
	}
	return 0;
}*/

//Q-39

/*{
	int reg;
	cout << "1: 100 to 1000" << endl;
	cout << "2: 1001 to 2000" << endl;
	cout << "3: 2001 to 3000" << endl;
	
	cout << "Select your regestration number category: ";
	cin >> reg;	
	
	switch (reg)
	{
		case 1:
			cout<< "The type of vehicle is Bike";
			break;
		case 2:
			cout << "The type of vehicle is Car";
			break;
		case 3: 
			cout << "The type of vehicle is Bus";
			break;
			
		default:
			cout << "Out of range";			
	}
	return 0;
}*/


//Q-40

/*{
	int shopping, cost;
	int coldDrink = 70, biscuit = 100, lays = 150;
	int tShirt = 2000, trackSuit = 4000, sneakers = 5000;
	int pencil = 30, clipBoard = 200, noteBook = 400;
	
	
	
	cout << "1: Grocery" << endl;
	cout << "2: Asseccories" << endl;
	cout << "3: Statioary" << endl;
	
	cout << "Which type of item you purchase?: ";
	cin >> shopping;
	
	switch (shopping)
	{
		case 1: 
			cost = 2*coldDrink+biscuit+3*lays;
			cout << "Your cost for shopping cart is " << cost;
			break;
		case 2: 
			cost = 3*tShirt+2*sneakers+trackSuit;
			cout << "Your cost for shopping cart is " << cost;
			break;
		case 3: 
			cost = 10*pencil+5*noteBook+clipBoard;
			cout << "Your cost for shopping cart is " << cost;
			break;
			
		default:
			cout << "Not in range";		
	}
	return 0;
}*/


//Q-41

/*{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	if (age>=18)
	{
		cout << "You are eligible for voting.";
	}
	else
	{
		cout << "Unfortunately, you are not eligible for voting.";
	}
	return 0;
}*/


//Q-42

/*{
	double r, area, w, l, b, h;
	string shape;
	cout << "Which type of shape you want to calculate its area: ";
	cin >> shape;
	
	if (shape == "circle")
	{
		cout << "Enter the radius of the circle: ";
		cin >> r;
		area = pi*r*r;
		cout << "The area of the circle is " << area;
	}
	else if (shape == "rectangle")
	{
		cout << "Enter the width and length of the rectangle: ";
		cin >> w >> l;
		area = w*l;
		cout << "The area of the rectangle is " << area;
	}
	else if (shape == "triangle")
	{
		cout << "Entet the base and height of the triangle: ";
		cin >> b >> h;
		area = (b*h)/2;
		cout << "The area of the triangle is " << area;
	}
	return 0;
	
}*/


//Q-43

/*{
	string a = "deed";
	/*cout << "Enter a four letter word: ";
	cin >> a;
	
	if (string [0] == string[3] && string[1] == string[2])
	{
		cout << a << " is a palindrome";
	}
}*/


//Q-44

/*{
	int side1, side2, side3;
	cout << "Enter three sides of the triangle: ";
	cin >> side1 >> side2 >> side3;
	
	if (side1 == side2 == side3)
	{
		cout << "This is an Equilateral triangle.";
	}
	else if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		cout << "This is an isosceles triangle.";
	}
	else if (side1 != side2 || side1 != side3 || side2 != side3)
	{
		cout << "This is a scalene triangle.";
	}
	return 0;	
	
}*/

//Q-45

/*{
	int a, b, c, max, min;
	
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	
	if (a>b && a>c)
	{
		max = a;		
		(b>c) ? min=c : min=b ;
	}
	else if (b>a && b>c)
	{
		max = b;
		(a>c) ? min=c : min=a;
	}
	else if (c>a && c>b)
	{
		max = c;
		(a>b) ? min=b : min=a;
	}
	
	cout << max << " is the largest." << endl << min << " is the smallest.";	
	
}*/


//Q-46

/*{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << year << " is a leap year." << endl;
	}
	else 
	{
		cout << year << " is not a leap year.";
	}
	return 0;	
	
}*/


//Q-47

/*{
	int units, pricePerUnit, bill;
	cout << "Enter the units consumed last month: ";
	cin >> units;
	
	if (units <= 100)
	{
		pricePerUnit = 25;
		bill = units*pricePerUnit;
		cout << "Your electricity bill is " << bill;
	}
	else if (units <= 200 && units > 100)
	{
		pricePerUnit = 32;
		bill = units*pricePerUnit;
		cout << "Your electricity bill is " << bill;
	}
	else if (units > 300)
	{
		pricePerUnit = 40;
		bill = units*pricePerUnit;
		cout << "Your electricity bill is " << bill;
	}
	return 0;
}*/


//Q-48

/*{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	if (n%3==0 && n%5==0)
	{
		cout << n << " is a multiple of 3 and 5.";
	}
	else
	{
		cout << n << " is not a multiple of 3 and 5";
	}
	return 0;
	
}*/

//Q-49


/*{
	int n, flag=0;
	cout << "Enter a number: ";
	cin >> n;
	
	for (int i=1; i<n; i++)
	{
		if (i*i==n)
		{
			flag = 1;
			break;
		}
		if (i*i>n)
		{
			break;
		}
	}
	if (flag==1)
	{
		cout << endl << n << " is a perfect square."; 
	}
	else
	{
		cout << endl << n << " is not a perfect square.";
	}
	return 0;
}*/


//Q-50

/*{
	int time;
	
	cout << "Enter the current time: ";
	cin >> time;
	if (time >= 6 && time < 12)
	{
		cout << "Good Morning!";
	}
	else if (time >=12 && time < 15)
	{
		cout << "Good Afternoon!";
	}
	else if (time >=15 && time > 19)
	{
		cout << "Good Evening!";
	}
	else if (time >=19 && time <= 0)
	{
		cout << "Good Night!";
	}
	return 0;
	
}*/

//Q-51

/*{
	char ch;
	cout << "Enter any character: ";
	cin >> ch;
	
		if (ch >= 'a' && ch < 'z')
		{
			cout << "You entered a lowercase letter.";
		}
		else if (ch >= 'A' && ch < 'Z')
		{
			cout << "You entered a uppercase letter.";
		}
		else if (ch>=0)
		{
			cout << "You entered a digit.";
		}
		else
		{
			cout << "You entered a symbol.";
		}
	return 0;	
		
}*/

//Q-52


/*{
	int n, flag=0;
	cout << "Enter a number: ";
	cin >> n;
	
	for (int i=1; i<n; i++)
	{
		if (i*i*i==n)
		{
			flag = 1;
			break;
		}
		if (i*i*i>n)
		{
			break;
		}
	}
	if (flag==1)
	{
		cout << endl << n << " is a cube root."; 
	}
	else
	{
		cout << endl << n << " is not a cube root.";
	}
	return 0;
}*/

//Q-53

/*{
	int a, b, c;
	cout << "Enter the values of a, b and c: ";
	cin >> a >> b >> c;
	
	int discriminant = (b*b)- 4*a*c;

	if (discriminant > 0)
	{
		cout << "The roots are real and distinct.";
	}
	else if (discriminant == 0)
	{
		cout << "The roots are equal and distinct.";
	}
	else if (discriminant < 0)
	{
		cout << "The roots are imagianry.";
	}
		
}*/

//Q-54

/*{
	int n1, n2, n3, n4, n5;
	
	cout << "Enter five numbers: " << endl;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	
	if 
	
	
	
}*/

//Q-55

/*{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << year << " is a leap year." << endl;
	}
	else 
	{
		cout << year << " is not a leap year.";
	}
	return 0;
}*/

//Q-56

/*{
	char ch;
	cout << "Enter an alphabet or a digit: ";
	cin >> ch;
	
	if (ch >= 'a' && ch < 'z' || ch >='A'&& ch < 'Z')
	{
	
		cout << "It is an alphabet.";	
	}
	else if (ch >= 0)
	{
		cout << "It is a digit.";
	}
	return 0;
}*/

//Q-57

/*{
	int x, y;
	cout << "Enter two points: ";
	cin >> x >> y;
	
	if (x > 0 && y > 0)
	{
		cout << "The points " << x << " and " << y << " lies in the first quadrant.";
	}
	else if (x < 0 && y > 0)
	{
		cout << "The points " << x << " and " << y << " lies in the second quadrant.";
	}
	else if (x < 0 && y < 0)
	{
		cout << "The points " << x << " and " << y << " lies in the third quadrant.";
	}
	else if (x > 0 && y < 0)
	{
		cout << "The points " << x << " and " << y << " lies in the fourth quadrant.";
	}
	return 0;
}*/

//Q-58

/*{
		double purchaseAmount;
  		double discountPercentage = 0.0;

  		cout << "Enter purchase amount: $";
  		cin >> purchaseAmount;

  		if (purchaseAmount <= 100)
  		{
   			 discountPercentage = 0.0;
  		} 
  		else if (purchaseAmount <= 200)
  		{
    		discountPercentage = 0.05;
  		} 
  		else if (purchaseAmount <= 500)
  		{
    		discountPercentage = 0.10;
  		} 
  		else
  		{
    		discountPercentage = 0.15;
  		}

  			double discountedPrice = purchaseAmount * (1.0 - discountPercentage);

  				cout << "Discount percentage: " << discountPercentage * 100 << "%" << endl;
  				cout << "Final price: $" << discountedPrice << endl;

  return 0;

}*/
		
//Q-59

/*{
	int n, num, digit, rev=0;
	cout << "Enter the number to check the palindrome: ";
	cin >> num;
	n = num;
	while (num!=0);
	{
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
	}
	
	if (n==rev)
	 	cout << n << " is Palindrome.";
	else
		cout << n << " is not Palindrome.";
}*/	

//Q-60

/*{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	if (n > 0)
	{
		cout << n << " is a positive number." << endl;
		if (n%2==0)
		{
			cout << n << " is an even number.";
		}
		else
		{
			cout << n << " is a odd number.";
		}
	}
	
	else if (n < 0)
	{
		cout << n << " is a negative number." << endl;
		if (n%2==0)
		{
			cout << n << " is an even number.";
		}
		else
		{
			cout << n << " is a odd number.";
		}
	}
	else if (n == 0)
	{
		cout << n << " is Zero.";
	}
	
	return 0;
}*/

//Q61

/*{
	int seconds=10;
	
	start_timer:
	if (seconds > 0)
	{
		cout << seconds << " seconds remaining......" << endl;
		seconds--;
		goto start_timer;
	}
	else 
		cout << "Countdown Complete!";
		return 0;
	
}*/

//Q-62

/*{
	 int choice;
 	 double num1, num2;

  	menu:

	cout << "**Menu**" << endl;
  	cout << "1. Addition" << endl;
  	cout << "2. Subtraction" << endl;
  	cout << "3. Multiplication" << endl;
  	cout << "4. Division" << endl;
  	cout << "5. Exit" << endl;

  	cout << "\nEnter your choice: ";
  	cin >> choice;

  switch (choice) {
    case 1:
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;
      cout << "The sum is: " << num1 + num2 << endl;
      break;

    case 2:
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;
      cout << "The difference is: " << num1 - num2 << endl;
      break;

    case 3:
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;
      cout << "The product is: " << num1 * num2 << endl;
      break;

    case 4:
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;
      if (num2 == 0) {
        cout << "Error: Division by zero" << endl;
      } else {
        cout << "The quotient is: " << num1 / num2 << endl;
      }
      break;

    case 5:
      cout << "Exiting the program..." << endl;
      break;

    default:
      cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
      goto menu;
  }

  return 0;
}*/
	
	
//Q-63

/*{
	int choice, m;
	cout << "1:    Go to menu  \n";
	cout << "2: Start a new game! \n";
	cout << "3: Start the previous game! \n";
	cout << "4: Go to Settings \n\n";
	
	cout << "Click on your choice: ";
	cin >> choice;
	
	switch (choice)	
	{
		case 1:
			cout << "  Go to menu  ";
			break;
		case 2:
			cout << "Game is Starting...........";
			break;
		case 3:
			cout << "Game is Starting...........";
			break;
		case 4: 
			cout << "Personal Settings \n";
			cout << "Change your Avatar \n";
			cout << "Password change \n";
			break;
		default: 
			cout << "Number out of range.";			
				
	}
	return 0;
}*/

//Q-64

/*{
	string username1 = "MashhoodRana", pass1 = "205*M", username2, pass2;
	
	loginPage:
	cout << "Enter your username: ";
	cin >> username2;
	cout << "Enter your password: ";
	cin >> pass2;
	
	
		
	if (username1 == username2 && pass1 == pass2)
	{
		cout << "Welcome to the Dashboard";
	}
	else 
	{
		cout << "Invalid Credentials----- Try Again" << endl; 
		goto loginPage;
	}
	return 0;
}*/


//Q-65

/*{
	string username1 = "MashhoodRana", pass1 = "205*M", username2, pass2;
	
	loginPage:
	cout << "Enter your username: ";
	cin >> username2;
	cout << "Enter your password: ";
	cin >> pass2;
	
	
		
	if (username1 == username2 && pass1 == pass2)
	{
		cout << "Welcome to the Dashboard";
	}
	else 
	{
		cout << "Invalid Credentials----- Try Again" << endl; 
		goto loginPage;
	}
	return 0;
}*/


//Q-66

/*{
	int n, sum=0;
	
	cout << "Enter the number: ";
	cin >> n;
	
	while (n > 0)
	{
		sum += n%10;
		n /=10;
	}
	cout << "The sum of the digits of the number is: " << sum << endl;
	return 0;
}*/

//Q-68
	
/*{
	int m, n, o, digit;
	
	cout << "Enter the number: ";
	cin >> n;
	
	if (n > 0)
	{
		digit = n%10;
		n /=10;
		m=n/10;
		o=n%10;
		
		cout << "The reverse is " << digit << o << m;
	}
	return 0;
}*/
	
//Q-69

/*{
	int rows;
  		cout << "Enter the number of rows: ";
  		cin >> rows;

  		for (int i = 1; i <= rows; i++)
		{
    			for (char ch = 'A'; ch <= 'Z'; ch++)
				{
      			cout << ch << " ";
    			}
    			cout << endl;
  		}

  return 0;
}*/
	
//Q-70

/*{
	int n, first=0, second=1, next;
	cout << "Enter a number untill you want to print to the fibonacci series: ";
	cin >> n;
	cout << "fibonacci series: ";
	for (int i = 0; i<n; i++)
	{
		cout << first << setw(3);
		next = first+second;
		first = second;
		second = next;
	}
	cout << next;
}*/
		
//Q-71

/*{
	int num;
  	int sum = 0;
  	int temp;

  		cout << "Enter a number: ";
  		cin >> num;

  		temp = num;
  		while (temp > 0)
		  {
    		int fact = 1;
    		int digit = temp % 10;

    		for (int i = 1; i <= digit; i++)
			{
      		fact *= i;
   			}

    		sum += fact;
    		temp /= 10;
 		 }

  		if (sum == num)
  		{
    		cout << num << " is a strong number." << endl;
  		} 
  		else
  		{
    		cout << num << " is not a strong number." << endl;
  		}

  return 0;
}*/
		
//Q-72

/*{
	int n, j=1;
//print the series 2  5  10  17.....	
	cout << "Enter the number untill you want to print the series: ";
	cin >> n;
	for (int i = 2; i<=n; i+=j)
	{
		cout << i << setw(3);
		j+=2;
	}
	return 0;
}

//Q-73

{
	int n1, n2, evenSum=0, oddSum=0;
	cout << "Enter the starting number: ";
	cin >> n1;
	cout << "Enter the ending number: ";
	cin >> n2;
	
	for (int i=n1; i<=n2; i++)
	{
		if (i%2==0)
		{
			evenSum +=i;
	}
		
		else
		{
			oddSum += i;
		}
	}
		cout << "The sum of the even number is " << evenSum << endl;
		cout << "The sum of the odd number is " << oddSum;
	return 0;
	
}*/

//Q-74

/*{
	int num1=0;
	int flag=true;
	int counter=0;
	int factor=0;
	int counter2=0;
	
	cout<<"Please enter a number"<<endl;
	cin>>num1;
	cout<<endl;

	
	for (counter=2; counter<num1; counter++){
		
		if (num1%counter==0){
			
			factor=counter;
		}
		
		else {
			
			continue;
			
		}
		
		for (counter2=2; counter2<factor; counter2++){
			
			if (factor%counter2==0){
				
				flag=false;
				break;
			}
			
			else {
				
				flag=true;
			}
		}
		
		if (flag==true)
		{
			
			cout<<factor<<endl;
		}
	}
}*/


//Q-75

/*{
	int num1, num2;
	char op;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2;
	
	switch (op)
	{
		case '+': 
			cout << num1+num2; 
			break;
		case '-':
			cout << num1-num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		case '/':
			cout << num1/num2;
			break;
		default: 
			cout << "You enter the wrong operator.";				
	}
}
	

//Q-78

{
	int num1, num2;
	char op;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2;
	
	switch (op)
	{
		case '+': 
			cout << num1+num2; 
			break;
		case '-':
			cout << num1-num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		case '/':
			cout << num1/num2;
			break;
		default: 
			cout << "You enter the wrong operator.";				
	}
}

	
//Q-79

{
	int noOfHours, monthlySalary, pricePerHour=200;
	
	
		cout << "How many hours did u work?: ";
		cin >> noOfHours;
		
		switch (noOfHours)
		{
			case 30:
				{
					monthlySalary = pricePerHour*noOfHours;
					cout << "$" << monthlySalary;
					break;
				}
			case 45: 
			{
				monthlySalary = pricePerHour*noOfHours;
				cout << "$" << monthlySalary ;
				break;
			}
			case 60: 
			{
				monthlySalary = pricePerHour*noOfHours;
				cout << "$" << monthlySalary;
				break;
			}
				
		}
		return 0;
		
}
		
	
//Q-80	
	
{
	
	int n;
	cout << "Enter the number of the day: ";
	cin >> n;
	
	switch (n)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "You entered wrong number.";							
	}
}	
	
//Q-81	
	
{
	char ch;
	
//Classify a character as a consonant,
vowel, digit, or symbol using switch

  cout << "Enter a character: ";
  cin >> ch;

  switch (ch) {
    case
 
			'a': case
 
			'e': case
 
			'i': case
 
			'o': case
 
			'u':case
 
			'A': case
 
			'E': case
 
			'I': case
 
			'O': case
 
			'U':
      		cout << ch << " is a vowel" << endl;
      		break;

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      cout << ch << " is a digit" << endl;
      break;

    default:
      cout << ch << " is a consonant or symbol" << endl;
      break;
  }

  return 0;
}
	
	
//Q-82

{
	int grade;
  string gradeDescription;

//Convert a given grade into its equivalent description (A, B, C, etc.) using switch

  cout << "Enter the grade: ";
  cin >> grade;

  switch (grade) {
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
      gradeDescription = "A";
      break;

    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
      gradeDescription = "B";
      break;

    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
      gradeDescription = "C";
      break;

    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
      gradeDescription = "D";
      break;

    default:
      gradeDescription = "F";
      break;
  }

  cout << "The grade is: " << gradeDescription << endl;

  return 0;
	
	
}*


//Q-83

{
	int angle;

  cout << "Enter the angle: ";
  cin >> angle;

  switch (angle) {
    case 0:
    case 1:
    case 2:
    case ...:
    case 89:
      cout << "The angle is acute" << endl;
      break;

    case 90:
      cout << "The angle is right" << endl;
      break;

    case 91:
    case 92:
    case 93:
    case ...:
    case 179:
      cout << "The angle is obtuse" << endl;
      break;

    default:
      cout << "Invalid angle" << endl;
      break;
  }

  return 0;
}
	
//Q-85

{
	char ch;
	
//Classify a character as a consonant, vowel,using switch

  cout << "Enter a character: ";
  cin >> ch;

  switch (ch) 
  {
    case
 
			'a': case
 
			'e': case
 
			'i': case
 
			'o': case
 
			'u':case
 
			'A': case
 
			'E': case
 
			'I': case
 
			'O': case
 
			'U':
      		cout << ch << " is a vowel" << endl;
      		break;

		    default:
      		cout << ch << " is a consonant or symbol" << endl;
      		break;
  }

  return 0;
}
		

//Q-86

{
//Leap year or not

	int year;
	cout << "Enter the year: ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << year << " is a leap year." << endl;
	}
	else 
	{
		cout << year << " is not a leap year.";
	}
	return 0;
}





	
	


