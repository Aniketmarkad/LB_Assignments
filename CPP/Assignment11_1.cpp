/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_1.cpp
// Description : write a program which Accept number from user and display below pattern
// input.      : 5
// output.     : A  B   C   D   E
// Author      : Aniket Devaba Markad                        
// Date        : 25/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Pattern
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display pattern.
// Author        : Aniket Devaba Markad 
// Date          : 25/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public:
    void Display(int iNo)
    {
        for(int i = 0; i < iNo; i++)
        {
            cout << char('A'+ (i % 26)) << "\t";
        }
    }
};

int main()
{
    int iValue = 0;

    cout << "enter the frquency" << endl;
    cin >> iValue;

    Pattern pobj;
    pobj.Display(iValue);

    return 0;
}
