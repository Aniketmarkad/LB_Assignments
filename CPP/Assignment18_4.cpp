/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_4.cpp
// Description : write a program which Accept n number from user and display 
//               number which are divisible by 5 and 3.
// input       : n : 6
// elements    : 85   66  3   15  93  88 
// output      : 15
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

        cout<<"Numbers divisible by 5 and 3 is :\n";

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
    }
};

int main()
{
    int iLength = 0;
    int *Arr = NULL;

    cout<<"enter the size of array :\n";
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
