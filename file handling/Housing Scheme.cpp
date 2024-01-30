#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <ctime>

void addParticipant();
void draw();
void func();

using namespace std;

int main()
{
	cout<<"\n======================================================\n\n";
	cout<<"\t\tPM HOUSING SCHEME\n\n";
	cout<<"1: Add Participant\n";
	cout<<"2: Lucky Draw\n";
	cout<<"3: End Program\n\n";
	cout <<"=======================================================\n";
	
	int choice;
	cout<<"Enter your choice 1,2 or 3: ";
	cin>>choice;             
	switch(choice)
	{
		case 1:
			{
				addParticipant();
				break;
			}
		case 2:
			{
				draw();
				break;
			}
		case 3:
			{
				cout<<"Exiting...............";
			}
		default:
			{
				cout<<"You did not select the right option, try again";
				main();
			}
	}
	
}

void addParticipant()
{
	system("cls");
	int salary, c, pin;
	string fName, lName, phone;
	
	ofstream data;
	data.open("data.txt", ios::app);
	
	cout<<"Enter your total income: ";
	cin>>salary;
	
	if(salary <= 50000)
	{
		cout<<"Eligible";
		data<<salary<<endl;
	}
	else
	{
		cout<<"You are not eligible\n";
		main();
	}
	
	cout<<"Enter your First Name: ";
	cin>>fName;
	
	cout<<"Enter your Last Name: ";
	cin>>lName;
	
	cout<<"Enter your Contact Number: ";
	cin>>phone;
	
	srand(time(0));
	pin = rand() % 900 + 100;
	cout<<"Your assigned unique pin is: "<<pin<<endl;
	
	data<<fName<<endl<<lName<<endl<<phone<<endl<<pin<<endl<<endl;
	cout<<"=========================================\n";
	data.close();
	
	
	func();
	
	
	

	
}

void draw()
{
	string line;
	int count;
	ifstream data;
	data.open("data.txt");
	
	 int registrationNumber;
        int marks, PIN;
		srand(time(0));
		PIN = rand() % 900 + 100;
		cout<<PIN<<endl<<endl;
		int targetRegistrationNumber=PIN;

	while (getline(data, line)) 
	{
        istringstream iss(line);
        iss >>registrationNumber >> PIN;

        if (registrationNumber == targetRegistrationNumber) 
        {
        	count=1;
        	break;
     	}
    }
    
    
    if(count==1)
    {
    	cout<<"The person having pin "<<PIN<<" has won the bike\n";
	}
    
    else
        {
        	cout<<"No one win the free house. Better Luck Next Time";
		}
    
    data.close();
    main();
}
void func()
{
	int c;
	cout<<"Enter 1 to add another person Or 0 to Return Main Menu: ";
	cin>>c;
	
	
	if(c==0)
	{
		main();
	}
	else if(c==1)
	{
		addParticipant();
	}
	else
	{
		cout<<"You choose the wrong option";
	}
	
		cout<<"\n========================================================";
	
	
	
	
}