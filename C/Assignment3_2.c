///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name: Assignment3_2.c 
// Description: Write a program which accept number from user and display all factors of that number. 
// Author: Aniket Devaba Markad 
// Date: 11/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayFactors 
// Description   : This function is used to display  factors of number. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 11/05/2025 
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0) )
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}