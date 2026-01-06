/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_5.java
// Description : write a program which Accept number from user and count the frequency of such digit which are less than 6
// input.      : 123567
// output.     : 4
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
// Description   : This function is used to count the frequency of digit less than 6.
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
        if(iDigit < 6 )
        {
            iCnt++;
        }
        iNo = iNo/10;
        }
        return iCnt;
    }
   
}
public class Assignment9_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigit(iValue);

        System.out.println("frequency of digit is :" + iRet);

    }
}










