/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_1.java
// Description : write a program which Accept number from user and display below pattern
// input.      : 5
// output.     : A  B   C   D   E
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

        for(i = 0;i <= iNo;i++)
        {
            System.out.print((char)('A'+ (i % 26))+"\t");
        }
    }
}
class Assignment11_1
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
