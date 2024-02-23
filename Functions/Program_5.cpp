#include <iostream>

using namespace std;

void floatingfunc(float *x, float *y, float *z)
{
    float temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main()
{
    float a = 6.9;
    float b = 5.3;
    float c = 9.8;

    cout << "Before Swapping " << a << " " << b << " " << c << endl;

    
    floatingfunc(&a, &b, &c);

    cout << "After Swapping " << a << " "<< b << " " << c;
}