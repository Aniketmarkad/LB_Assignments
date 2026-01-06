/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_4.java
// Description : write a program which Accept number from user and display below pattern
// input.      : 5
// output.     : #  1   *   #   2   *   #   3   *   #   4   *   #   5   *
// Author      : Aniket Devaba Markad                        
// Date        : 2/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function is used to display pattern .
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Display(int iNo)
    {
        int i = 0;

        for(i = iNo;i >=1;i--)
        {
            System.out.print("#\t"+i+"\t*\t");
        }
    }
}
class Assignment11_4
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the frquency");
        int iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}


