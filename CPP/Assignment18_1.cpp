/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_1.cpp
// Description : Accept n numbers and return difference between sum of even and odd elements
// input       : n = 6
// elements    : 85 66 3 80 93 88
// output      : 53 (234 - 181)
// Author      : Aniket Devaba Markad
// Date        : 9/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int Diff(int Arr[],int iLength)
    {
        int iCnt = 0, iSumOdd = 0, iSumEven = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }
        return (iSumEven - iSumOdd);
    }
};

int main()
{
    int iLength = 0;
    int *Arr = NULL;
    int iRet = 0;

    cout<<"enter the size of array \n";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"enter the array element\n";

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }  

    ArrayX * aobj = new ArrayX();

    iRet = aobj->Diff(Arr,iLength);
    cout<<"diffrance between even and odd element is : "<<iRet;

    delete []Arr;
    return 0;
}
