///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   : Assignment4_1.cpp
// Description : Accept number from user and display multiplication of factors of that number.
// Author      : Aniket Devaba Markad
// Date        : 10/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int MultFact(int iNo)
{
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            cout << iCnt << " ";
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = MultFact(iValue);

    cout << "\nMultiplication is: " << iRet << endl;

    return 0;
}
// Time Complexity: O(n/2)
