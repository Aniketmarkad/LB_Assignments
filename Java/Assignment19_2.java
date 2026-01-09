////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_2.java
// Description : write a program which Accept n number from user and return 
//               diffrance between frequency of even numbers and odd numbers.
// input.      : n : 6
// elements.   : 85   66  3   80  93  88    90
// output.     : 1 (4-3)                       
// Author      : Aniket Devaba Markad                        
// Date        : 10/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class ArrayX
{
    int DiffranceFrequency(int Arr[])
    {
        int iCnt = 0,iEvenElement = 0 ,iOddElement = 0,iDiff = 0;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenElement ++;
            }
            else
            {
                iOddElement++;
            }
        }
        iDiff = iEvenElement - iOddElement;
        return iDiff;
    }

}
class Assignment19_2
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

        int iRet = aobj.DiffranceFrequency(Arr);

        System.out.println(" diffrance between  even number and odd numbers  element is :"+ " "+iRet);
    }
}

