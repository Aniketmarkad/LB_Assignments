/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment11_5.java
// Description : write a program which Accept number from user and display below pattern
// input.      : 8
// output.     : 2  4   6   8   10  12  14  16
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

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(i = 1;i <= iNo;i++)
        {
            System.out.print(2*i+"\t");
        }
    }
}
class Assignment11_5
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



