////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment19_5.java
// Description : write a program which Accept n number from user and  and accept another number as No return the frequency of it.
// input.      : n : 6.      No = 11
// elements.   : 85   66  3   11  93  11    90
// output.     : 2                      
// Author      : Aniket Devaba Markad                        
// Date        : 10/1/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class ArrayX
{
    int CountFrequency(int Arr[],int iNo)
    {
        int iCnt = 0 ,iFrequency = 0;
        
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iFrequency++;
            }
           
        }
        return iFrequency;
    }

}
class Assignment19_5
{
    public static void main(String []a)
    {
        Scanner sobj = new Scanner(System.in);

        int Arr [] ;

        System.out.println("enter the size of array :");
        int iLength = sobj.nextInt();

        System.out.println("enter the number that you want to count frequency ");
        int No = sobj.nextInt();

        Arr = new int[iLength];

        System.out.println("enter the "+ iLength +" "+"elements in array :");

        for(int iCnt= 0; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        int iRet = aobj.CountFrequency(Arr,No);

        System.out.println("frequncy of "+ No + " is :"+" "+iRet);
    
    }
}




