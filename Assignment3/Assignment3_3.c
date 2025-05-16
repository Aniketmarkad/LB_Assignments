///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name: Assignment3_3.c 
// Description: Write a program which accept number from user and display all even factors of that number. 
// Author: Aniket Devaba Markad 
// Date: 11/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayEvenFactors 
// Description   : This function is used to display even  factors of number. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 11/05/2025 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)

{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}