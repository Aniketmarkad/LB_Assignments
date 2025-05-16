//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_4.c 
// Description : Write a program which accept number from user and find odd factorial.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayOddFactorial
// Description   : This function is used to display odd factorial. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int long DisplayOddFactorial(int iNo)
{
   int iCnt = 0;
   int long iFact = 1;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1;iCnt <= iNo;iCnt++ )
   { 
        if((iCnt % 2) != 0)
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

    iRet = DisplayOddFactorial(iValue);

    printf("Odd Factorial is :%ld\n",iRet);

    return 0;
}
//Time Complexcity is : O(n)