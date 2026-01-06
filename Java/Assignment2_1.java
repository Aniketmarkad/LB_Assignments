////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment2_1.java
//  Description  : Write a program which accept number from user and display that number of "*" on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment2_1
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
        iCnt = 1;

        while(iCnt <= iNo)
        {
            System.out.println("*");
            iCnt++;
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

