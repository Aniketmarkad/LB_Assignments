//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_5.c 
// Description : Write a program which accept number from user and return multiplication of all digits .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : MultDigit
// Description   : This function is used to calculate multiplication. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iFreq = 1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            iDigit=1;
        }
        iFreq  = iFreq * iDigit ;
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

    iRet=MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}