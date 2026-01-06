/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_5.java
// Description : write a program which Accept number from user and return diffrance between sum of even & odd digit
// input.      : 2395
// output.     : 2- 17 = -15
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DiffSum
// Description   : This function is used to calculate diffrance between sum of  even and odd .
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int DiffSum(int iNo)
    {
        int iDigit = 0,eSum = 0,oSum = 0,iDiff = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo != 0)
        {

            iDigit = iNo % 10;
            if(iDigit % 2== 0)
            {
                eSum = eSum + iDigit;
            }
            else
            {
                oSum = oSum + iDigit;
            }
            iNo = iNo/10;
        }

        iDiff = eSum - oSum;
        return iDiff;
    }
   
}
public class Assignment10_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.DiffSum(iValue);

        System.out.println("diffrance of digit is   :" + iRet);

    }
}















