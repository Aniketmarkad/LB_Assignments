////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  File name    : Assignment2_5.cpp
//  Description  : Write a program which accept number from user and check whether that number is even or odd.
//  Author       : Aniket Devaba Markad
//  Date         : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description   : This function is used to check whether number is even or odd.
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout << "enter number:\n";
    cin >> iValue;

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        cout << "no is even\n";
    }
    else
    {
        cout << "no is odd\n";
    }

    return 0;
}
