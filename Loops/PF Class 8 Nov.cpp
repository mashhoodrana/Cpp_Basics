#include <iostream>

using namespace std;

int main()

{
	int pass;
	int pass1 = 1234;
	
	int i = 1;
	
	while (i<=3)
	{
		cout << "enter password: ";
		cin >> pass;
		if (pass==pass1)
		{
		cout << "Welcome";
		break;
		}
		else
		{
		cout << "Wrong attempt. " << 3 - i << " Remaining attempt" << endl;
		cout << "Try again" << endl;
		}
		i++;	
	}
	
	
}