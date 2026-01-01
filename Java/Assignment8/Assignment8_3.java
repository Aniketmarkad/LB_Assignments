/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment8_3.java
// Description : write a program which Accept distance in kilometer and convert it into meter 
//               consider value of PI as 3.14
// input.      : 5
// output.     : 5000
// input.      : 12
// output.     : 12000
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KmToMeter
// Description   : This function is used to calculate the distance in meter
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   double KmToMeter(double km)
   {
        if(km < 0)
        {
            km = - km ;
        }

        double distance = 0.0;
        
        distance = km * 1000;

        return distance;
   }
}
public class Assignment8_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the distance in km ");
        double iValue = sobj.nextDouble();

        Number nobj = new Number();
        double iRet = nobj.KmToMeter(iValue);

        System.out.println("distance in meter : " +iRet);
    }
}




