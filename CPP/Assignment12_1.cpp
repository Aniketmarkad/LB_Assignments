/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment12_1.cpp
// Description : write a program which Accept number of rows and column from user and display below pattern
// Author      : Aniket Devaba Markad                        
// Date        : 25/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Pattern
{
public:
    void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                cout << "*\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue1, iValue2;

    cout << "enter the no of rows\n";
    cin >> iValue1;

    cout << "enter the no of colums\n";
    cin >> iValue2;

    Pattern pobj;
    pobj.Display(iValue1,iValue2);

    return 0;
}
