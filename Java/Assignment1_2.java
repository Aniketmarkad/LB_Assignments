////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name    : Assignment1_2.java
//  Description  : program to display "Marvellous" 5 times on screen.
//  Author       : Aniket Devaba Markad
//  Date         : 07/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

class Assignment1_2
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : This function is used to display "Marvellous" 5 times.
    // Input         : void
    // Output        : void
    // Author        : Aniket Devaba Markad
    // Date          : 07/12/2025
    //
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    static void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            System.out.println(iCnt + ":Marvellous");
        }
    }

    public static void main(String args[])
    {
        Display();
    }
}

