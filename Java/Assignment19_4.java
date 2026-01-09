////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_4.java
// Description : write a program which Accept n number from user and return the frequency of 11.
// input.      : n : 6
// elements.   : 85   66  3   11  93  11    90
// output.     : 2                      
// Author      : Aniket Devaba Markad                        
// Date        : 10/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class ArrayX
{
    int CountFrequency(int Arr[])
    {
        int iCnt = 0 ,iFrequency = 0;
        
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == 11)
            {
                iFrequency++;
            }
           
        }
        return iFrequency;
    }

}
class Assignment19_4
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

        int iRet = aobj.CountFrequency(Arr);

        System.out.println("frequncy of 11 is :"+" "+iRet);
    
    }
}



