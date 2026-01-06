//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_4.c 
// Description : Write a program which  accept number from user and return difference between summation of even digits and summation of odd digits .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : CountOdd
// Description   : This function is used to calculate difference between summation of even digits and summation of odd digits . 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iodd = 0;
    int result = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iEven  = iEven + iDigit ;
        }
        else
        {
            iodd = iodd + iDigit;
        }
        iNo = iNo / 10;
    }

    result= iEven- iodd;
    return result ;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet= CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}