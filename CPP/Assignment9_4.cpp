//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_4.cpp
// Description : Write a program which accept number from user and check whether it contains 0 in it or not
// Author      : Aniket Devaba Markad
// Date        : 12/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : ChkZero
// Description   : This function is used to check whether it contains 0 in it or not
// Input         : int
// Output        : BOOL
// Author        : Aniket Devaba Markad
// Date          : 12/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    cout<<"enter number";
    cin>>iValue;

    bRet= ChkZero(iValue);
    if(bRet == TRUE)
    {
        cout<<"it contains zero";
    }
    else
    {
        cout<<"There is no zero";
    }
    return 0;
}
