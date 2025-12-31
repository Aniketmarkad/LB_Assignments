/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment5_1.java
// Description : write a program which accept number form user and print that number of $ & * on screen.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            System.out.println("inValid input");
        }

        
        for(iCnt = 1;iCnt <= iNo ;iCnt++)
        {
            System.out.print("$\t *\t");
        }
    }
}
public class Assignment5_1
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);

    }
}
