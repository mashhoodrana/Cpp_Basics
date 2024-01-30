#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main ()
{
 	int window1, window2, door;

	
	cout << "Tell which one is open and which is closed?";
	cout << endl;
	cout << "Widnow1 (0 for closed and 1 for open): ";
	cin >> window1;
	cout << "Window2 (0 for closed and 1 for open): ";
	cin >> window2;
	cout << "Door1 (0 for closed and 1 for open): ";
	cin >> door;
	cout << endl;
	
	if (window1==1 && window2 == 0 && door == 0)
	{
		cout << "\aThe alarm-a is making noise";
	}
	else if (window1==1 && window2 == 1 && door == 0)
	{
		cout << "\aThe alarm-b is making noise";
	}
	else if (window1==1 && window2 == 1 && door == 1)
	{
		cout << "\aThe alarm-c is making noise";
	}
	else if (window1==1 || window2 == 1 || door == 1)
	{
		cout << "\aThe alarm-d is making noise";
	}
}

{
	
}
