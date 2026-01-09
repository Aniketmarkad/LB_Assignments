////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_3.java
// Description : write a program which Accept n number from user and check wheather  11 is present or not.
// input.      : n : 6
// elements.   : 85   66  3   80  93  88    90
// output.     : 11 is absent                       
// Author      : Aniket Devaba Markad                        
// Date        : 10/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class ArrayX
{
    boolean CheckElement(int Arr[])
    {
        int iCnt = 0;
        boolean bFlage = false;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == 11)
            {
                bFlage = true;
                break;
            }
           
        }
        return bFlage;
    }

}
class Assignment19_3
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner(System.in);

        int Arr [] ;

        System.out.println("enter the size of array :");
        int iLength = sobj.nextInt();

        Arr = new int[iLength];

        System.out.println("enter the "+ iLength +" "+"elements in array :");

        for(int iCnt= 0; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        boolean bRet = aobj.CheckElement(Arr);

        if(bRet == true)
        {
            System.out.println("11 is present");
        }
        else
        {
            System.out.println("11 is absent");
        }
    }
}


