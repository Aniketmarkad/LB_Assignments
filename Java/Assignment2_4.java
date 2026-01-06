////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment2_4.java
//  Description  : Write program which accept 2 number from user and display 1st number 2nd number of times on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment2_4
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : This function is used to display 1st number 2nd number of times.
    // Input         : int, int
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static void Display(int iNo, int iFrequency)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iFrequency; iCnt++)
        {
            System.out.println(iNo);
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;
        int iCount = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        System.out.println("enter frequency:");
        iCount = sobj.nextInt();

        Display(iValue, iCount);

        sobj.close();
    }
}
