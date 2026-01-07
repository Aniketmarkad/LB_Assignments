/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name    : Assignment3_3.cpp
// Description  : Write a program which accept number from user and display all even factors of that number.
// Author       : Aniket Devaba Markad
// Date         : 09/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Description   : This function is used to display even factors of number.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            cout << iCnt << "\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number:";
    cin >> iValue;

    DisplayEvenFactor(iValue);

    return 0;
}
