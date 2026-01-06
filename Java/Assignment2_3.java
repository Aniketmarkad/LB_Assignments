////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment2_3.java
//  Description  : Write a program which accept number from user and check if less than 10 print "hello "otherwise print"demo".
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment2_3
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : This function is used to display if number is less than 10 then print "hello" otherwise print "demo".
    // Input         : int
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static void Display(int iNo)
    {
        if(iNo < 10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}
