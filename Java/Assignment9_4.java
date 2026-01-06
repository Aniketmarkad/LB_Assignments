/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_4.java
// Description : write a program which Accept number from user and count the frequency of 4
// input.      : 2395
// output.     : 0
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountDigit
// Description   : This function is used to count the frequency of 4
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
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
        if(iDigit == 4 )
        {
            iCnt++;
        }
        iNo = iNo/10;
        }
        return iCnt;
    }
   
}
public class Assignment9_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigit(iValue);

        System.out.println("frequency of 4 is :" + iRet);

    }
}









