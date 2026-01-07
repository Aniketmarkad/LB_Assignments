///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment7_5.cpp 
//  Description : Write a program which accept number from user and find difference between even & odd factorial
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DiffFactorial
//  Description   : This function calculates difference between odd factorial and even factorial
//  Input         : int 
//  Output        : long int
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

long DiffFactorial(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    long iFactOdd = 1, iFactEven = 1;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
            iFactOdd *= iCnt;
        else
            iFactEven *= iCnt;
    }

    long iDiff = iFactOdd - iFactEven;
    if(iDiff < 0)
        iDiff = -iDiff;

    return iDiff;
}

int main()
{
    int iValue = 0;
    long iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = DiffFactorial(iValue);

    cout << "Difference of Factorials is: " << iRet << endl;

    return 0;
}

// Time Complexity: O(n)
