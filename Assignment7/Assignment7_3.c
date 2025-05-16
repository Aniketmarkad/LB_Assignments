//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_3.c 
// Description : Write a program which accept number from user and find even factorial.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayEvenFactorial
// Description   : This function is used to display even factorial. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int long DisplayEvenFactorial(int iNo)
{
   int iCnt = 0;
   int long iFact = 1;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1;iCnt <= iNo;iCnt++ )
   { 
        if((iCnt % 2) == 0)
        { 
            iFact = iFact * iCnt ;
        }
        else
        {
            iFact = 0;
        }
   }
   return iFact;
}

int main()
{
    int  iValue = 0;
    int long iRet = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    iRet = DisplayEvenFactorial(iValue);

    printf("Even Factorial is :%ld\n",iRet);

    return 0;
}
//Time Complexcity is : O(n)