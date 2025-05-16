//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_3.c 
// Description : Write a program which accept number from user and display non factors of that number. 
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayNonFactor
// Description   : This function is used to display non factors of that number. 
// Input         : int 
// Output        : void 
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayNonFactor( int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d is non factor \n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%u",&iValue);

    DisplayNonFactor(iValue);

    return 0;
}
// time complexcity is O(N)