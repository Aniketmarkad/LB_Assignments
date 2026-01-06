/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_2.java
// Description : Accept single digit number from user and print it into word
// Author      : Aniket Devaba Markad                        
// Date        : 6/12/2025 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DigitToWord
// Description   : This function is used to print digit to word  . 
// Author        : Aniket Devaba Markad 
// Date          : 6/12/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void DigitToWord(int iNo)
    {

        switch(iNo)
        {
            case 0:
                System.out.println("zero");
                break;
            case 1:
                System.out.println("one");
                break;
            case 2:
                System.out.println("two");
                break;
            case 3:
                System.out.println("three");
                break;
            case 4:
                System.out.println("four");
                break;
            case 5:
                System.out.println("five");
                break;
            case 6:
                System.out.println("six");
                break;
            case 7:
                System.out.println("seven");
                break;
            case 8:
                System.out.println("eight");
                break;
            case 9:
                System.out.println("nine");
                break;
            default:
                System.out.println("invalid input");
                break;
            
        }
    }
}
public class Assignment6_2
{
    public static void main(String []a)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DigitToWord(iValue);

    }
}
