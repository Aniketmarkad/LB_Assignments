//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_5.c 
// Description : Write a program which accept number from user and count frequency of 4 in it .
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DiffFactorial
// Description   : This function is used to display  diffrence between even & odd factorial. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


int CountFour(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            iFreq  = iFreq +1 ;
        }
        iNo = iNo / 10;
    }
    return iFreq ;
}
int main()
{
    int iValue =0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet= CountFour(iValue);
    printf("%d",iRet);
    return 0;
}