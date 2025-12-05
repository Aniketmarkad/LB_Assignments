/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_2.java
// Description : write a program which accept number form user and display its  factors in decreasing order.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    private int iNo;

    Number(int a)
    {
        this.iNo = a;

        if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactors
// Description   : This function is used to display the factors in decresing order. 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DisplayFactors()
    {
        int iCnt = 0;

        System.out.println("Factors of "+ iNo + "  in decresing order is :");
        for(iCnt = iNo/2; iCnt >= 1;iCnt --)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt );
            }
        }
    
    }

}

public class Assignment4_2
{
    public static void main (String a[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        nobj.DisplayFactors();

    }
}

