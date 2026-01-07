//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_5.cpp
// Description : Write a program which accept number from user and count frequency of 2 in it
// Author      : Aniket Devaba Markad
// Date        : 12/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : CountTwo
// Description   : This function is used to count frequency of 2
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 12/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit==2)
        {
            iFreq  = iFreq +1 ;
        }
        iNo = iNo / 10;
    }
    return iFreq ;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    cout<<"enter number";
    cin>>iValue;

    iRet= CountTwo(iValue);
    cout<<iRet;
    return 0;
}
