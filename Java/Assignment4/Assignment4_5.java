/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment4_5.java
// Description : write a program which accept number form user and return differnce  of  its factors and  non factors sum .
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
// Function Name : SumDiffrance
// Description   : This function is used to calculate diffrance between  sum of factors and  Non factors . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public int SumDiffrance()
    {
        int iCnt = 0,iSum1 = 0,iSum2 = 0 ,iDiff = 0;

        for(iCnt = iNo; iCnt >= 1;iCnt --)
        {
            if(iNo % iCnt != 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }
            iDiff = iSum2 - iSum1;
        
        return iDiff;
    }

}

public class Assignment4_5
{
    public static void main (String a[])
    {
        int iValue = 0,iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        iRet = nobj.SumDiffrance();
         
        if(iRet < 0)
        {
            iRet = -(iRet);
        }
        System.out.println(" Diffrance of factors and nonfactors is : "+iRet);
    }
}



