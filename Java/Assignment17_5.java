/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment17_5.java
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 5, iCol = 5
// output.     : 1  2   3   4   5
//               1  2           5
//               1      3       5   
//.              1          4   5           
//               1  2   3   4   5          
// Author      : Aniket Devaba Markad                        
// Date        : 3/1/2026
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
// Date          : 3/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Display(int iRow,int iCol)
    {
        int i =0,j = 0;
        
        for(i = 1;i <= iRow;i++)
        {
            
            for(j = 1;j <= iCol;j++)
            {   
                if(j == i || i == 1|| j ==1 || j == iCol || i == iRow)
                {
                    System.out.print(j+"\t");
                }
                else 
                {
                    System.out.print(" \t");
                }
               
             
            }
            System.out.println();
        }
    }
}
class Assignment17_5
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























