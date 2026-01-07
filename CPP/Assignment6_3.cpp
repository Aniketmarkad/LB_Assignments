///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment6_3.cpp 
//  Description : Write a program which accept number from user and find factorial
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactorial
//  Description   : This function is used to calculate factorial
//  Input         : int 
//  Output        : long int
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

long DisplayFactorial(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    long iFact = 1;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
        iFact *= iCnt;

    return iFact;
}

int main()
{
    int iValue = 0;
    long iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = DisplayFactorial(iValue);

    cout << "Factorial is: " << iRet << endl;

    return 0;
}

// Time Complexity: O(n)
