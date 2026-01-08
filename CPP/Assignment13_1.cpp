/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment13_1.cpp
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 4 , iCol = 4
// output.     : A  B   C   D
//               A  B   C   D
//               A  B   C   D
//               A  B   C   D
// Author      : Aniket Devaba Markad
// Date        : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Pattern
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display pattren .
// Author        : Aniket Devaba Markad
// Date          : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            char ch = 'A';
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                cout << ch << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "enter the no of rows\n";
    cin >> iValue1;

    cout << "enter the no of colums\n";
    cin >> iValue2;

    Pattern pobj;
    pobj.Display(iValue1, iValue2);

    return 0;
}
