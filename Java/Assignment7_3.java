/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_3.java
// Description : write a program which Accept number from user and display its even factorial
// input.      : 5
// output.     : 8 (4*2)
// input.      : 10
// output.     : 3840(10*8*6*4*2)
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactorial
// Description   : This function is used to display even factorial
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   int DisplayEvenFactorial(int iNo)
   {
        int i = 0,iFact = 1;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(i = 1;i <= iNo; i++)
        {
            if(i % 2 == 0)
            {
                iFact = iFact * i;
            }
        }
        return iFact;
   }
}
public class Assignment7_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.DisplayEvenFactorial(iValue);

        System.out.println("even factorial of " + iValue+ " is :"+iRet);
    }
}



