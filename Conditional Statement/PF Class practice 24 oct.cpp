#include <iostream>
#include <string>

using namespace std;

main()
{
	//first user registered mean signup, after using the app 
	
	string Name, passWord, yourName, yourPassword;
	cout << "Enter your Nmae: ";
	cin >> Name;
	cout << "Enter your password: ";
	cin >> passWord;
	
	cout << "Congratulations, Your registration is done";
	
	cout << "Enter your name for Login: " << endl;
	cin >> yourName;
	cout << "Enter your password for login: " << endl;
	cin >> yourPassword;
	
	if (Name == yourName && passWord == yourPassword)
	{
		cout << "Welcome to the dashboard.";
	}
	else
		cout << "You entered wrong credentials.";
		
	
	
	
}