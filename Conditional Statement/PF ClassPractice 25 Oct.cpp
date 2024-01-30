#include <iostream>
#include <string>

using namespace std; 

main ()
/*{
   char c;
   cout << "Enter the character: ";
   cin >> c;
   
   switch (c) 
   {
   	 case 'a':
   	 case 'A':
	   cout << c << " is a vowel" << endl;
	   break;
	   
	case 'e':
   	case 'E':
	   cout << c << " is a vowel" << endl;
	   break;
	   
	case 'i':
   	case 'I':
	   cout << c << " is a vowel" << endl;
	   break;
	   
	case 'o':
   	case 'O':
	   cout << c << " is a vowel" << endl;
	   break;
	   
	case 'u':
   	case 'U':
	   cout << c << " is a vowel" << endl; 
	   break;  
	   
	   default:
	   	cout << c << " is not a vowel" << endl;
   }
   return 0;
   	
	      	
   		
}*/

{
	int a, b;
	char op;
	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;
	cout << "Enter an operator: ";
	cin >> op;
	
	switch (op)
	{
		case '+':
		cout << a+b << endl;
		break;
		
		case '-':
		cout << a-b << endl;
		break;
		
		case '*':
		cout << a*b << endl;
		break;
		
		case '/':
			if (b == 0)
			cout << "Division by zero!" << endl;
			else
		 	cout << a/b << endl;
		 	break;
		 	
		default:
		 		cout << "You entered a wrong operator.";
		
	}
	return 0;

}






















