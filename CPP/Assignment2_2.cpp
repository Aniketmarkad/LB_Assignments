////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  File name    : Assignment2_2.cpp
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display "*" number of times.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    while (iNo >= iCnt)
    {
        cout << "*\n";
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout << "enter number :\n";
    cin >> iValue;

    Display(iValue);
    return 0;
}
