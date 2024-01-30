#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    cout << "Enter the start number: ";
    cin >> num1;
    cout << "Enter the ending number: ";
    cin >> num2;

    for (int i=num1; i<=num2; i++)
    {
        bool flag = true;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}