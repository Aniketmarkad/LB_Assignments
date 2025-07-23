//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_1.c 
// Description : Write a program which accept number from user and display its digits in reverse order.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayDigit
// Description   : This function is used to display its digits in reverse order. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
    
        
        iDigit=iNo%10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0;
}