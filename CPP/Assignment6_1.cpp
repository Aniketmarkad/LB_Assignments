///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name   : Assignment6_1.cpp 
//  Description : Write a program which accept number from user and print if number (<50) small, (50<=number<=100) medium, (>100) large
//  Author      : Aniket Devaba Markad 
//  Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNumber
//  Description   : This function is used to display number category
//  Input         : int 
//  Output        : void
//  Author        : Aniket Devaba Markad 
//  Date          : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayNumber(int iNo)
{
    if(iNo < 50)
        cout << "Number is: Small\n";
    else if(iNo >= 50 && iNo <= 100)
        cout << "Number is: Medium\n";
    else
        cout << "Number is: Large\n";
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayNumber(iValue);

    return 0;
}

// Time Complexity: O(1)
