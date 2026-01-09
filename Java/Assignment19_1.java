////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_1.java
// Description : write a program which Accept n number from user and return 
//               frequency of even numbers
// input.      : n : 6
// elements.   : 85   33  3   55  93  66
// output.     : 1                        
// Author      : Aniket Devaba Markad                        
// Date        : 10/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class ArrayX
{
    int EvenFrequency(int Arr[])
    {
        int iCnt = 0,iEvenElement = 0;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenElement ++;
            }
        }
        return iEvenElement;
    }

}
class Assignment19_1
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner(System.in);

        int Arr [] ;

        System.out.println("enter the size of array :");
        int iLength = sobj.nextInt();

        Arr = new int[iLength];

        System.out.println("enter the "+ iLength + "elements in array :");

        for(int iCnt= 0; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        int iRet = aobj.EvenFrequency(Arr);

        System.out.println(" even number of element is :"+ " "+iRet);
    }
}
