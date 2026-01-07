///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment7_1.cpp 
//  Description : Write a program which accept number from user and print pattern n = * & #
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description   : This function is used to print pattern: first n '*' then n '#' 
//  Input         : int 
//  Output        : void
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    for(int iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if(iCnt <= iNo)
            cout << "*\t";
        else
            cout << "#\t";
    }
    cout << endl;
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayPattern(iValue);

    return 0;
}

// Time Complexity: O(2n)
