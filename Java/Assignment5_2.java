/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_2.java
// Description : write a program which accept number form user and print number till that number.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNumber
// Description   : This function is used to print number till that number . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void Display(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            System.out.println("inValid input");
        }

        
        for(iCnt = 1;iCnt <= iNo ;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
    }
}
public class Assignment5_2
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.Display(iValue);

    }
}

