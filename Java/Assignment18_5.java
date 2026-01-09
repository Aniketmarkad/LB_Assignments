/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment18_5.java
// Description : write a program which Accept n number from user and display 
//               number which are  divisible by 5 and 3 .
// input.      : n : 6
// elements.   : 85   33  3   55  93  66
// output.     : 33   55  66                        
// Author      : Aniket Devaba Markad                        
// Date        : 9/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
    void Display(int Arr[])
    {
        int iCnt = 0;
        
        System.out.println(" Numbers which is multiples of 11 is  :");
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] % 11 == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
        
    }
}

public class Assignment18_5
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner (System.in);
        int iLength = 0;
        int Arr[];

        System.out.println("enter the size of element :");
        iLength =sobj.nextInt();

        Arr = new int [iLength];

        System.out.println("enter the array element :");

        for(int iCnt = 0 ; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        aobj.Display(Arr);

    }
}




