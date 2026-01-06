/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_5.java
// Description : Accept number from user and print table in reverse order
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayTableRev
// Description   : This function is used to print table in reverse . 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void DisplayTableRev(int iNo)
    {
        int itemp = 1;

        for(int i = 10; i >= 1;i--)
        {
            itemp = iNo * i;
            System.out.println(itemp);
        }
    }
}
public class Assignment6_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayTableRev(iValue);

    }
}
