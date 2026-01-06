/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_2.java
// Description : write a program which Accept amount in us doller and return its corresponding value in Indian 
//               Currency consider 1 $ as 70 rupees
// input       : 10
// otput.      : 700
// input       : 1200
// otput.      : 84000
// Author      : Aniket Devaba Markad                        
// Date        : 1/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class  Number
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DollerToInr
// Description   : This function is used to calculate doller in indian rupees
// Author        : Aniket Devaba Markad 
// Date          : 1/1/2026 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int DollerToInr(int iNo)
    {
        if(iNo < 0 )
        {
            System.out.println(" invalid input");
            return 0;
        }

        int iRuppes = 1;
        iRuppes = iNo * 70;

        return iRuppes;
    }
}
public class Assignment7_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.DollerToInr(iValue);

        System.out.println("amount is : "+ iRet);
    }
}

