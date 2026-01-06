////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment2_2.java
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment2_2
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : This function is used to display "*" number of times.
    // Input         : int
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static void Display(int iNo)
    {
        int iCnt = 0;
        iCnt = 1;

        while(iNo >= iCnt)
        {
            System.out.println("*");
            iNo--;
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number :");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}
