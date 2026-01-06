////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment1_1.java
//  Description  : Write a program which accept two numbers from user and perform division.
//  Author       : Aniket Devaba Markad
//  Date         : 06/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

class Assignment1_1
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Divide
    // Description   : This function is used to perform division of two numbers.
    // Input         : int, int
    // Output        : int
    // Author        : Aniket Devaba Markad
    // Date          : 06/12/2025
    //
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    static int Divide(int iNo1, int iNo2)
    {
        int iAns = 0;

        if(iNo2 == 0)
        {
            return -1;
        }

        iAns = iNo1 / iNo2;

        return iAns;
    }

    public static void main(String args[])
    {
        int iValue1 = 15, iValue2 = 5, iRet = 0;

        iRet = Divide(iValue1, iValue2);

        System.out.println("Division is " + iRet);
    }
}

