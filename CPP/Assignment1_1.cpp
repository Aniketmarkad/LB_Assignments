////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_1.cpp
//  Description  : Write a program which accept two numbers from user and perform division.
//  Author       : Aniket Devaba Markad
//  Date         : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divide
// Description   : This function is used to perform division of two numbers.
// Input         : int, int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5, iRet = 0;

    iRet = Divide(iValue1, iValue2);

    cout << "Division is " << iRet << "\n";
    return 0;
}
