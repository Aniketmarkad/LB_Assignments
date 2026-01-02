/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment13_2.java
// Description : write a program which Accept number ofrows and column from user and display below pattern
// input.      : iRow = 4 , iCol = 4
// output.     : A  B   C   D
//               a  b   c   d
//               A  B   C   D
//.              a  b   c   d
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

    void Display(int iRow,int iCol)
    {
        int i =0,j = 0;

        for(i = 1 ;i <= iRow;i++)
        {
            char ch1 ='A',ch2 = 'a';
            for(j = 1, ch1='A',ch2 = 'a';j <= iCol;j++,ch1++,ch2++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch2+"\t");
                }
                else
                {
                    System.out.print(ch1+"\t");
                }
            
            }
            System.out.println();
        }
    }
}
class Assignment13_2
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







