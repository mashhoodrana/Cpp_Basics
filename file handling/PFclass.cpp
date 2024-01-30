#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // ofstream my_file;
    // my_file.open("example.txt", ios::app);------------------> //ios is the mode of the file app=append in=ifstream(read), out=ofstream(write)
    // my_file<<"Mashhood Rana\n";
    // my_file<<"Welcome to CS04-A";
    // my_file.close();
    ifstream my_file;
    my_file.open("example.txt", ios::in);
    if(!my_file)//--------------> Is.open(), fail()
    {
        cout<<"Unable to open file";
    }

    char line;  
    while(!my_file.eof())  //--------->eof=end of file
    {
        my_file>>line;  // getline(my_file, line);---->for string
        cout<<line<<endl;
    }
    return 0;
}