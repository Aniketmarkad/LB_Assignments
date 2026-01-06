
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_1.java
// Description : write a program which accept one number from user and print that number of even numbers on screen.
// Author      : Aniket Devaba Markad                        
// Date        : 28/11/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven 
// Description   : This function is used to print even numbers. 
// Author        : Aniket Devaba Markad 
// Date          : 28/11/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void PrintEven(int iNo)
    {
        int iCnt = 0,iEven = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1;iCnt <= iNo; iCnt++)
        {
            System.out.print(iEven+" ");
            iEven += 2;
        }
        System.out.println();
    }
}

public class Assignment3_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        number nobj = new number();
        nobj.PrintEven(iValue);
    }
}


