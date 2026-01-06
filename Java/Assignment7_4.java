/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_4.java
// Description : write a program which Accept number from user and display its odd factorial
// input.      : 5
// output.     : 15 (5*3*1)
// input.      : 10
// output.     : 945(9*7*5*3*1)
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayOddFactorial
// Description   : This function is used to display odd factorial
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   int DisplayOddFactorial(int iNo)
   {
        int i = 0,iFact = 1;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(i = 1;i <= iNo; i++)
        {
            if(i % 2 != 0)
            {
                iFact = iFact * i;
            }
        }
        return iFact;
   }
}
public class Assignment7_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.DisplayOddFactorial(iValue);

        System.out.println("odd factorial of " + iValue+ " is :"+iRet);
    }
}




