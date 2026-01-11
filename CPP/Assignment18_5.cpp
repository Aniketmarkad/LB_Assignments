/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_5.cpp
// Description : write a program which Accept n number from user and display 
//               number which are multiples of 11.
// input       : n : 6
// elements    : 85   33  3   55  93  66
// output      : 33   55   66
// Author      : Aniket Devaba Markad                        
// Date        : 9/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{

public:
    void Display(int Arr[],int iLength)
    {
        int iCnt = 0;

        cout<<"Numbers which is multiples of 11 is :\n";

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 11 == 0)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
    }
};

int main()
{
    int iLength = 0;
    int *Arr = NULL;

    cout<<"enter the size of array:\n";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"enter the array element :\n";

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    
    ArrayX *aobj = new  ArrayX();
    aobj->Display(Arr,iLength);

    delete []Arr;
    return 0;
}
