/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_1.cpp
// Description : write a program which Accept n number from user and return 
//               frequency of even numbers.
// input       : n : 6
// elements    : 85   33  3   55  93  66
// output      : 1
// Author      : Aniket Devaba Markad                        
// Date        : 11/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int EvenFrequency(int Arr[],int iLength)
    {
        int iCnt = 0, iEvenElement = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenElement++;
            }
        }
        return iEvenElement;
    }
};

int main()
{
    int iLength = 0;
    int *Arr = NULL;

    cout<<"enter the size of array :\n";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"enter the elements in array :\n";

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    ArrayX *aobj= new ArrayX();
    cout<<"even number of element is : "<<aobj->EvenFrequency(Arr,iLength)<<"\n";

    delete []Arr;
    return 0;
}
