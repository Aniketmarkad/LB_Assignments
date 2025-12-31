/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_4.java
// Description : Accept number from user and print table
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayTable
// Description   : This function is used to print table  . 
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void DisplayTable(int iNo)
    {
        int itemp = 1;

        for(int i = 1; i <= 10;i++)
        {
            itemp = iNo * i;
            System.out.println(itemp);
        }
    }
}
public class Assignment6_4 
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayTable(iValue);

    }
}