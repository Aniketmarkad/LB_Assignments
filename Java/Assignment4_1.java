/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_1.java
// Description : write a program which accept number form user and display its multiplication of factors .
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
// Function Name : FactMultiplication
// Description   : This function is used to calculate the multiplication of function. 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public int FactMultiplication()
    {
        int iFact= 1, iCnt = 0;

        for(iCnt = 1;iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFact = iFact * iCnt;
            }
        }

        return iFact;
    
    }

}

public class Assignment4_1
{
    public static void main (String a[])
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        iRet = nobj.FactMultiplication();

        System.out.println("Multiplication of factor is : "+iRet);

    }
}
