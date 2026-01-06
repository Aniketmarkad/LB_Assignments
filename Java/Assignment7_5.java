/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_5.java
// Description : write a program which Accept number from user and display its diffres between odd factorial and even factorial
// input.      : 5
// output.     : -7 (8-15)
// input.      : 10
// output.     : 2895(3840 - 945)
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :FactorialDiff
// Description   : This function is used to display diffrence betwee even factorial and odd factorial 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   int FactorialDiff(int iNo)
   {
        int i = 0,iFact1 = 1,iFact2 = 1,iDiff = 0;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(i = 1;i <= iNo; i++)
        {
            if(i % 2 == 0)
            {
                iFact1 = iFact1 * i;
            }
            else
            {
                iFact2 = iFact2 * i;
            }
        }
        iDiff = iFact1 - iFact2;
        
        return iDiff;
   }
}
public class Assignment7_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.FactorialDiff(iValue);

        System.out.println("diff of even and odd factorial is : " +iRet);
    }
}


