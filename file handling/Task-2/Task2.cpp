#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    
    
    
    
    
    ofstream password;
    password.open("password.txt"); 
    password<<"@8khri";
    password.close();

    string userPassword, pt;
    cout << "Enter the password: ";
    cin >> userPassword;

    ifstream pass;
    pass.open("password.txt");
    pass>>pt;
    pass.close();

    if(userPassword==pt)
    {
        cout<<"Pass matches";
    }
    else
    {
        cout<<"not match";
    }
    
    
}