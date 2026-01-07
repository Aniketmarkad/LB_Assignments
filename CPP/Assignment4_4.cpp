///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name   : Assignment4_4.cpp
//  Description : Write a program which accept number from user and return summation of non factors.
//  Author      : Aniket Devaba Markad
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFactor
//  Description   : This function is used to calculate sum of non factors.
//  Input         : int
//  Output        : int
//  Author        : Aniket Devaba Markad
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = SumNonFactor(iValue);

    cout << "Summation is: " << iRet << endl;

    return 0;
}

// Time Complexity : O(N)
