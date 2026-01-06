//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_4.c 
// Description : Write a program which accept number from user and return summation of Nonfactors number. 
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : SumNonFactor
// Description   : This function is used to calculate sum of non factors of that number. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFactor( int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
           
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%u",&iValue);

    iRet = SumNonFactor(iValue);

    printf("summation is :%d\n",iRet);

    return 0;
}
//time complexcity is O(n).