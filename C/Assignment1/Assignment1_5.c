////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_5.c
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : This function is used to display "*" number of times.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1;iCnt <= iNo;iCnt ++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}