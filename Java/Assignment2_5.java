////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment2_5.java
//  Description  : Write a program which accept number from user and check whether that number is even or odd.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment2_5
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : ChkEven
    // Description   : This function is used to check whether number is even or odd.
    // Input         : int
    // Output        : boolean
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static boolean ChkEven(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        bRet = ChkEven(iValue);

        if(bRet == true)
        {
            System.out.println("no is even");
        }
        else
        {
            System.out.println("no is odd");
        }

        sobj.close();
    }
}

