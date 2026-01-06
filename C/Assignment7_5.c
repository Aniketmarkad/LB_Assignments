//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_5.c 
// Description : Write a program which accept number from user and find diffrence between even & odd factorial .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DiffFactorial
// Description   : This function is used to display  diffrence between even & odd factorial. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int long DiffFactorial(int iNo)
{
   int iCnt = 0;
   int long iFact1 = 1, iFact2 = 1;
   int long iDiff = 0;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1;iCnt <= iNo;iCnt++ )
   { 
        if((iCnt % 2) != 0)
        { 
            iFact1 = iFact1 * iCnt ;
        }
        else if ((iCnt  % 2) == 0)
        {
            iFact2 = iFact2 * iCnt;
        }
 
   }  

   iDiff = iFact1 - iFact2; 

   if( iDiff < 0)
   {
     iDiff = -iDiff;
   }
   return iDiff;
}

int main()
{
    int  iValue = 0;
    int long iRet = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    iRet = DiffFactorial(iValue);

    printf("Diffrence of Factorial is :%ld\n",iRet);

    return 0;
}
//Time Complexcity is : O(n)