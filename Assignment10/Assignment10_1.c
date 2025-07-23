//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_1.c 
// Description : Write a program which accept number from user and return count of even digits .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : CountEven
// Description   : This function is used to return count of even digits. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
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
    return iFreq ;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet= CountEven(iValue);
    printf("%d",iRet);

    return 0;
}