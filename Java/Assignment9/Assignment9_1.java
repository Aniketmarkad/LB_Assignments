/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment9_1.java
// Description : write a program which Accept number from user and display its digit in reverse
// input.      : 2395
// output.     : 5
//               9
//               3
//               2
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : This function is used to display digit in reverse order
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void DisplayDigit(int iNo)
    {
        int iDigit = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo != 0)
        {

        iDigit = iNo % 10;
        System.out.println(iDigit);
        iNo = iNo/10;
        }
    }
   
}
public class Assignment9_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number  ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        dobj.DisplayDigit(iValue);

    }
}







