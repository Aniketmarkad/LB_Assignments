//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_2.c 
// Description : Write a program which accept number from user and display factors of that number in decreasing order. 
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : FactsRev
// Description   : This function is used to print factors in decreasing order. 
// Input         : int 
// Output        : void 
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////#include<stdio.h>

void FactRev(int iNo)
{
    
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
    
int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    FactRev(iValue);

    return 0;
}
//Time complexcity O(n/2)