
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment3_5.java
// Description : write a program which accept one charater from user and check whether it is vowel or not .
// Author      : Aniket Devaba Markad                        
// Date        : 28/11/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : This function is used to check vowels(a,e,i,o,u). 
// Author        : Aniket Devaba Markad 
// Date          : 28/11/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    boolean ChkVowel(char ch)
    {
        
        return (ch == 'a'|| ch =='e'|| ch =='i' ||ch == 'o' || ch =='u'|| ch =='A'|| ch =='E'|| ch =='I'||ch == 'O'||ch == 'U');
        
    }
}
public class Assignment3_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        char ch = '0';
        boolean bRet = false;

        System.out.println("Enter the Char :");
        ch = sobj.next().charAt(0);

        number nobj = new number();
        bRet = nobj.ChkVowel(ch);

        if(bRet == true)
        {
            System.out.println(" enetred character is vowel");
        }
        else 
        {
            System.out.println("enterrd character is not Vowel");
        }
    }
}



