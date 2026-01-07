/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   : Assignment3_5.cpp
// Description : Accept char from user and check whether that char is vowel or not
// Author      : Aniket Devaba Markad
// Date        : 09/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : ChkVowel
// Description   : Check whether character is vowel (a,e,i,o,u) or not
// Input         : char
// Output        : bool
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
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
    bool bRet = false;

    cout << "Enter character:";
    cin >> cValue;

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        cout << cValue << " is Vowel\n";
    }
    else
    {
        cout << cValue << " is not Vowel\n";
    }

    return 0;
}
