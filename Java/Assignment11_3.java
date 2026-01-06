/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_3.java
// Description : write a program which Accept number from user and display below pattern
// input.      : 5
// output.     : 5  *   4   *   3   *   2   *   1  *
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
// Description   : This function is used to display pattern.
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Display(int iNo)
    {
        int i = 0;

        for(i = iNo;i >=1;i--)
        {
            System.out.print(i +"\t*\t");
        }
    }
}
class Assignment11_3
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

