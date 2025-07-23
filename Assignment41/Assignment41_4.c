//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment41_4.c 
// Description : Write a Recursive program which accept input form user and display below pattern .
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

void Display(char ch,int iNo)
{ 
    static int iCnt = 1;

    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }

    if(iCnt <= iNo)
    {
        printf(" %c \t",ch);
        ch++;
        iCnt++;

        Display(ch,iNo);

    }
}

int main()
{
    int iValue = 0;
    char ch = '\0';

    printf("Enter character :\n");
    scanf("%c",&ch );

    printf("Enter number :\n");
    scanf("%d",&iValue );

    Display(ch,iValue);

    return 0;
}