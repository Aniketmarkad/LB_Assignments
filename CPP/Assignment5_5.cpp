///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment5_5.cpp 
//  Description : Write a program which accept number from user and print first 5 multiples of that number.
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayMultiple
//  Description   : This function is used to print first 5 multiples of that number
//  Input         : int 
//  Output        : void
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayMultiple(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    for(int iCnt = 1; iCnt <= 5; iCnt++)
    {
        cout << iNo * iCnt << endl;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayMultiple(iValue);

    return 0;
}

// Time Complexity: O(1)
