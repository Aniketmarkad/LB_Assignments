///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment7_3.cpp 
//  Description : Write a program which accept number from user and find even factorial
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactorial
//  Description   : This function calculates factorial of even numbers only
//  Input         : int 
//  Output        : long int
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

long DisplayEvenFactorial(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    long iFact = 1;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
            iFact *= iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = DisplayEvenFactorial(iValue);

    cout << "Even Factorial is: " << iRet << endl;

    return 0;
}

// Time Complexity: O(n)
