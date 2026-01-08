/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment13_3.cpp
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 3, iCol = 5
// output.     : A  A   A   A   A
//               B  B   B   B   B
//               C  C   C   C   C
//
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
// Description   : This function is used to display pattern.
// Author        : Aniket Devaba Markad
// Date          : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch1 = 'A';

        for(i = 1, ch1 = 'A'; i <= iRow; i++, ch1++)
        {
            for(j = 1; j <= iCol; j++)
            {
                cout << ch1 << "\t";
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
