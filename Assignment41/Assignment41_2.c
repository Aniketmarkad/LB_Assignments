//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment41_2.c 
// Description : Write a Recursive program which accept number from user and display below pattern .
// Pattern     : 1  2   3   4   5
// Author      : Aniket Devaba Markad 
// Date        : 20/07/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : Display
// Description   : This function is used print pattern using Recursion. 
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 20/07/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void Display(int iNo)
{
    static int iCnt = 1;

    if(iNo <= 0)
    {
        return;
    }

    if(iCnt <= iNo)
    {
        printf(" %d \t",iCnt);
        iCnt++;

        Display(iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0 ;
}