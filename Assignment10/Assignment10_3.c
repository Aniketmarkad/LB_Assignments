//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_3.c 
// Description : Write a program which accept number from user and return the count of digits in between 3 and 7.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : CountRange
// Description   : This function is used to count of digits in between 3 and 7. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int CountRange(int iNo)
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
        if(iDigit>3 && iDigit<7)
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

    printf("enter number");
    scanf("%d",&iValue);

    iRet= CountRange(iValue);
    printf("%d",iRet);

    return 0;
}