//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7.1.c 
// Description : Write a program which accept number from user and print pattern n = * & #.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayPattern
// Description   : This function is used to print pattern 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayPattern(int iNo)
{
   int iCnt = 0;
   
   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1;iCnt <= 2*iNo; iCnt++)
   {
       if(iCnt <= iNo) 
       {
          printf("*\t");
       }
       else
       {
            printf("#\t");
       }
        
   } 

}

int main()
{
    int  iValue = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    DisplayPattern(iValue);

    return 0;
}
//Time Complexcity is : O(2n)