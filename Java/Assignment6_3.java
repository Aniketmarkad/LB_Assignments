/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_3.java
// Description : Accept number from user and find its factorial
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : factorial
// Description   : This function is used to calculate factorial  . 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int factorial(int iNo)
    {
        int ifact = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(int i = 1 ;i <= iNo; i++)
        {
            ifact = ifact * i;
        }
        return ifact;
    }
}

public class Assignment6_3 
{
    public static void main (String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number :");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

       int iRet = nobj.factorial(iValue);

        System.out.println("factorial of number is :" + iRet);


    }
}
