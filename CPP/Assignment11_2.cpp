/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_2.cpp
// Description : write a program which Accept number from user and display below pattern
// input.      : 5
// output.     : 5  #   4   #   3   #   2   #   1  #
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
// Description   : This function is used to display pattern .
// Author        : Aniket Devaba Markad 
// Date          : 25/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public:
    void Display(int iNo)
    {
        for(int i = iNo; i >= 1; i--)
        {
            cout << i << "\t#\t";
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
