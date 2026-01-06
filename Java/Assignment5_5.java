/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_5.java
// Description : write a program which accept N form user and print first 5 Multiples of it.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayMultiples
// Description   : This function is used to print first 5 multiples of number . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DisplayMultiples(int iNo)
    {
        int iCnt = 0,iMultiple = 1;;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
  
        System.out.println("first 5 Multiple of "+iNo+ " :") ;

        for(iCnt = 1;iCnt <= 5 ;iCnt++)
        {
            iMultiple = iNo * iCnt;
            System.out.println(iMultiple);
        }
    }
}
public class Assignment5_5
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayMultiples(iValue);

    }
}

