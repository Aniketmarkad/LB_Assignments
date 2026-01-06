/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_1.java
// Description : write a program which accept number from user and if number is less than 50 then print small,
//               if number between 50 to 100 then print medium,and if number greater than 100 then print large.
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNumber
// Description   : This function is used to print number based on range  . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DisplayNumber(int iNo)
    {

        if(iNo <= 0)
        {
            iNo = -iNo;
        }

        if(iNo > 0 || iNo <= 50)
        {
            System.out.println("Number is : Small");
        }
        else if(iNo > 50 || iNo <= 100)
        {
            System.out.println("Number is :medium");
        }
        else if(iNo > 100)
        {
            System.out.println("Number is :large");
        }
    }
}
public class Assignment6_1
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayNumber(iValue);

    }
}


