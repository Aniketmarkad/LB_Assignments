/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment13_2.cpp
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 4 , iCol = 4
// output.     : A  B   C   D
//               a  b   c   d
//               A  B   C   D
//               a  b   c   d
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

        for(i = 1; i <= iRow; i++)
        {
            char ch1 = 'A', ch2 = 'a';
            for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
            {
                if(i % 2 == 0)
                {
                    cout << ch2 << "\t";
                }
                else
                {
                    cout << ch1 << "\t";
                }
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
