/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment13_4.java
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 4, iCol = 5
// output.     : 4  4   4   4   4
//               3  3   3   3   3
//               2  2   2   2   2
//.              1  1   1   1   1
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
// Description   : This function is used to display patttren .
// Author        : Aniket Devaba Markad 
// Date          : 2/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Display(int iRow,int iCol)
    {
        int i =0,j = 0;
        
        for(i = iRow;i >= 1;i--)
        {

            for(j = 1;j <= iCol;j++)
            {
                
                System.out.print(i+"\t");
                
            
            }
            System.out.println();
        }
    }
}
class Assignment13_4
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








