#include <iostream>

using namespace std;

struct student
{
    int rno, marks;
    float gpa;
};

void input(student*);
void output(student*);


int main()
{
    student data;
    input(&data);
    output(&data);
}

void input(student *m)
{

    cout<<"Enter the roll NO: ";
    cin>>m->rno;
    cout<<"Enter the marks: ";
    cin>>m->marks;
    cout<<"Enter the GPA: ";
    cin>>m->gpa;
}

void output(student *n)
{
    cout<<"Roll NO: "<<n->rno<<endl<<"Marks: "<<n->marks<<endl<<"GPA: "<<n->gpa;
}
