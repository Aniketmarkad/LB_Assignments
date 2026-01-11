/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_2.cpp
// Description : write a program which Accept n number from user and return 
//               difference between frequency of even and odd numbers.
// input       : n : 6
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
    int DiffranceFrequency(int Arr[],int iLength)
    {
        int iCnt = 0, iEvenElement = 0, iOddElement = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
                iEvenElement++;
            else
                iOddElement++;
        }
        return (iEvenElement - iOddElement);
    }
};

int main()
{
    int iLength = 0;
    int *Arr = NULL;

    cout<<"enter the size of array :\n";
    cin>>iLength;

    Arr = new int[iLength];

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    ArrayX *aobj = new  ArrayX();
    cout<<aobj->DiffranceFrequency(Arr,iLength)<<"\n";

    delete []Arr;
    return 0;
}
