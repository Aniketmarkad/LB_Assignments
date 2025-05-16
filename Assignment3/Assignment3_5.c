///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   : Assignment3_5.c
// Description : Accept char form user and check whether that char is vowel or not
// Athour      : Aniket Devaba Markad
// Date        : 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : ChkVowel
// Description   : chek wether character is vowel(a,e,i,o,u) or not
// Input         : char
// Output        : char
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' 
    || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }  
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false ;

    printf("Enter character:");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("%c is Vowel\n",cValue);

    }
    else
    {
        printf("%c is not Vowel\n",cValue);
    }

    return 0;
}