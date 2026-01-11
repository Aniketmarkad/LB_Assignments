/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_4.cpp
// Description : write a program which Accept n number from user and return 
//               frequency of 11.
// Author      : Aniket Devaba Markad                        
// Date        : 11/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int CountFrequency(int Arr[],int iLength)
    {
        int iCnt = 0, iFrequency = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] == 11)
                iFrequency++;
        }
        return iFrequency;
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
    cout<<aobj->CountFrequency(Arr,iLength);

    delete []Arr;
    return 0;
}
