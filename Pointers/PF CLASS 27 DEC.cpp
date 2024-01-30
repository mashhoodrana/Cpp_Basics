#include <iostream>

using namespace std;

/*int main()
{
	int x, y, temp=0;
	cin >> x;
	cin >> y;
	
	swap(x, y);
	cout << x << " " << y;
}

void swap(int*x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}*/

int main()
{
	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr = &x;
	display(int *ptr);
}

void display(int *ptr)
{
	for (int i=0; i<10; i++)
	{
		cout << num[i] << " ";
	}
}
