/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_2.java
// Description : write a program which Accept width & height of the rectangle from user and calculate its area
// input.      : 5.3  9.78
// output.     : 51.834
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RectangleArea
// Description   : This function is used to calclate the area of rectangle
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   double RectangleArea(float fwidth ,float fheight)
   {
        double Area = 0.0;
        Area = fwidth * fheight; 
        return Area;
   }
}
public class Assignment8_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the width ");
        float iValue1 = sobj.nextFloat();

        System.out.println("enter the height ");
        float iValue2 = sobj.nextFloat();

        Number nobj = new Number();
        double iRet = nobj.RectangleArea(iValue1,iValue2);

        System.out.println("area of rectangle is : " +iRet);
    }
}




