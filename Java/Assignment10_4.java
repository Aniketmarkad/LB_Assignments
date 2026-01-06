/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_4.java
// Description : write a program which Accept number from user and return multiplication of all digit
// input.      : 2395
// output.     : 270
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultDigit
// Description   : This function is used to calculate multiplication of digit.
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int CountDigit(int iNo)
    {
        int iDigit = 0,iCnt = 1;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo != 0)
        {

            iDigit = iNo % 10;
            iCnt = iCnt * iDigit;
            iNo = iNo/10;
        }
        return iCnt;
    }
   
}
public class Assignment10_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigit(iValue);

        System.out.println("multiplication of digit is  :" + iRet);

    }
}














