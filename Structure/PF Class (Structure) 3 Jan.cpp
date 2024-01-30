#include <iostream>

using namespace std;

//struct Student{ //Keyword variable---Structure Name
//	int rno; //Memeber variable 
//	int marks;
//	float average;
//	char grade;
//};

//int main()
//{
//	Student s;
//	cout << "Enter your roll-no: ";
//	cin >> s.rno;
//	cout << "Enter your marks: ";
//	cin >> s.marks;
//	cout << "Enter average: ";
//	cin >> s.average;
//	cout << "Enter grade: ";
//	cin >> s.grade;
//	
//	cout << "You entered the following details: " << endl;
//	cout << "Roll-No: " << s.rno << endl;
//	cout << "Marks: " << s.marks << endl;
//	cout << "Average: " << s.average << endl;
//	cout << "Grade: " << s.grade << endl;
//}

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
struct student{
	int m1, m2; //data member(variables) & member function
	
		int display()
	{
		cout << "Average is " << (m1+m2)/2;
	}
	
};

int main()
{
	student s1;
	s1.m1=10;
	s1.display();
	


	return 0;
}