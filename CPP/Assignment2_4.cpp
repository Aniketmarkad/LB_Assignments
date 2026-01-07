////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  File name    : Assignment2_4.cpp
//  Description  : Write program which accept 2 numbers from user and display 1st number 2nd number of times on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display 1st number 2nd number of times.
// Input         : int, int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        cout << iNo << "\n";
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    cout << "enter number:\n";
    cin >> iValue;

    cout << "enter frequency:\n";
    cin >> iCount;

    Display(iValue, iCount);
    return 0;
}
