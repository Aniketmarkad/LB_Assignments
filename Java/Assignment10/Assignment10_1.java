/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment10_1.java
// Description : write a program which Accept number from user and count the frequency of even digit
// input.      : 123567
// output.     : 2
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountDigit
// Description   : This function is used to count the frequency of even digit.
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int CountDigit(int iNo)
    {
        int iDigit = 0,iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo != 0)
        {

        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo/10;
        }
        return iCnt;
    }
   
}
public class Assignment10_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigit(iValue);

        System.out.println("frequency of  even digit is :" + iRet);

    }
}











