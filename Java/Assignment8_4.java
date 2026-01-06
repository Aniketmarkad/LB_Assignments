/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_4.java
// Description : write a program which Accept tempeature in Fahrenheit and convert it into celsius(1 cel = (f -32)* (5/9))
//               consider value of PI as 3.14
// input.      : 10
// output.     : -12.2222
// input.      : 34
// output.     : 1.11111
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FhToCs
// Description   : This function is used to calculate the temperture in celsius from fahrenheit
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   double FhToCs(double ftemp)
   {
       double  TemInCel = 0.0;
       TemInCel = ((ftemp - 32)*(5.0/9.0));
       return TemInCel;
   }
}
public class Assignment8_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the temperature in fahrenheit  ");
        double dValue = sobj.nextDouble();

        Number nobj = new Number();
        double iRet = nobj.FhToCs(dValue);

        System.out.println("Temprature in celsis is  : " +iRet);
    }
}





