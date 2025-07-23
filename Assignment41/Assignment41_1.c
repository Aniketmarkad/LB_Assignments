//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment41_1.c 
// Description : Write a Recursive program  which  accpect input form user and display below pattern .
// Pattern     : *  *   *   *   *
// Author      : Aniket Devaba Markad 
// Date        : 20/07/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : Display
// Description   : This function is used print pattern using Recursion. 
// Input         : 5
// Output        : *    *   *   *   *
// Author        : Aniket Devaba Markad 
// Date          : 20/07/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void Display(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    if( iNo >= 1)
    {
        printf(" * \t");
        iNo--;
        Display(iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);


    Display(iValue);
    printf("\n");

    return 0 ;
}