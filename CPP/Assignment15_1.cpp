/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment15_1.cpp
// Description : Accept rows and columns and display pattern
// Input       : iRow = 4, iCol = 4
// Output      : *  #  #  #
//               *  *  #  #
//               *  *  *  #
//               *  *  *  *
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
// Description   : Displays pattern using * and #
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void Display(int iRow,int iCol)
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
            {
                if(i >= j)
                    cout<<"*\t";
                else
                    cout<<"#\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int iRow,iCol;
    cout<<"Enter rows:\n";
    cin>>iRow;
    cout<<"Enter columns:\n";
    cin>>iCol;

    Pattern obj;
    obj.Display(iRow,iCol);
    return 0;
}
