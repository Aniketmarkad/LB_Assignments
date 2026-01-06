////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment1_3.java
//  Description  : Write a program which accept number from user and display that number in reverse order.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

class Assignment1_3
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : This function is used to display numbers in reverse order.
    // Input         : void
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    static void Display()
    {
        int iCnt = 0;

        iCnt = 5;
        while(iCnt >= 1)
        {
            System.out.println(iCnt);
            iCnt--;
        }
    }

    public static void main(String args[])
    {
        Display();
    }
}

