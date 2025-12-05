////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_4.c  
//  Description  : Write a program which accept number from user and check whether that number is divisible by 5.
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE -1

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : This function is used to check whether number is divisible by 5.
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////


int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    return 0;

}

int main()
{  
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf(" is divisible by 5\n");
    }
    else
    {
        printf(" is not divisible by 5\n");
    }

    return 0;

}