//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_1.cpp
// Description : Write a program which accept number from user and return count of even digits
// Author      : Aniket Devaba Markad
// Date        : 12/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : CountEven
// Description   : This function is used to return count of even digits.
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 12/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iFreq  = iFreq +1 ;
        }
        iNo = iNo / 10;
    }
    return iFreq;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    cout<<"enter number";
    cin>>iValue;

    iRet= CountEven(iValue);
    cout<<iRet;

    return 0;
}
