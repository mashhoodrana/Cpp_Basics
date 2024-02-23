#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num >= 10000)
    {
        int fir, sec, thi, four, fiv;
        int first_digit = num / 10000;
        int num_1 = num % 10000;

        int second_digit = num_1 / 1000;
        int num_2 = num_1 % 1000;


        int third_digit = num_2 / 100;
        int num_3 = num_2 % 100;

        int fourth_digit = num_3 / 10;
        int num_4 = num_3 % 10;


                if (first_digit == 9)
        {
            fir = 0;
        }

        else{
             fir = first_digit+1;
        }

        if (second_digit == 9)
        {
            sec = 0;
        }

        else{
             sec = second_digit+1;
        }


        if (third_digit == 9)
        {
            thi = 0;
        }

        else{
             thi = third_digit+1;
        }
        
        if (fourth_digit == 9)
        {
            four = 0;
        }

        else{
              four = fourth_digit+1;
        }

        if (num_4 == 9)
        {
            fiv = 0;
        }

        else{
              fiv = num_4+1;
        }

        cout << "The answer after adding 1 to each digit is: " << fir << sec << thi << four << fiv;
    }

    else if(num >= 1000 && num < 10000)
    {
        int fir, sec, thi, four;
        int first_digit = num / 1000;
        int num_1 = num % 1000;


        int second_digit = num_1 / 100;
        int num_2 = num_1 % 100;

        int third_digit = num_2 / 10;
        int num_3 = num_2 % 10;

        if (first_digit == 9)
        {
            fir = 0;
        }

        else{
             fir = first_digit+1;
        }

        if (second_digit == 9)
        {
            sec = 0;
        }

        else{
             sec = second_digit+1;
        }


        if (third_digit == 9)
        {
            thi = 0;
        }

        else{
             thi = third_digit+1;
        }
        
        if (num_3 == 9)
        {
            four = 0;
        }

        else{
              four = num_3+1;
        }

         cout << "The answer after adding 1 to each digit is: " << fir << sec << thi << four;



    }

    else if(num >= 100 && num < 1000)
    {
        int fir, sec, thi, four;
        int first_digit = num / 100;
        int num_1 = num % 100;


        int second_digit = num_1 / 10;
        int num_2 = num_1 % 10;


        if (first_digit == 9)
        {
            fir = 0;
        }

        else{
             fir = first_digit+1;
        }

        if (second_digit == 9)
        {
            sec = 0;
        }

        else{
             sec = second_digit+1;
        }


        if (num_2 == 9)
        {
            thi = 0;
        }

        else{
             thi = num_2+1;
        }

         cout << "The answer after adding 1 to each digit is: " << fir << sec << thi;
    }

    else if(num >= 10 && num < 100)
    {
        int fir, sec;

        int first_digit = num / 10;
        int num_1 = num % 10;

        if (first_digit == 9)
        {
            fir = 0;
        }

        else{
             fir = first_digit+1;
        }

        if (num_1 == 9)
        {
            sec = 0;
        }

        else{
             sec = num_1+1;
        }

        cout << "The answer after adding 1 to each digit is: " << fir << sec;
    }
}

