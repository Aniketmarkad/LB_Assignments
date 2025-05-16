//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_5.c 
// Description : Write a program which accept number from user and print table reverse.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayTableRev
// Description   : This function is used to print table reverse.
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayTable(int iNo)
{
   int iCnt = 0;
   int iTable = 1;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 10;iCnt >= 1; iCnt--)
   {
        iTable = iNo * iCnt;
        printf("%d\n",iTable);
   }

}

int main()
{
    int  iValue = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    DisplayTable(iValue);

    return 0;
}
//Time Complexcity is : O(n)