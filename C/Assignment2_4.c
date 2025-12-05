////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment2_4.c
//  Description  : Write  program which accept 2 number from user and display 1 st number 2nd number of times on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display 1st number 2nd number of times.
// Input         : int, int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo, int iFrequency)

{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

     printf("enter number:\n");
     scanf("%d",&iValue);

     printf("enter frequency:\n");
     scanf("%d",&iCount);

     Display(iValue,iCount);
     return 0;
}
