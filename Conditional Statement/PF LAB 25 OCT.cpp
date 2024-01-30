#include <iostream>

using namespace std;

main ()
{
	char a;
	cout << "Enter the character: ";
	cin >> a;
	
	
	if (a >= 'a' && a <= 'z')
	{
		cout << "Entered character is a lowercase letter.";	
	}
	else 
	{
		cout << "Entered character is not a lowercase letter." ;	
	}
	return 0;
	
	
}

/*{
	char s, S, i, I, ch;
	cout << "Enter a character: ";
	cin >> ch;
	
	if (ch == 's' || ch == 'S')
	{
		cout << "Your salary is Rs.400/week.";
	}
	else if (ch == 'i' || ch == 'I')
	{
		cout << "Your salary is Rs.275/week.";
	}
	else
	cout << "Error Message.";
}*/


/*{
	int a, b, c;
	cout << "Entered first integer: ";
	cin >> a;
	cout << "Entered second integer: ";
	cin >> b;
	cout << "Entered third integer: ";
	cin >> c;
	
	if (a != 0)
	{
		if (b%a == 0 && c%a == 0)
		cout << "a can divide both b and c "; 
		else 
		{
			cout << "a can not divide both b and c.";
		}
	}
	else
	cout << "a is equal to 0.";
	
}*/


/*{
	char S, T, ch;
	cout << "Write an alphabet S or T: ";
	cin >> ch;
	
	if (ch == 'S')
	{
		cout << "The formula to calculate the area of sqaure is: area = side*side. ";
	}
	else if (ch == 'T')
	{
		cout << "The formula to calculate the area of triangle is: area = 1/2 * base * height . ";
	}
	else 
	cout << "You entered the alphabet other than S and T.";
}*/

/*{
	int a;
	char b;
	float celcius, fahrenhite;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a letter: ";
	cin >> b;
	
	if (b == 'f')
	{
		celcius = (a - 32) * 5/9;
		cout << "The temperature is " << celcius;
			
	}
	else if (b == 'c')
	{
		fahrenhite = (a * (9/5)) + 32;
		cout << "The temperature is " << fahrenhite << ".";
	}
	else
	cout << "Wrong message.";
	return 0;
}*/

/*{
	int  a;
	cout << "Enter a number from 1 to 5: ";
	cin >> a;
	
	if (a == 1)
	{
		cout << "Western Digital";
	}
	else if (a == 2)
	{
		cout << "3M Corporation";
	}
	else if (a == 3)
	{
		cout << "Maxwell Corporation";
	}
	else if (a == 4)
	{
		cout << "Sony Corporation";
	}
	else if (a == 5)
	{
		cout << "Verbatim Corporation";
	}
	else
	cout << "you entered the number other than 1 to 5.";
	
}*/




/*{
	char  a;
	cout << "Enter a character: ";
	cin >> a;
	
	if (a == 'A')
	{
		cout << "Adventure movies";
	}
	else if (a == 'C')
	{
		cout << "Comedy movies";
	}
	else if (a == 'F')
	{
		cout << "Family movies";
	}
	else if (a == 'H')
	{
		cout << "Horror movies";
	}
	else if (a == 'S')
	{
		cout << "Science fiction movies.";
	}
	else
	cout << "you entered the wrong character.";
}*/



/*{
	int a;
	char b;
	double cm, liters, km, KG;
	cout << "Enter a value: ";
	cin >> a;
	cout << "Enter type conversion: ";
	cin >> b;
	
	if (b == 'i')
	{
		cm = a * 2.54;
		cout << cm;
	}
	else if (b == 'g')
	{
		liters = a * 3.785;
		cout << liters;
	}
	else if (b == 'm')
	{
		km = a * 1.609;
		cout << km;
	}
	else if (b == 'p')
	{
		KG = a * .4536;
		cout << KG;
	}
	else 
		cout << "You entered wrong message.";
	
}*/


/*{
	int year;
	cout << "Enter a year: ";
	cin >> year;
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if(year % 400 == 0)
			{
				cout << "Leap year";	
			}
			else
			{
			cout << "Not a leap year";
			}
		}
		else
		{
		cout << "Leap year";
		}
		
	}
	else 
	cout << "not a leap year";
}*/

/*{
	int a;
	cout << "Enter the temperature: ";
	cin >> a;
	
	if (a > 35)
	{
		cout << "Hot day";
	}
	else if (a > 25 && a < 35)
	{
		cout << "Pleasent day";
	}
	else if (a < 25)
	{
		cout << "Cool day";
	}
	else
		cout << "Wrong message.";	
	
	
	
}


{
	cout<<"tufail";
	int marks;
	float p;
	cout << "Enter obtained marks: ";
	cin >> marks;
	
	p = (marks/100) * 100;
	 cout << "Your percentage is " << p << endl;
	 
	 if (p>=80.0)
	 	{
	 		cout << "Your grade according to percentage is: A+";
	 		
		}
	 
		else
			cout << "Your grade according to percentage is: F";					
	
	
	
}*/


