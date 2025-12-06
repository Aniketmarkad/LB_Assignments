
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_3.java
// Description : write a program which accept one number from user and print  odd factors of that numbers on screen.
// Author      : Aniket Devaba Markad                        
// Date        : 28/11/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayOddFactor 
// Description   : This function is used to print even factor of number numbers. 
// Author        : Aniket Devaba Markad 
// Date          : 28/11/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void DisplayOddFactor(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -(iNo);     //updator
        }
        System.out.println("Odd factor of "+iNo+" : " );

        for(iCnt = 1;iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                if(iCnt % 2 != 0)
                {
                    System.out.println(iCnt);
                }
            }
        }
    }
}

public class Assignment3_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        number nobj = new number();
        nobj.DisplayOddFactor(iValue);
    }
}




