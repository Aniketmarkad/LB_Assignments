/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment20_1.cpp
// Description : write a program which Accept n number from user and another number as No 
//               and check wheather that element present in array or not
// input       : n : 6      NO = 45
// elements    : 85   33  3   55  93  66
// output      : no is not present
// Author      : Aniket Devaba Markad                        
// Date        : 12/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : This function is used to check wheater the number is present or not
// Author        : Aniket Devaba Markad
// Date          : 12/1/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    bool CheckNumber (int *Arr,int iLength,int iNo)
    {
        int iCnt = 0;
        bool bFlage = false;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlage = true;
            }
            else
            {
                bFlage = false;
            }
        }
        return bFlage;
    }
};

int main()
{
    int iSize = 0,No = 0;
    int *Arr = NULL;

    cout<<"enter the size of array:\n";
    cin>>iSize;

    cout<<"enter the number that you want to check\n";
    cin>>No;

    Arr = new int[iSize];

    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cout<<"Enter the "<<iCnt+1<<" "<< "element :\n";
        cin>>Arr[iCnt];
    }

    ArrayX * aobj = new ArrayX;

    bool bRet = aobj->CheckNumber(Arr,iSize,No);

    if(bRet == true)
    {
        cout<<No<<" "<<" is present in array\n";
    }
    else
    {
        cout<<No<<" "<<" is not present in array\n";
    }
    return 0;
}