//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment40_4.c 
// Description : Write a Recursive program which display below pattern .
// Pattern     : A  B   C   D   E   F
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

void Display()
{ 
    static int iCnt = 1;
    static char ch ='A';

    if(iCnt <= 6)
    {
        printf(" %c \t",ch);
        ch++;
        iCnt++;

        Display();

    }
}

int main()
{

    Display();

    return 0;
}