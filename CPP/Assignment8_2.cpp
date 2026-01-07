//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_2.cpp
// Description : Write a program which accept accept Width and height of rectangle from user and calculate its area
// Author      : Aniket Devaba Markad
// Date        : 12/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : RectArea
// Description   : This function is used to calculate of area rectangle.
// Input         : float
// Output        : double
// Author        : Aniket Devaba Markad
// Date          : 12/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth,float fHeight)
{
    double Area = 0.0;

    Area = fWidth*fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    cout<<"Enter Width";
    cin>>fValue1;

    cout<<"Enter height";
    cin>>fValue2;

    dRet=RectArea(fValue1,fValue2);
    cout<<"Area of rectangle : "<<dRet;

    return  0;
}

