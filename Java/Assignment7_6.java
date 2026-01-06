/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_6.java
// Description : write a program which Accept number from user and display its even factor
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Description   : This function is used to display even factor
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   void DisplayEvenFactor(int iNo)
   {
        int i = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        System.out.println("even factor of "+iNo+" :");

        for(i = 1;i <= iNo/2; i++)
        {
            if(iNo % i == 0 && i % 2 == 0)
            {
                System.out.println(i);
            }
        }
   }
}
public class Assignment7_6
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayEvenFactor(iValue);
    }
}


