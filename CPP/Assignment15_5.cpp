/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment15_5.cpp
// Description : write a program which Accept number of rows and column from user and display below pattern
// input.      : iRow = 4, iCol = 4
// output.     : $  *   *   $
//               *  $   $   *
//               *  $   $   *
//               $  *   *   $
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Pattern
{
public:
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display pattern.
// Author        : Aniket Devaba Markad
// Date          : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j || (i + j) == (iRow + 1))
                {
                    cout << "$\t";
                }
                else
                {
                    cout << "*\t";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of rows\n";
    cin >> iValue1;

    cout << "Enter number of columns\n";
    cin >> iValue2;

    Pattern pobj;
    pobj.Display(iValue1, iValue2);

    return 0;
}
