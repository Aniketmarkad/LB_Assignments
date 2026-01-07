////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_5.cpp
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : This function is used to display "*" number of times.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout << "*\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "enter number :\n";
    cin >> iValue;

    Accept(iValue);
    return 0;
}
