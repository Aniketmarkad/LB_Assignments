/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_4.java
// Description : write a program which accept number form user and return addition of  its  non factors .
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
// Function Name : SumNonFactors
// Description   : This function is used to calculate sum of  the Non factors . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public int SumNonFactors()
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = iNo; iCnt >= 1;iCnt --)
        {
            if(iNo % iCnt != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

}

public class Assignment4_4
{
    public static void main (String a[])
    {
        int iValue = 0,iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        iRet = nobj.SumNonFactors();
         
        System.out.println(" addition of nonfactors is : "+iRet);
    }
}


