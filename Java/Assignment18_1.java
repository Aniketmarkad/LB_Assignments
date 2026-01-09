/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_1.java
// Description : write a program which Accept n number from user and return diffrance between 
//               sumation of even element and summation of odd elements.
// input.      : n : 6
// elements.   : 85   66  3   80  93  88 
// output.     : 53 (234 -181)                   
// Author      : Aniket Devaba Markad                        
// Date        : 9/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
    int Diff(int Arr[])
    {
        int iDiff = 0,iCnt = 0,iSumOdd = 0 ,iSumEven = 0;
        
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }

        iDiff = iSumEven - iSumOdd;

        return iDiff;
    }
}

public class Assignment18_1 
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner (System.in);
        int iLength = 0;
        int Arr[];

        System.out.println("enter the size of element :\n");
        iLength =sobj.nextInt();

        Arr = new int [iLength];

        System.out.println("enter the array element :");

        for(int iCnt = 0 ; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        int iRet = aobj.Diff(Arr);

        System.out.println("diffrance between summation of odd and even element is :"+iRet);

    }
}
