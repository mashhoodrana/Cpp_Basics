#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

struct phonebook
{
    string name;
    string city;
    double tel;
    date d;
};

int main()
{
   phonebook ph;
   cout<<"Enter your name: ";
   cin>>ph.name;
   cout<<"Enter your city: ";
   cin>>ph.city;
   cout<<"Enter telephone number: ";
   cin>>ph.tel;

    cout<<"Enter the date of birth: \n";
    cin>>ph.d.day;
    cin>>ph.d.month;
    cin>>ph.d.year;

    cout<<"Name: "<<ph.name<<endl<<"City: "<<ph.city<<endl<<"Ph: "<<ph.tel<<endl<<"Date of birth: "<<ph.d.day<<"/"<<ph.d.month<<"/"<<ph.d.year<<"\n";
    // cout<<"The size of the structure is: "<<sizeof(ph);
    
}