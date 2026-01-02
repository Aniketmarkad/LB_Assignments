///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_1.c 
// Description : Write a program which accept number from user and display multiplication of factors of that number. 
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : MultFacts
// Description   : This function is used to calculate multipication  of factors of that number. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d",iCnt);
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    iRet = MultFact(iValue);

    printf("multiplication is %d\n",iRet);

    return 0;
}

// Time Complexcity O(n/2)