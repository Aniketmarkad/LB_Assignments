////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  File name    : Assignment2_3.cpp
//  Description  : Write a program which accept number from user and check if less than 10 print "Hello" otherwise print "Demo".
//  Author       : Aniket Devaba Markad
//  Date         : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display "Hello" if number is less than 10 otherwise "Demo".
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        cout << "Hello\n";
    }
    else
    {
        cout << "Demo\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "enter number:\n";
    cin >> iValue;

    Display(iValue);
    return 0;
}
