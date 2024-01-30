#include <iostream>
#include <fstream>
//	In order to work with the files in c++, you have to open it. Primarily there are two ways to open
// 1: Using the constructor
// 2: using the member function open() of the class
using namespace std;

int main()
{
	// Opening files using constructor and writing it
	string st = "Mashhood";
	ofstream out("abcd.cpp"); // writing operations in the files //output stream used for writing from program to file
	out << st;
	
	
	string st2;
	ifstream in("abcd.cpp"); // reading operations in the files //input stream used for reading from file to program
	in << st2;
	getline(in, st2);
	cout << st2; 
}
	