//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_2.c 
// Description : Write a program which accept accept Width and height of rectangle from user and calculate its area
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : RectArea
// Description   : This function is used to calculate of area rectangle.
// Input         : float
// Output        : double
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
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

    printf("Enter Width");
    scanf("%f",&fValue1);

    printf("Enter height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of rectangle : %lf",dRet);

    return  0;

}