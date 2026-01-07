///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name   : Assignment4_3.cpp
//  Description : Write a program which accept number from user and display non factors of that number.
//  Author      : Aniket Devaba Markad
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNonFactor
//  Description   : This function is used to display non factors of that number.
//  Input         : int
//  Output        : void
//  Author        : Aniket Devaba Markad
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            cout << iCnt << " is non factor" << endl;
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayNonFactor(iValue);

    return 0;
}

// Time Complexity : O(N)
