/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment17_5.cpp
// Description : write a program which Accept number of rows and column from user and display below pattern
// input       : iRow = 5, iCol = 5
// output      : 1  2  3  4  5
//               1  2        5
//               1     3     5
//               1        4  5
//               1  2  3  4  5
// Author      : Aniket Devaba Markad
// Date        : 3/1/2026
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

        for(i = 1;i <= iRow;i++)
        {
            for(j = 1;j <= iCol;j++)
            {
                if(j == i || i == 1 || j == 1 || j == iCol || i == iRow)
                {
                    cout<<j<<"\t";
                }
                else
                {
                    cout<<" \t";
                }
                    
            }
            cout<<endl;
        }
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"enter the no of rows \n";
    cin>>iValue1;

    cout<<"enter the no of colums \n";
    cin>>iValue2;

    Pattern * pobj = new Pattern();

    pobj->Display(iValue1,iValue2);

    delete [] pobj;

    return 0;
}
