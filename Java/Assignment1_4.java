////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment1_4.java
//  Description  : Write a program which accept number from user and check whether that number is divisible by 5.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Assignment1_4
{
    static final int TRUE = 1;
    static final int FALSE = -1;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Check
    // Description   : This function is used to check whether number is divisible by 5.
    // Input         : int
    // Output        : int
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    static int Check(int iNo)
    {
        if((iNo % 5) == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

    public static void main(String args[])
    {
        int iValue = 0;
        int bRet = FALSE;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number");
        iValue = sobj.nextInt();

        bRet = Check(iValue);

        if(bRet == TRUE)
        {
            System.out.println("is divisible by 5");
        }
        else
        {
            System.out.println("is not divisible by 5");
        }

        sobj.close();
    }
}
