//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_3.c 
// Description : Write a program which accept number from user and find factorial.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayFactorial
// Description   : This function is used to display factorial. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int long DisplayFactorial(int iNo)
{
   int iCnt = 0;
   int long iFact = 1;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1;iCnt <= iNo;iCnt++ )
   {
        iFact = iFact * iCnt ;
   }

   return iFact;
}

int main()
{
    int  iValue = 0;
    int long iRet = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    iRet = DisplayFactorial(iValue);

    printf("Factorial is :%ld\n",iRet);

    return 0;
}
//Time Complexcity is : O(n)