#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registers();
void login();
void back();

int main()
{
    while (true) 
    {
        int choice;
        cout << "1: Login\n2: Register\n3: Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                {
                  login();
                }
                break;
            case 2:
                registers();
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

void registers()
{
    // -----------------username------------------

    //-----input username--------
    string username, name;
    cout<<"Enter username(rg): ";
    cin>>username;
    
    // -----checking input mail to existing data-----
    string line;
    ifstream names;
    names.open("names.txt");
    while(!names.eof())
    {
       getline(names, line);
    }

    if (username==line)
        {
            cout<<"Duplicate!, this username is already taken, try again with another username\n";
            main();
        }
        else
        {
            ofstream name;
            name.open("names.txt", ios::app);
            name<<endl<<username;
        } 

     //-----input password--------
    string password, pass;
    cout<<"Enter the password(rg): ";
    cin>>password;
    ofstream in;
    in.open("passwords.txt", ios::app);
    in<<endl<<password;
    in.close();


    
    
 }


void login()
{
    int count;
	string ID, pass;
	cout<<"Enter the email: \n";
	cin>>ID;
	cout<<"Enter the password: \n";
	cin>>pass;

    ifstream out;
    out.open("names.txt");
    ifstream in;
    in.open("passwords.txt");


if (!out.is_open() || !in.is_open()) {
    cout << "Error opening files!\n\n";
    // return 1; // Indicate error
}



string username, password;
while (getline(out, username) && getline(in, password)) 
{
    // Compare username and password here
    if (username == ID  && password == pass) 
    {
        count=1;
        system("cls");
    } 
}

if(count==1)
{
    cout << "Welcome to the portal!\n\n";
    back();
}

else
{
    cout<<"Credientials are wrong, try again with correct credientals\n\n";
    login();
}

out.close();
in.close();

}

void back()
{
    int choice;
        cout << "1: Login/signup page\n2: Logout\nEnter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                  main();
                  break;
            case 2:
               cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
}