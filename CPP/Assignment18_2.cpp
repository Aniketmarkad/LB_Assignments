/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_2.cpp
// Description : Accept n numbers and display numbers divisible by 5
// input.      : n : 6
// elements.   : 85   66  3   80  93  88 
// output.     : 85     80    
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
        cout<<"Number divisible by 5 is :\n";

        for(int iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 5 == 0)
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

    cout<<"enter the size of array\n";
    cin>>iLength;
    Arr = new int[iLength];

    cout<<"enter the array element\n";

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    ArrayX * aobj = new ArrayX();
    aobj->Display(Arr,iLength);

    delete []Arr;
    return 0;
}
