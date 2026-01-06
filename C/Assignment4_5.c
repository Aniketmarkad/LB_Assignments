//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_5.c 
// Description : Write a program which accept number from user and return difference between factors & non factors that number. 
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : FactorDiff
// Description   : This function is used to calculate diffrence between factors ind non factors of  that number. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactorDiff( int iNo)
{
    int iCnt = 0;
    int iSum1 = 0 , iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
           
        }
        else if((iNo % iCnt) == 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    
    iDiff = iSum1 - iSum2;

    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%u",&iValue);

    iRet = FactorDiff(iValue);

    printf("diffrence  is :%d\n",iRet);

    return 0;
}
// Time complexcity is O(n)