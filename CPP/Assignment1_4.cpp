////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_4.cpp
//  Description  : Write a program which accept number from user and check whether that number is divisible by 5.
//  Author       : Aniket Devaba Markad
//  Date         : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE -1

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : This function is used to check whether number is divisible by 5.
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int Check(int iNo)
{
    if((iNo % 5) == 0)
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

    cout << "enter number\n";
    cin >> iValue;

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        cout << "is divisible by 5\n";
    }
    else
    {
        cout << "is not divisible by 5\n";
    }

    return 0;
}
