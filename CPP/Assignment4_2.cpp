///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name   : Assignment4_2.cpp
//  Description : Write a program which accept number from user and display factors of that number in decreasing order.
//  Author      : Aniket Devaba Markad
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description   : This function is used to print factors in decreasing order.
//  Input         : int
//  Output        : void
//  Author        : Aniket Devaba Markad
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            cout << iCnt << endl;
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    FactRev(iValue);

    return 0;
}

// Time Complexity : O(n/2)
