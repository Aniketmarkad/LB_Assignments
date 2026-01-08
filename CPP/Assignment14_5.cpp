/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment14_5.cpp
// Description : write a program to display pattern
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
// Description   : This function is used to display the pattern
// Author        : Aniket Devaba Markad
// Date          : 2/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void Display(int iRow,int iCol)
    {
        int i = 0,j = 0;

        for(i = iRow;i >= 1;i--)
        {
            for(j = iCol;j >= 1;j--)
            {
                cout<<j<<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int iValue1 = 0,iValue2 = 0;

    cout<<"enter the no of rows\n";
    cin>>iValue1;

    cout<<"enter the no of colums\n";
    cin>>iValue2;

    Pattern pobj;
    pobj.Display(iValue1,iValue2);

    return 0;
}
