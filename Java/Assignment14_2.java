/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment14_2.java
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 4, iCol = 5
// output.     : 2  4   6   8   10
//               1  3   5   7   9
//               2  4   6   8   10
//.              1  3   5   7   9
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

    void Display(int iRow,int iCol)
    {
        int i =0,j = 0;
        
        for(i = 1;i <= iRow;i++)
        {
            int x= 1;
            int ch = 2;
            for(j = 1;j <= iCol;j++)
            {   
                if(i % 2 != 0)
                {
                    System.out.print(ch+"\t");
                    ch += 2;
                }
                else
                {
                    System.out.print(x+"\t");
                    x += 2;
                }
            }
            System.out.println();
        }
    }
}
class Assignment14_3
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the no of rows");
        int iValue1 = sobj.nextInt();

        System.out.println("enter the no of colums");
        int iValue2 = sobj.nextInt();


        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}










