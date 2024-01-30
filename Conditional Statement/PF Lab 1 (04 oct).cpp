#include <iostream>


using namespace std;

	 main()
	{
		//task 1
		int num1;
		num1 = 10;
			cout<<num1<<endl;
			
		float num2;
		num2 = 3.5;
			cout<<num2<<endl;
			
		char ch;
		ch = 'A';
			cout<<ch<<endl;
			
		bool isTrue;
		isTrue = true;
			cout<<isTrue<<endl;
		 //task 2	
		float sum;
		sum = num1 + num2;
			cout<<sum<<endl;	
			
		float difference;
		difference = num1 - num2;
			cout<<difference<<endl;
			
		float product;
		product = num1 * num2;
			cout<<product<<endl;
			
		float quotient;
		quotient = num1 / num2;	
			cout<<quotient<<endl;
		
		 float remainder;
		remainder =  num1 % (int) num2;
			cout<<remainder<<endl;
			
		//task 3
		
		num1 = 3;
		num2 = 3;
		bool isEqual;
		isEqual = (num1==num2);
			cout<<isEqual<<endl;	
		int num3 = 9;
		bool isNotEqual;
		isNotEqual = (num1!=num3);
			cout<<isNotEqual<<endl;
			
		bool isGreater;
		isGreater = (num3 > num2);
			cout<<isGreater<<endl;
			
		bool isLess;
		isLess = (num2 < num3);
			cout<<isLess<<endl;
			
		bool isGreaterorEqual;
		isGreaterorEqual = (num3 >= num1);
			cout<<isGreaterorEqual<<endl;
			
		bool isLessorEqual;
		isLessorEqual = (num1 <= num3);
			cout<<isLessorEqual<<endl;					
			
		bool logicalAndResult, logicalOrResult, logicalNotResult;
		
		logicalAndResult = (num3 >= num1 && num1<= num3);
			cout<<logicalAndResult<<endl;
			
		logicalOrResult = (num3 > num2 || num3 < num2);
			cout<<logicalOrResult<<endl;
			
		logicalNotResult = !(num3 <= num2 && num2 >= num3);
			cout<<logicalNotResult;	 	
		return 0;			
	}
	
	