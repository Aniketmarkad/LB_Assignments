/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_3.cpp
// Description : write a program which Accept n number from user and check 
//               whether 11 is present or not.
// Author      : Aniket Devaba Markad                        
// Date        : 11/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
public:
    bool CheckElement(int Arr[],int iLength)
    {
        int iCnt = 0;
        bool bFlage = false;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] == 11)
            {
                bFlage = true;
                break;
            }
        }
        return bFlage;
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

    if(aobj->CheckElement(Arr,iLength))
    {
        cout<<"11 is present\n";
    }
    else
    {
        cout<<"11 is absent\n";

    }

    delete []Arr;
    return 0;
}
