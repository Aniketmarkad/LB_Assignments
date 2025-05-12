////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_1.c
//  Description  : Write a program which accept two numbers from user and perform division.
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Divide       
// Description   : This function is used to perform division of two numbers.
// Input         : int, int                 
// Output        : int  
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////   


int Divide(int iNo1, int iNo2)
{
    int iAns=0;

    if(iNo2==0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15, iValue2 = 5 ,iRet=0;
    
    iRet= Divide(iValue1,iValue2);
    
    printf("Division is %d \n",iRet);

    return 0;
}