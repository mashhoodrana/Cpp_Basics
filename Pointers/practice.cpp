#include <iostream>

using namespace std;

void exchange(int*, int*);
void input(int*);
void dbl(int*);

struct data
{
    char name[30];
    int id;
    int pages;
};

int main()
{
//    char str[]="Hi, I'm here!";
//    char *ptr, n;
//    cout<<"Enter a character: ";
//    cin>>n;
// int count;
// ptr=str;

// while(*ptr++ != '\0')
// {
//     if(*ptr==n)
//    {
//         count = 1;
//    }
// }

// if(count==1)
// {
//     cout<<"The element is found in the array";
// }
// else
// cout<<"not found";

// int a, b;
// cin>>a;
// cin>>b;

// cout<<"Values before swapping is: \n";
// cout<<"a ="<<a<<endl;
// cout<<"b ="<<b<<endl;

// exchange(&a, &b);

// cout<<"Values After swapping is: \n";
// cout<<"a ="<<a<<endl;
// cout<<"b ="<<b<<endl;

// int number;
// input(&number);
// cout<<"You enterd "<<number<<endl;
// dbl(&number);
// cout<<"double is: "<<number;

    data recs, *p;

    p=&recs;
    cout<<"Enter the name: ";
    cin.get(p->name, 30);
    cout<<"Enter the id: ";
    cin>>p->id;    
    cout<<"Enter the pages: ";
    cin>>p->pages;

    cout<<"Name: "<<p->name<<endl<<"ID: "<<p->id<<endl<<"Pages: "<<p->pages;


}

void input(int *m)
{
    cout<<"Enter a number: ";
    cin>>*m;
}

void dbl(int *n)
{
    *n=*n*2;
}

void exchange(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}