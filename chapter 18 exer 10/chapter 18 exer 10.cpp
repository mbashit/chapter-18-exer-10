// chapter 18 exer 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that prompts the user to enter a number between
1.0 and 4.9, and then displays the number as English text. For example,
for the number 2.3, it must display “Two point three”. Assume that the
user enters a valid value. Try not to check each real number
individually (1.0, 1.1, 1.2, … 4.9). Find a more clever way!
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double n, sum = 0, r;

    cout << "enter the number: ";
    cin >> n;

    while (n >= 1)
    {
        r = (int) n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = sum;
    while (n >= 1)
    {
        r = (int) n % 10;
        
        {
        
            cout << "one ";
            break;
        
            cout << "two ";
            break;
       
            cout << "three ";
            break;
        
            cout << "four ";
            break;
        
            cout << "five ";
            break;
       
            cout << "six ";
            break;
        
            cout << "seven ";
            break;
        
            cout << "eight ";
            break;
        
            cout << "nine ";
            break;
        
            cout << "zero ";
            break;
        
        }
        n = n / 10;
    }



    if (n >= 1.0 && n <= 4.9) {
        cout << "number is : " << n << endl;
    }
    {
        string convertToWords(double n);
    }
    {string out; 
     n = convertToWords((n % 100), "");
     cout << convertToWords(n);
    }
}

