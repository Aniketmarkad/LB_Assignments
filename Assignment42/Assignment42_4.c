//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment42_4.c 
// Description : Write a Recursive program which accept number  from user and return factorial .
// Author      : Aniket Devaba Markad 
// Date        : 7/08/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : Factorial
// Description   : This function is used to count character using Recursion. 
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 7/08/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int  Factorial(int iNo)
{ 
    int iCnt  = 1;
    int iFact = 1;
    while(iNo >= iCnt)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("enter the number that you want to factorial :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("factorial is :%d",iRet);

    return 0;
}