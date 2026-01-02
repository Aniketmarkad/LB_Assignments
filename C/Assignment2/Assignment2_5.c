////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment2_5.c
//  Description  : Write a program which accept number from user and check whether that number is even or odd.
//  Author       : Aniket Devaba Markad
//  Date         : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description   : This function is used to check whether number is even or odd.
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad
// Date          : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkEven(int iNo)
{
    if((iNo%2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("enter number:\n");
  scanf("%d",&iValue);

  bRet = ChkEven(iValue);

  if(bRet==TRUE)
  {
    printf(" no is even\n");
  }
  else
  {
    printf("no is odd");
  }

  return 0;
}