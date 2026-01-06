/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_2.java
// Description : write a program which Accept number from user and check whether the zero is present or not
// input.      : 2034
// output.     : 4
//               3
//               0.  present
//               2. 
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckDigit
// Description   : This function is used to check whether the number is present or not 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    boolean DisplayDigit(int iNo)
    {
        boolean bFlage = false;
        int iDigit = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo != 0)
        {

        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlage = true;
            break;  
        }
        iNo = iNo/10;
        }

        return bFlage;
    }
   
}
public class Assignment9_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        boolean bRet = dobj.DisplayDigit(iValue);

        if(bRet == true)
        {
            System.out.println("zero is present ");
        }
        else
        {
            System.out.println("zero is not present");
        }
    }
}








