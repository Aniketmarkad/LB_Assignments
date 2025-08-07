//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment42_2.c 
// Description : Write a Recursive program which accept number from user and return the summation of its digit  .
// Author      : Aniket Devaba Markad 
// Date        : 7/08/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : Summation
// Description   : This function is used to add digit using Recursion. 
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 7/08/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int  Summation(int iNo)
{ 
    static iDigit = 0;
    static iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iSum = iSum + iDigit;
        iNo = iNo/10;
        Summation(iNo);
    }
    return iSum;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number that you to addtion of digit :");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Addition of digit is :%d",iRet);

    return 0;
}