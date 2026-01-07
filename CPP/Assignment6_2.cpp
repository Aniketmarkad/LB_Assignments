//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_2.cpp
// Description : Write a program which accept number from user and print it in to words.
// Author      : Aniket Devaba Markad
// Date        : 12/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : DisplayNumberWords
// Description   : This function is used to display number in to words.
// Input         : int
// Output        : void
// Author        : Aniket Devaba Markad
// Date          : 12/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayNumberWords(int iNo)
{
    switch(iNo)
    {
        case 0:
            cout<<"Zero\n";
            break;
        case 1:
            cout<<"one\n";
            break;
        case 2:
            cout<<"two\n";
            break;
        case 3:
            cout<<"three\n";
            break;
        case 4:
            cout<<"four\n";
            break;
        case 5:
            cout<<"five\n";
            break;
        case 6:
            cout<<"six\n";
            break;
        case 7:
            cout<<"seven\n";
            break;
        case 8:
            cout<<"eight\n";
            break;
        case 9:
            cout<<"nine\n";
            break;
        default :
            cout<<"wrong input\n";
            break;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number :";
    cin>>iValue;

    DisplayNumberWords(iValue);

    return 0;
}
//Time Complexcity cant find in this example.
