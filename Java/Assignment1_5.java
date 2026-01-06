////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment1_5.java
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment1_5
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Accept
    // Description   : This function is used to display "*" number of times.
    // Input         : int
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static void Accept(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("*");
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number :");
        iValue = sobj.nextInt();

        Accept(iValue);

        sobj.close();
    }
}
