/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_3.java
// Description : write a program which accept number form user and print its number line.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNumberLine
// Description   : This function is used to print numberline . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DisplayNumberLine(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        
        for(iCnt = -iNo;iCnt <= iNo ;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
    }
}
public class Assignment5_3
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayNumberLine(iValue);

    }
}

