//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_1.c
// Description : writea program which accept one number from user and print that number of even numbers on screen.
// Author      : Aniket Devaba Markad                        
// Date        : 11/05/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//
// Function Name : PrintEven 
// Description   : This function is used to print even numbers. 
// Input         : int 
// Output        : int 
// Author        : Aniket Devaba Markad 
// Date          : 11/05/2025 
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
void PrintEven(int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }

    iCnt = 1;
    while(iCount < iNo)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
            iCount++;
        }
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}