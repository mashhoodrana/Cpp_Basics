#include <iostream>
#include <string>

using namespace std;

main()
{
	//first user registered mean signup, after using the app 
	
	string Name, passWord, yourName, yourPassword;
	int PIN, yourPIN;
	cout << "Enter your Name: ";
	cin >> Name;
	
	cout << "Enter your password: ";
	cin >> passWord;
	
	cout << "Enter your Pin: ";
	cin >> PIN;
	
	cout << "Congratulations, Your registration is done." << endl;
	
	cout << "Enter your name for Login: ";
	cin >> yourName;
	cout << "Enter your password for login: ";
	cin >> yourPassword;
	cout << "Enter your Pin: ";
	cin >> yourPIN;
	
	if (Name == yourName)
	{
		if (passWord == yourPassword)
		{
			cout << "You entered correct password.";
		}
		else
		{
			cout << "you entered wrong password";
		}
		
		if (PIN == yourPIN)	
		{
			cout << "\nWelcome to the dashboard.";
		}
		else
		{
			cout << "You entered wrong pin.";
		}
	}
	
    else 
    {
    	cout << "You entered wrong credientials.";
	}

}