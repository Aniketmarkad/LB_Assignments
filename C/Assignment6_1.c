//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_1.c 
// Description : Write a program which accept number from user and print if number ( < 50) small,(> 50 && < 100)medium,(>100)large
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayNumber
// Description   : This function is used to display number. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayNumber(int iNo)
{
    if(iNo < 50)
    {
        printf("number is : Small\n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("number is :Medium\n");
    }
    else if(iNo > 100)
    {
        printf("number is : Large\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    DisplayNumber(iValue);

    return 0;
}
//Time Complexcity cant find in this example.