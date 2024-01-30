#include <iostream>

using namespace std;

int main()

/*{
	int side1, side2, side3, sum12, sum23, sum13;
	
	cout << "Enter first side of a triangle: ";
	cin >>  side1;
	cout << "Enter second side of a triangle: ";
	cin >>  side2;
	cout << "Enter third side of a triangle: ";
	cin >>  side3;
	
	sum12 = side1*side1+side2*side2;
	
	sum13 = side1*side1+side3*side3;
	
	sum23 = side2*side2+side3*side3;
	
	if (sum12==side3*side3)	
	{
		cout << "The sum of squares of side-1 and side-2 is " << sum12 << endl;
		cout << "The square of side-3 is " << side3*side3 << endl;
		cout << "So, the triangle is a right angle.";
	}
	else if (sum13==side2*side2)
	{
		cout << "The sum of squares of side-1 and side-3 is " << sum13 << endl;
		cout << "The square of side-2 is " << side2*side2 << endl;
		cout << "So, the triangle is a right angle.";
	}
	else if (sum23==side1*side1)
	{
		cout << "The sum of squares of side-2 and side-3 is " << sum23 << endl;
		cout << "The square of side-1 is " << side1*side1 << endl;
		cout << "So, the triangle is a right angle.";
	}
	else
	{ 
		cout << "The triangle is not a right angle";
	}
}*/

//TASK---2..............

/*{
	int amount;
	cout << "amount: ";
	cin >> amount;
	
	 
	
	int fiveHundred = amount / 500;
	amount %= 500;
	
	int hundred = amount / 100;
	amount %= 100;
	
	int fifty = amount / 50;
	amount %= 50;
	
	int twenty = amount / 20;
	amount %= 20;
	
	int ten = amount / 10;
	amount %= 10;
	
	int five = amount / 5;
	amount %= 5;
	
	int two = amount / 2;
	amount %= 2;
	
	int one = amount / 1;
	amount %= 1;
	
	cout << "Total number of notes: " << endl;
  cout << "500: " << fiveHundred << endl;
  cout << "100: " << hundred << endl;
  cout << "50: " << fifty << endl;
  cout << "20: " << twenty << endl;
  cout << "10: " << ten << endl;
  cout << "5: " << five << endl;
  cout << "2: " << two << endl;
  cout << "1: " << one << endl;
}*/

{
  int noOfLines, n = 1;

  
  cout << "Enter the number of lines: ";
  cin >> noOfLines;

  
  for (int i = 1; i <= noOfLines; ++i)
  {
    
    for (int j = 0; j < noOfLines - i; ++j)
	{
      cout << " ";
    }

    for (int j = 1; j <= i; ++j)
	{
      cout << n++ << " ";
    }

   
    if (i > 1)
	{
      for (int j = i-1; j>=1; j--)
	  {
        cout << --n << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
