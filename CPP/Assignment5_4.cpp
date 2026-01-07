///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment5_4.cpp 
//  Description : Write a program which accept number from user and print all odd numbers till that number.
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayOdd
//  Description   : This function is used to print odd numbers till that number
//  Input         : int 
//  Output        : void
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayOdd(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
            cout << iCnt << endl;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayOdd(iValue);

    return 0;
}

// Time Complexity: O(n)
