#include <iostream>
#include <string>

using namespace std;

void reverse(string str[100])
{
    for(int i=4; i>=0; i--)
    {
        cout<<str[i]<<" ";
    }
}

int main()
{
    string str[20];
    string* ptr;
    
    for(int i=0; i<=4; i++)
    {
        cin>>str[i];
    }
    
    reverse(str);
}