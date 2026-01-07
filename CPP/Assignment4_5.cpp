///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name   : Assignment4_5.cpp
//  Description : Write a program which accept number from user and return difference between factors & non factors.
//  Author      : Aniket Devaba Markad
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorDiff
//  Description   : This function is used to calculate difference between factors and non factors.
//  Input         : int
//  Output        : int
//  Author        : Aniket Devaba Markad
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    iDiff = iSum1 - iSum2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = FactorDiff(iValue);

    cout << "Difference is: " << iRet << endl;

    return 0;
}

// Time Complexity : O(N)
