/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name    : Assignment3_2.cpp
// Description  : Write a program which accept number from user and display all factors of that number.
// Author       : Aniket Devaba Markad
// Date         : 09/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactors
// Description   : This function is used to display factors of number.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout << iCnt << "\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number:";
    cin >> iValue;

    DisplayFactors(iValue);

    return 0;
}
