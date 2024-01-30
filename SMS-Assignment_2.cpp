#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std; 

int main()
{
	//Maximum, Minimum marks and Average of OHT-1.............
	
	int num[10],sum=0;
	double average1;
	
	for (int i=0; i<10; i++)
	{
		num[i] = rand() % 16;
		sum += num[i];
	}
	
	
	int max=0, j;
	for (int i=0; i<10; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			j = i+1;
		}
	}
	
		int min=num[0], j2;
		for (int i=0; i<10; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
			j2 = i+1;
		}
	}
	
	average1 = sum/10;
	
	
	//Maximum, Minimum marks and Average of OHT-2................
	
	int num2[10], sum2=0;
	double average2;
	
	for (int i=0; i<10; i++)
	{
		num2[i] = rand() % 16;
		sum2 += num2[i];
	}
	
	int max2=0, pointer;
	for(int i=0; i<10; i++)
	{
		if (num2[i] > max2)
		{
			max2 = num2[i];
			pointer = i+1;
		}
	}
	
	int min2=num2[0], pointer2;
	for (int i=0; i<10; i++)
	{
		if (num2[i] < min2)
		{
			min2 = num2[i];
			pointer2 = i+1;
		}
	}
	
	average2 = sum2/10;
	
	
		// Maximum, Minimum marks and Average of Quiz-1.........
	int quiz1[10], quizSum=0;
	double quizAverage1;
	
	for (int i=0; i<10; i++)
	{
		quiz1[i] = rand() % 6;
		quizSum += quiz1[i];
	}
	
	
	int quizMax=0, k;
	for (int i=0; i<10; i++)
	{
		if (quiz1[i] > quizMax)
		{
			quizMax = quiz1[i];
			k = i+1;
		}
	}
	
		int quizMin=quiz1[0], k2;
		for (int i=0; i<10; i++)
	{
		if (quiz1[i] < quizMin)
		{
			quizMin = quiz1[i];
			k2 = i+1;
		}
	}
	
	quizAverage1 = quizSum/10;
	
	
	//Maximum, Minimum marks and Average of Quiz-2.........
	
	int quiz2[10], quizSum2=0;
	double quizAverage_2;
	
	for (int i=0; i<10; i++)
	{
		quiz2[i] = rand() % 6;
		quizSum2 += quiz2[i];
	}
	
	
	int quizMax_2=0, v;
	for (int i=0; i<10; i++)
	{
		if (quiz2[i] > quizMax_2)
		{
			quizMax_2 = quiz2[i];
			v = i+1;
		}
	}
	
		int quizMin_2=quiz2[0], v2;
		for (int i=0; i<10; i++)
	{
		if (quiz2[i] < quizMin_2)
		{
			quizMin_2 = quiz2[i];
			v2 = i+1;
		}
	}
	quizAverage_2 = quizSum2/10;
	

	
	
	// Maximum, Minimum marks and Average of Quiz-3............
	
	int quiz3[10], quizSum_3=0;
	double quizAverage_3;
	
	for (int i=0; i<10; i++)
	{
		quiz3[i] = rand() % 6;
		quizSum_3 += quiz3[i];
	}
	
	
	int quizMax_3=0, m;
	for (int i=0; i<10; i++)
	{
		if (quiz3[i] > quizMax_3)
		{
			quizMax_3 = quiz3[i];
			m = i+1;
		}
	}
	
		int quizMin_3=quiz3[1], m2;
		for (int i=0; i<10; i++)
	{
		if (quiz3[i] < quizMin_3)
		{
			quizMin_3 = quiz3[i];
			m2 = i+1;
		}
	}
	
	quizAverage_3 = quizSum_3/10;
	
	
	// Maximum, Minimum marks and Average of Quiz-4.........
	
	int quiz4[10], quizSum_4=0;
	double quizAverage_4;
	
	for (int i=0; i<10; i++)
	{
		quiz4[i] = rand() % 6;
		quizSum_4 += quiz4[i];
	}
	
	
	int quizMax_4=0, o;
	for (int i=0; i<10; i++)
	{
		if (quiz4[i] > quizMax_4)
		{
			quizMax_4 = quiz4[i];
			o = i+1;
		}
	}
	
		int quizMin_4=quiz4[0], o2;
		for (int i=0; i<10; i++)
	{
		if (quiz4[i] < quizMin_4)
		{
			quizMin_4 = quiz4[i];
			o2 = i+1;
		}
	}
	
	quizAverage_4 = quizSum_4/10;
	
	// Maximum, Minimum marks and Average of Assignment-1.........
	
	int ass1[10], ass_Sum=0;
	double assAverage_1;
	
	for (int i=0; i<10; i++)
	{
		ass1[i] = rand() % 10;
		ass_Sum += ass1[i];
	}
	
	
	int assMax_1=0, p;
	for (int i=0; i<10; i++)
	{
		if (ass1[i] > assMax_1)
		{
			assMax_1 = ass1[i];
			p = i+1;
		}
	}
	
		int assMin_1=ass1[0], p2;
		for (int i=0; i<10; i++)
	{
		if (ass1[i] < assMin_1)
		{
			assMin_1 = ass1[i];
			p2 = i+1;
		}
	}
	
	assAverage_1 = ass_Sum/10;

	
		// Maximum, Minimum marks and Average of Assignment-2.........
	
	int ass2[10], ass_Sum_2=0;
	double assAverage_2;
	
	for (int i=0; i<10; i++)
	{
		ass2[i] = rand() % 10;
		ass_Sum_2 += ass2[i];
	}
	
	
	int assMax_2=0, q;
	for (int i=0; i<10; i++)
	{
		if (ass2[i] > assMax_2)
		{
			assMax_2 = ass2[i];
			q = i+1;
		}
	}
	
		int assMin_2=ass2[0], q2;
		for (int i=0; i<10; i++)
	{
		if (ass2[i] < assMin_2)
		{
			assMin_2 = ass2[i];
			q2 = i+1;
		}
	}
	
	assAverage_2 = ass_Sum_2/10;
	
	
		// Maximum, Minimum marks and Average of Semester Project.........
	
	int prj[10], prjSum=0;
	double prjAverage;
	
	for (int i=0; i<10; i++)
	{
		prj[i] = rand() % 16;
		prjSum += prj[i];
	}
	
	
	int prjMax=0, r;
	for (int i=0; i<10; i++)
	{
		if (prj[i] > prjMax)
		{
			prjMax = prj[i];
			r = i+1;
		}
	}
	
		int prjMin=prj[0], r2;
		for (int i=0; i<10; i++)
	{
		if (prj[i] < prjMin)
		{
			prjMin = prj[i];
			r2 = i+1;
		}
	}
	
	prjAverage = prjSum/10;
	
	// Maximum, Minimum marks and Average of Final.........
	
	int fnl[10], fnlSum=0;
	double fnlAverage;
	
	for (int i=0; i<10; i++)
	{
		fnl[i] = rand() % 30;
		fnlSum += fnl[i];
	}
	
	
	int fnlMax=0, s;
	for (int i=0; i<10; i++)
	{
		if (fnl[i] > fnlMax)
		{
			fnlMax = fnl[i];
			s = i+1;
		}
	}
	
		int fnlMin=fnl[0], s2;
		for (int i=0; i<10; i++)
	{
		if (fnl[i] < fnlMin)
		{
			fnlMin = fnl[i];
			s2 = i+1;
		}
	}
	
	fnlAverage = fnlSum/10;
	
	//Total Marks.....................
	
	int total[10], totalSum=0;
	double totalAverage;
	
	for (int i=0; i<10; i++)
	{
		total[i] = num[i]+num2[i]+quiz1[i]+quiz2[i]+quiz3[i]+quiz4[i]+ass1[i]+ass2[i]+prj[i]+fnl[i];
		totalSum += total[i];
	}
	
		int totalMax=0, t;
	for (int i=0; i<10; i++)
	{
		if (total[i] > totalMax)
		{
			totalMax = total[i];
			t = i+1;
		}
	}
	
		int totalMin=total[0], t2;
		for (int i=0; i<10; i++)
	{
		if (total[i] < totalMin)
		{
			totalMin = total[i];
			t2 = i+1;
		}
	}
	
	totalAverage = totalSum/10;
	


    // A separate array for sorting (descending order)
    
    int sortedTotal[10];
    for (int i = 0; i < 10; i++)
	{
        sortedTotal[i] = total[i];
    }

    // Sort the array of total marks in descending order
    sort(sortedTotal, sortedTotal + 10, greater<int>());


    
   
	
	
	cout << endl;
	system("cls");
	cout << "________What information would you like to access?_________" << endl << endl;
	cout << "1: OHT-1 Marks" << endl;
	cout << "2: OHT-2 Marks" << endl;
	cout << "3: Quiz-1 Marks" << endl;
	cout << "4: Quiz-2 Marks" << endl;
	cout << "5: Quiz-3 Marks" << endl;
	cout << "6: Quiz-4 Marks" << endl;
	cout << "7: Assignment-1 Marks" << endl;
	cout << "8: Assigment-2 Marks" << endl;
	cout << "9: Semester Project Marks" << endl;
	cout << "10: Final Marks" << endl;
	cout << "11: Total Marks" << endl;
	cout << "12: Result" << endl << endl << endl;
	
	int option; 
	cout << "Select from the above: ";
	cin >> option;
	cout  << endl;
	
	switch (option)
	{
		case 1:
			cout << endl;
			cout << "The marks of the class in OHT-1 is as follows, " << endl << endl;
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout<<i+(23020102+3)<<setw(10)<<num[i]<<endl; 
				}
			
			cout << endl;
			cout << "The maximum number is " << max << " of Roll.No " << j << " in OHT-1." << endl;
			cout << "The minimum number is " << min << " of Roll.No " << j2 << " in OHT-1."  << endl;
			cout << "The average of the class for OHT-1 is: " << average1 << endl;
			break;
		
		case 2:
			
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout << i+(23020102+3)<< setw(10) << num2[i] << endl; 
				}
			
			cout << endl;	
			cout << "The maximum number is " << max2 << " of Roll.No " << pointer << " in OHT-2." << endl;
			cout << "The minimum number is " << min2<< " of Roll.No " << pointer2 << " in OHT-2."  << endl;
			cout << "The average of the class for OHT-2 is: " << average2 << endl;
			break;
		
		case 3:
		
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout << i+(23020102+3)<< setw(10) << quiz1[i] << endl; 
				}	
			
			cout << endl;	
			cout << "The maximum number is " << quizMax << " of Roll.No " << k << " in Quiz-1." << endl;
			cout << "The minimum number is " << quizMin << " of Roll.No " << k2 << " in Quiz-1."  << endl;
			cout << "The average of the class for Quiz-1 is: " << quizAverage1 << endl << endl;
			break;
			
			
		case 4:
			
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout << i+(23020102+3)<< setw(10) << quiz2[i] << endl; 
				}
			
			cout << endl;	
			cout << "The maximum number is " << quizMax_2 << " of Roll.No " << v << " in Quiz-2." << endl;
			cout << "The minimum number is " << quizMin_2 << " of Roll.No " << v2 << " in Quiz-2."  << endl;
			cout << "The average of the class for Quiz-2 is: " << quizAverage_2 << endl;
			break;
			
		case 5:
					
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout << i+(23020102+3)<< setw(10) << quiz3[i] << endl; 
				}
			
			cout << endl;	
			cout << "The maximum number is " << quizMax_3 << " of Roll.No " << m << " in Quiz-3." << endl;
			cout << "The minimum number is " << quizMin_3 << " of Roll.No " << m2 << " in Quiz-3."  << endl;
			cout << "The average of the class for Quiz-3 is: " << quizAverage_3 << endl;
			break;
			
		case 6:
			
			cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
			for (int i=0; i<=9; i++)
				{
			       cout << i+(23020102+3)<< setw(10) << quiz4[i] << endl; 
				}	
				
				cout << endl;
				cout << "The maximum number is " << quizMax_4 << " of Roll.No " << o << " in Quiz-4." << endl;
				cout << "The minimum number is " << quizMin_4 << " of Roll.No " << o2 << " in Quiz-4."  << endl;
				cout << "The average of the class for Quiz-4 is: " << quizAverage_4 << endl;
				break;
				
		case 7:
		
				cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
				for (int i=0; i<=9; i++)
					{
			       		cout << i+(23020102+3)<< setw(10) << ass1[i] << endl; 
					}		
				
				cout << endl;
				cout << "The maximum number is " << assMax_1 << " of Roll.No " << p << " in Assignment-1." << endl;
				cout << "The minimum number is " << assMin_1 << " of Roll.No " << p2 << " in Assignment-1."  << endl;
				cout << "The average of the class for Assignment-1 is: " << assAverage_1 << endl;
				break;	
				
		case 8:
				
				cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
				for (int i=0; i<=9; i++)
					{
			       		cout << i+(23020102+3) << setw(10) << ass2[i] << endl; 
					}
				
				cout << endl;	
				cout << "The maximum number is " << assMax_2 << " of Roll.No " << q << " in Assignment-2." << endl;
				cout << "The minimum number is " << assMin_2 << " of Roll.No " << q2 << " in Assignment-2."  << endl;
				cout << "The average of the class for Assignment-2 is: " << assAverage_2 << endl;
				break;
				
		case 9:
		
				cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
				for (int i=0; i<=9; i++)
					{
			       		cout << i+(23020102+3)<< setw(10) << prj[i] << endl; 
					}		
				
				cout << endl;
				cout << "The maximum number is " << prjMax << " of Roll.No " << r << " in Semester Project." << endl;
				cout << "The minimum number is " << prjMin << " of Roll.No " << r2 << " in Semester Project."  << endl;
				cout << "The average of the class in Semester Project is: " << prjAverage << endl;
				break;
				
		case 10:
				
				cout<<"Roll No"<<setw(13)<<"Marks"<<endl;
			
				for (int i=0; i<=9; i++)
					{
			       		cout << i+(23020102+3)<< setw(10) << fnl[i] << endl; 
					}
				
				cout << endl;	
				cout << "The maximum number is " << fnlMax << " of Roll.No " << s << " in the final." << endl;
				cout << "The minimum number is " << fnlMin << " of Roll.No " << s2 << " in the final."  << endl;
				cout << "The average of the class in the final is: " << fnlAverage << endl << endl;
				break;
				
		case 11:
					
					cout<<"Roll No"<<setw(19)<<"Total Marks"<<endl;
			
			
				for (int i=0; i<=9; i++)
				
					{
						cout <<i+(23020102+3)<< setw(13) << total[i] << endl; 
						
					}	
				
				cout << endl;	
				cout << "The maximum number is " << totalMax << " of Roll.No " << t << " in total." << endl;
				cout << "The minimum number is " << totalMin << " of Roll.No " << t2 << " in total."  << endl;
				cout << "The average of the class in total is: " << totalAverage << endl;	
				break;
		
		
		case 12:
		
				cout<<"Roll No"<<setw(10)<<"OHT-1" <<setw(10)<<"OHT-2" <<setw(9)<<"Quiz-1" <<setw(8)<<"Quiz-2" <<setw(8)<<"Quiz-3" <<setw(8)<<"Quiz-4" <<setw(10)<<"Task-1" <<setw(10)<<"Task-2" <<setw(11)<< "  Project" <<setw(8)<<"Final" <<setw(8) << "Total"<<setw(8)<<"Grade"<<endl;
			
			string grade;
				for (int i=0; i<=9; i++)
					{
					

			       		if (sortedTotal[i] >= 90)
			       		{
			       			grade = "A+";
						}
						else if (sortedTotal[i]>= 80 && total[i] < 90)
			       		{
			       			grade = "A";
						}
						else if (sortedTotal[i] >= 70 && total[i] < 80)         
			       		{
			       			grade = "B";
						}
						else if (sortedTotal[i] >= 60 && total[i] < 70)
			       		{
			       			grade = "C";
						}
						else if (sortedTotal[i] >= 50 && total[i] < 60)
			       		{
			       			grade = "D";
						}
						else if (sortedTotal[i] >= 40 && total[i] < 50)
			       		{
			       			grade = "E";
						}
						else if (sortedTotal[i] < 40)
			       		{
			       			grade = "F";
						}
						
						 for (int i = 0; i < 10; i++)
						{
						      //its for sorting of descending numbers..............  
    					}
    					
						cout << i+(23020101+3) << setw(8)<< num[i] << setw(8) << num2[i] << setw(8) << quiz1[i] << setw(8) << quiz2[i] << setw(8) << quiz3[i] << setw(10) << quiz4[i] << setw(10) << ass1[i] << setw(11) << ass2[i] << setw(10) << prj[i] << setw(9) << fnl[i] << setw(8)<< sortedTotal[i] << setw(8) << grade << endl;
					}	
						break;
		}
			return 0;
}