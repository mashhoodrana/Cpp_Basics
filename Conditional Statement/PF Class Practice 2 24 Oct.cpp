#include <iostream>
#include <string>

using namespace std;

main()
{
	//first user registered mean signup, after using the app 
	
	string Name, passWord, yourName, yourPassword;
	cout << "Enter your Name: ";
	cin >> Name;
	cout << "Enter your password: ";
	cin >> passWord;
	
	cout << "Congratulations, Your registration is done" << endl;
	
	cout << "Enter your name for Login: ";
	cin >> yourName;
	cout << "Enter your password for login: ";
	cin >> yourPassword;
	
	if (Name == yourName)
	{
		if (passWord == yourPassword)
		{
			cout << "Now you are on the Dashboard";
		}
		else
			cout << "you entered wrong password";
    }
    else 
    {
    	cout << "You entered wrong name.";
	}
	
	
	
}