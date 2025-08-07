//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment42_3.c 
// Description : Write a Recursive program which string  from user and return the count of its character .
// Author      : Aniket Devaba Markad 
// Date        : 7/08/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : CountChar
// Description   : This function is used to count character using Recursion. 
// Input         : int
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 7/08/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int  CountChar(char arr[])
{ 
    static int iCnt = 0;

    if(arr[iCnt] != '\0')
    {
        printf("%c",arr[iCnt]);
        iCnt++;
        CountChar(arr);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char str[20] ;

    printf("enter the string :\n");
    scanf("%[^'\n]s",str);

    iRet = CountChar(str);
    printf("number of character in string is :%d",iRet);

    return 0;
}