/*{

Q11

	float obm;
	float p;
	cout << "Enter your obtained marks: ";
	cin >> obm;
	 
	 p = (obm/1100) * 100;
	 cout << "Your percentage is " << p << endl;
	 
	 if (p >= 80)
	 	cout << "A+";
	 else if (p >= 70 && p < 80)
	 	cout << "A-";
	 else if (p >= 60 && p < 70)
	 	cout << "B";
	 else if (p >= 50 && p < 60)
	 	cout << "C";
	 else if (p >= 40 && p < 50)
	 	cout << "D";
	 else if (p >= 33 && p < 40)
	 	cout << "E";	
	 else if (p < 33)
	 	cout << "F";
		 
	 else
	 	cout << "Error";	 	  	 	 	
		 	
}*/


/*{
Q12
	int mt, st, add;
	cout << "Enter time in Military time: ";
	cin >> mt;
	
	if (mt > 12)
	{
		st = mt - 12;
		cout << "The standard time is: " << st << ":00PM";	
	}
	else if (mt >= 0000)
	{
		st = 12 - mt;
		cout << "The standard time is: " << st << ":00PM";
	}
	else 
		cout << "Error";
}*/


/*{
Q12 alternative
    int militaryTime;
    
    // Input military time
    cout << "Enter military time (e.g., 1430 for 2:30 PM): ";
    cin >> militaryTime;

    // Convert to standard time
    int hours = militaryTime / 100;
    int minutes = militaryTime % 100;
    
    if (hours >= 0 && hours < 12) {
        cout << "Standard time: " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " AM" << endl;
    } else {
        if (hours != 12) {
            hours -= 12;
        }
        cout << "Standard time: " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " PM" << endl;
    }

    return 0;
}*/




//Q-13 miss


/*{

	double salary, newSalary; 
	cout << "Enter the salary of an emloyee: ";
	cin >> salary;
	
	if (salary >= 30000)
	{
		newSalary = salary - (20.0 / 100.0) * salary;
		cout << "Your salary is  " << salary << ", " << "after the income tax of 20% your net salary is " << newSalary;	
	}
	else if (salary >= 20000 && salary < 30000)
	{
		newSalary = salary - (15.0 / 100.0) * salary;
		cout << "Your salary is " << salary << ", " << "after the income tax of 15% your net salary is " << newSalary;	
	}
	else if (salary < 20000)
	{
		newSalary = salary - (10.0 /100.0) * salary;
		cout << "Your salary is " << salary << ", " << "after the income tax of 10% your net salary is " << newSalary;	
	}
	else 
	cout << "Error Message";

}*/




/*{
Q15
	int year, month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the Month: ";
	cin >> month;
	
	if (month == 1)
	{
		cout << "January " << year << " has 31 Days.";
	}

	else if (month == 5)
	{
		cout << "May " << year << " has 31 Days.";
	}
	else if (month == 6)
	{
		cout << "June " << year << " has 30 Days.";
	}
	else if (month == 7)
	{
		cout << "July " << year << " has 31 Days.";
	}
	else if (month == 8)
	{
		cout << "August " << year << " has 31 Days.";
	}
	else if (month == 9)
	{
		cout << "September " << year << " has 30 Days.";
	}
	else if (month == 10)
	{
		cout << "October " << year << " has 31 Days.";
	}
	else if (month == 11)
	{
		cout << "November " << year << " has 30 Days.";
	}	
	else if (month == 12)
	{
		cout << "December " << year << " has 31 Days.";
	}
	else if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
        	cout << "Feburary " << year << " has 29 Days.";
    	} 
		else 
		{
        cout << "Feburary " << year << " has 28 Days.";
    	}
				
	}	
	
}8/


/*{
Q16
	int days, payment;
	char ch;
	cout << "Enter the type of vehicle: ";
	cin >> ch;
	cout << "Enter the number of days: ";
	cin >> days;
	
	if (ch == 'M')
	{
		payment = 10 * days;
	cout << "Your charges for the parking is: " << payment;	
	}
	else if (ch == 'C')
	{
		payment = 20 * days;
		cout << "Your charges for the parking is: " << payment;
	}
	else if (ch == 'B')
	{
		payment = 30 * days;
		cout << "Your charges for the parking is: " << payment;
	}
	else
	cout << "Wrong vehicle type.";
	 
}*/



/*{
	Q17
	float a, cm, litre, km, KG;
	char type;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a type: ";
	cin >> type;
	
	
	if (type == 'c')
	{
		cm = a * 0.394;
		cout << cm;	
	}
	else if (type == 'l')
	{
		litre = a * 0.264;
		cout << litre;	
	} 
	else if (type == 'K')
	{
		KG = a * 2.2;
		cout << KG;
	}
	else if (type == 'k')
	{
		km = a * 0.622;
		cout << km;
	}
	else
	cout << "You entered wrong type."
	
}*/



















