#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
	int noOfStudents, i =1, highest=0, secondHighest=0, marks, n;
		cout << "Enter the number of students in class: ";
		cin >> n;
		
		while (i<=n)
		{
			cout << "Enter the marks: ";
			cin >> marks;  
			if (marks > highest)
			{
				secondHighest = highest;
				highest = marks;
			}
			if (marks > secondHighest && marks < highest)
			{
				secondHighest = marks;
			} 
			
			i++;
		}
		cout << "The highest marks is "<< highest;
		cout << "Second highest marks is " << secondHighest;
	return 0;	
}

{
	int num1, num2, num3, num4, average, counter = 1, holder;
	

	while (counter<=100)
	{
		cout << "Enter the number from 0-9: ";
		cin >> num1 >> num2 >> num3 >> num4;
	
	
		average = (num1+num2+num3+num4)/4;
		
		if (num1 < 10 && num2 < 10 && num3 < 10 && num4 < 10)
		{
			cout << "The average is " << average << endl;
		}
		else 
		{
			cout << "You entered number greater than or equal to 10." << endl;
		}
		counter++;
	}
		
}


{
	int n, prime=1;
	cout << "Enter the number untill you want to print the prime numbers: ";
	cin >> n;

	int i = 2;

	while (i<=n)
	{
		int j = 2;
		while (j<=i)
		{
			if (i%j==0)
			{
				break;
			}
			else if (i==j+1)
			{
				cout << i << " ";
			}
			j++;	
		}
		i++;
	}
		
}

{
	double factorial=1.0, n, n2, x;
	cout << "Enter the number utill you want to print the factorial: ";
	cin >> n;
	
	int i=1;
	while (i<=n)
	{
		factorial *= i;
		i++;
	}
		cout << "Factorial is " << factorial << endl;
		cout << "Do you want to print the factorial again?: ";
		cin >> x;
		if (x==1)
		{
			cout << "Enter the number utill you want to print the factorial: ";
			cin >> n2;
		}
		n2 =1;
	while (i<=n2)
	{
		factorial *= i;
		i++;
	}
	cout << "Factorial is " << factorial << endl;
				
}

{
	int n, i;
	cout << "Enter a prime number: ";
	cin >> n;
	bool isPrime = true;
	i =2;
	while (i <= n - 1)
	{
		
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
		i++;
	}
	
	if (isPrime == true)
	{
		cout << n << " a prime number";
	}
	else 
	{
		cout << n << " not a prime number";
	}
}




{
	
	int highest=0, secondHighest=0, n;
	cout << "Enter the number: ";
	cin >> n;
	while (n>0)
	{
		cout << n << endl;
		cout << "Enter the number: ";
		cin >> n;
			
			if (n > highest)
			{
				secondHighest = highest;
				highest = n;
			}
			if (n > secondHighest && n < highest)
			{
				secondHighest = n;
			} 
	}
	cout << "The second highest number is " << secondHighest;
}


{
	int num1=0;
	int counter=1;
	int n=0;
	int positive=0;
	int negative=0;
	
	cout<<"Please enter how many values you want to check"<<endl;
	cin>>n;
	cout<<endl;
	
	while (counter<=n)
	{
		
		cout<<"Please enter your number"<<endl;
		cin>>num1;
		cout<<endl;
		
		if (num1>0)
		{
			
			positive++;
		}
		
		else if(num1<0)
		{
			negative++;
		}
		counter++;
	}
		
		cout<<"The total number of positive numbers is = "<<positive<<endl;
		
		cout<<"The total number of negative numbers is " << " = "<<negative;
}



{
	int x, average, num, sum=0;
	cout << "Enter the number till you want to print the series: ";
	cin >> x;
	cout << "Enter the number: ";
	cin >> num;
	
	int i=1;
	while (i<=x)
	{
		average = pow(num, i); 
		sum += average;
		i++;
	}
	cout << sum;
	
	
}	

{
	int i =1, factorial=1, sum=0;
	while (i<=5)
	{
		factorial *= i;
		sum += factorial;
		i++;
	}	
	cout << sum;
	
	
}

{
	int i = 1, sum=0;
	
	while (i<=5)
	{
		
		int x=0,X=2;
		while(x<=4)
		{
			//cout<<i<<X<<x<<" ";

			sum+=i*(pow(X,x));
			x++;
			i++;	
		}
		
		cout<<sum;
		
	}
	
}

{
	double i =1.0, factorial=1.0, sum=0.0, n;
	cout << "Enter the limit you want to print the series: ";
	cin >> n;
	while (i<=n)
	{
		factorial *= i;
		sum += i/factorial;
		i++;
		factorial++;
	}	
	cout << sum;
	
	
}
















