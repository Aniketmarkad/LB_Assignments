/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_1.java
// Description : write a program which will accepte the number from user and display below pattern.
// input       : 3
// Pattern.    : *   *   *  #   #   #
// input       : 5
// Pattern.    : *   *   *  *   *   #   #   #   #   #
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to print the pattern . 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Display(int iNo)
    {
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        int i = 0,iCnt = 0;
        for( i = 1; i <= iNo; i++)
        {
            System.out.print(" * \t");
            iCnt++;
        }

        for(i = 1;i <= iCnt ; i++)
        {
            System.out.print("# \t");
        }
    }
}
public class Assignment7_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);

    }
}
