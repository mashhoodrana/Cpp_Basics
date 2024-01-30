#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

//Q--1................

/*{
	  int arr[10], counter=0;

    
    for(int i=0; i<10; i++)
	{
		cout <<"Enter the integer: ";
        cin >> arr[i];
        int prime = 1;
        
		if(arr[i] <= 1)
		{
            prime = 0;
        } 
		else
		{
            for(int j = 2; j*j <= arr[i]; j++)
			{
                if(arr[i] % j == 0)
				{
                    prime = 0;
                    break;
                }
            }
        }
        
        if(prime)
		{
            counter++;
        }
    }

    cout << "Total prime numbers: " << counter << endl;
}*/
//Q-2......................

/*{
	int rno[5];
	int marks[5];
	
	for (int i=1; i<6; i++)
	{
		cout << "Enter the Roll No of student: ";
		cin >> rno[i]; 
	}
	
	for (int i=1; i<6; i++)
	{
		cout << "Enter the Marks of student: ";
		cin >> marks[i]; 
	}
	
	
	cout<<"Roll No"<<setw(11)<<"Marks"<<endl;
			
				for (int i=1; i<6; i++)
					{
			       		cout << rno[i]<< setw(15) << marks[i] << endl; 
					}
					
					int max =0, j;
					for (int i=1; i<6; i++)
					{
						if (marks[i] > max)
						{
							max = marks[i];
							j = i;
						}
					}
					cout << "The highest number is " << max << " of Roll.No " << j << "."<< endl;
					return 0;
					
}*/

//Q--3.............................

/*{
	
    int numbers[10], squares[10], cubes[10], sums[10];

    for (int i=0; i<10; ++i)
	{
        numbers[i] = i;
    }

    for (int i=0; i<10; ++i)
	{
        squares[i] = numbers[i] * numbers[i];
        cubes[i] = numbers[i] * numbers[i] * numbers[i];
    }

    for (int i=0; i<10; ++i)
	{
        sums[i] = numbers[i] + squares[i] + cubes[i];
    }

    cout << "Values of sums array:" << endl;
    for (int i=0; i<10; ++i)
	{
        cout << sums[i] << " ";
    }
    cout << endl;

    int total = 0;
    for (int i=0; i<10; ++i)
	{
        total += sums[i];
    }

    cout << "Total of all values in sums array: " << total << endl;

}*/

//Q--4...................

/*{
	string name[10];
	int salaries[10];
	
	for (int i=0; i<9; i++)
	{
		cout << "Enter the name of the Employee: ";
		cin >> name[i];
	}
	
	for (int i=0; i<9; i++)
	{
		cout << "Enter the salary of the Employee: ";
		cin >> salaries[i];
	}
	cout << endl;
	
	for (int i=0; i<9; i++)
	{
		if (salaries[i]*12>=250000)
		{
			cout << "The employee " << name[i] << " have yearly income " <<  salaries[i] << " and have tax to be paid." << endl;
		}
		else
		{
			cout << "The employee " << name[i] << " have yearly income " <<  salaries[i] << " and have no tax to be paid." << endl;
		} 
		
	}
}*/
	
//Q-5....................
/*{
	int num[10];
	
	for (int i=0; i<9; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}
	
	
}*/

//Q--6................

/*{
	int marks[10], sum=0;
	 
	 for (int i=0; i<9; i++)
	 {
	 	cout << "Enter marks of ten students: ";
	 	cin >> marks[i];
	 }
	 
	 for (int i=0; i<9; i++)
	 {
	 	if (marks[i] >= 80)
	 	{
		 	sum += i;
		 	cout << sum << " students have grade A." << endl;
	 	}
	 	
		
		if (marks[i] > 60 && marks[i] < 79)
	 	{
	 		cout << i << " students have grade B." << endl;
		}
		
		else if (marks[i] > 40 && marks[i] < 59)
	 	{
	 		cout << i << " students have grade C." << endl;
		}
		
		else if (marks[i] < 40)
	 	{
	 		cout << i << " students have grade F." << endl;
		}
		
	 }
	
}*/

//Q--8..............................

/*{
	float num[10], sum=0, average=0;
	
	for (int i=0; i<9; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
		sum += num[i];
	}
		int max=0, j;
	for (int i=0; i<9; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			j = i+1;
		}
	}
	
	average = sum/10;
	cout << "The average is " << average;
	
	for (int i=0; i<9; i++)
	{
	
		cout << num[i] << endl;
	}
		
	
}*/


//Q--9..............

{
	int scores[5][5];
 
 	for (int i=0; i<5; i++)
 	{
 		for (int j=0; j<5; j++)
		 {
		 	cout << "Enter score for student " << "(" << i+1 << ", " << j+1 << ")"<<": ";
 			cin >> scores[i][j];
		 }
		 cout << endl;
 	}
	
	cout << " Student " << setw(10) << " Scores ";
	cout << endl;
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout <<"("  << i+1 << ", " << j+1 << ")" << setw(11) << scores[i][j] << endl;;
		}
	}
	
}














	
	 
