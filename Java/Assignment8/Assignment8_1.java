/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_1.java
// Description : write a program which Accept radius from user and calculate its area 
//               consider value of PI as 3.14
// input.      : 5.3
// output.     : 88.2026
// input.      : 10.4
// output.     : 339.6224
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : This function is used to calclate the area of circle
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   float CircleArea(float radius)
   {
        if(radius < 0)
        {
            radius = - radius;
        }
        
        float Area = 0.0f,PI = 3.14f;
        Area = PI * radius * radius;
        return Area;
   }
}
public class Assignment8_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the radius ");
        float iValue = sobj.nextFloat();

        Number nobj = new Number();
        float iRet = nobj.CircleArea(iValue);

        System.out.println("area of circle is : " +iRet);
    }
}



