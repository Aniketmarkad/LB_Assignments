//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_5.c 
// Description : Write a program which accept number from user and print first 5 multiple of number.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayMultiple
// Description   : This function is used to print first 5 multiple of  that number. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayMultiple(int iNo)
{
    int iCnt = 0,iMultiple = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 5; iCnt++)
    {
        iMultiple = iNo * iCnt;
        printf("%d\n",iMultiple);
    }  
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    DisplayMultiple(iValue);

    return 0;
}
//Time Complexcity is : O(n).