/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment17_1.cpp
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 5, iCol = 5
// output.     : *  *   *   *   #
//               *  *   *   #   *   
//               *  *   #   *   *     
//               *  #   *   *   *           
//               #  *   *   *   *             
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Pattern
{
public:
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display pattern .
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void Display(int iRow,int iCol)
    {
        for(int i = iRow; i >= 1; i--)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(j == i)
                    cout << "#\t";
                else
                    cout << "*\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue1, iValue2;
    cout << "enter the no of rows" << endl;
    cin >> iValue1;
    cout << "enter the no of colums" << endl;
    cin >> iValue2;

    Pattern pobj;
    pobj.Display(iValue1, iValue2);
    return 0;
}
