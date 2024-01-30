#include <iostream>

using namespace std;

main ()
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


	



