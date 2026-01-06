
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_4.java
// Description : write a program which accept one charater from user and convert case of that and print on screen.
// Author      : Aniket Devaba Markad                        
// Date        : 28/11/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ConvertCase
// Description   : This function is used to convert the case of letter print . 
// Author        : Aniket Devaba Markad 
// Date          : 28/11/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char ConvertCase(char ch)
    {
        char nch = '0';
        if(ch >= 65 && ch <= 90)
        {
            nch = (char)(ch+ 32);
        }
        else if(ch >= 97 && ch <= 122)
        {
            nch = (char)(ch - 32);
        }
        return nch;
    }
}
public class Assignment3_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        char ch , iRet;

        System.out.println("Enter the Char :");
        ch = sobj.next().charAt(0);

        number nobj = new number();
        iRet = nobj.ConvertCase(ch);

        System.out.println("Updated character is : "+iRet);
    }
}



