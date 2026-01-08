/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_5.cpp
// Description : write a program which Accept number from user and display below pattern
// input.      : 8
// output.     : 2  4   6   8   10  12  14  16
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
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(int i = 1; i <= iNo; i++)
        {
            cout << 2*i << "\t";
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
