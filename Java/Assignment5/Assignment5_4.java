/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_4.java
// Description : write a program which accept N form user and print all odd numbers  till N.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayOdd
// Description   : This function is used to print Odd Number . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DisplayOdd(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        
        for(iCnt = 1;iCnt <= iNo ;iCnt++)
        {
            if( iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class Assignment5_4
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayOdd(iValue);

    }
}

