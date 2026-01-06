/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_5.java
// Description : write a program which Accept area in squre foot and convert it into square meter( 1 squ foot = 0.0929 squre meter)
// input.      : 5
// output.     : 0.464515
// input.      : 7
// output.     : 0.650321
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SqureMeter
// Description   : This function is used to calculate the distance in squre meter from squre foot
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   double SqureMeter(float fDistance)
   {
       double dsqumeter =0.0;
       dsqumeter = fDistance * 0.0929;

       return dsqumeter;
   }
}
public class Assignment8_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the distance in squrefoot  ");
        float fValue = sobj.nextFloat();

        Number nobj = new Number();
        double iRet = nobj.SqureMeter(fValue);

        System.out.println("distance in meter is  : " +iRet);
    }
}






