//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_1.cpp
// Description : Write a program which accept one number from user and print that number of even numbers on screen.
// Author      : Aniket Devaba Markad
// Date        : 09/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : This function is used to print even numbers.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 09/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        if(iCnt % 2 == 0)
        {
            cout << iCnt << "\n";
            iCount++;
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number:";
    cin >> iValue;

    PrintEven(iValue);

    return 0;
}
