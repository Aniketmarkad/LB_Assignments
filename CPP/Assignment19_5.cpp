/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_5.cpp
// Description : write a program which Accept n number from user and accept 
//               another number and return the frequency of it.
// Author      : Aniket Devaba Markad                        
// Date        : 11/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int CountFrequency(int Arr[],int iLength,int iNo)
    {
        int iCnt = 0, iFrequency = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] == iNo)
                iFrequency++;
        }
        return iFrequency;
    }
};

int main()
{
    int iLength = 0, No = 0;
    int *Arr = NULL;

    cout<<"enter the size of array :\n";
    cin>>iLength;
    cin>>No;

    Arr = new int[iLength];

    for(int iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    ArrayX *aobj = new  ArrayX();

    int iRet = aobj->CountFrequency(Arr,iLength,No);

    cout<<" frequency of "<< No <<"is "<<iRet;

    delete []Arr;
    return 0;
}
