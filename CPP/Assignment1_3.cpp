////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  file name    : Assignment1_3.cpp
//  Description  : Write a program which accept number from user and display that number in reverse order.
//  Author       : Aniket Devaba Markad
//  Date         : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display numbers in reverse order.
// Input         : void
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 08/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt >= 1)
    {
        cout << iCnt << "\n";
        iCnt--;
    }
}

int main()
{
    Display();
    return 0;
}
