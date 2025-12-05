////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment2_3.c
//  Description  : Write a program which accept number from user and check if less than 10 print "hello "otherwise print"demo".
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display if number is less than 10 then print"hello"otherwise print"demo".
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
         printf("Demo");
    }
}
int main()
{
    int iValue = 0;

     printf("enter number:\n");
     scanf("%d",&iValue);

     Display(iValue);
     return 0;
}
