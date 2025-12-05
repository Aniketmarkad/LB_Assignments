////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_3.c
//  Description  : Write a program which accept number from user and display that number in reverse order.          
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display numbers in reverse order.           
// Input         : void
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

     iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();
     return 0;
}