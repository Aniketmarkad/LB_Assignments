//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_2.c 
// Description : Write a program which accept number from user and whether it is contain 0 in it or not .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : ChkZero
// Description   : This function is used to check whether it is contain 0 in it or not. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
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
    printf("enter number");
    scanf("%d",&iValue);

    bRet= ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else{
        printf("There is no zero");
    }
    return 0;
}