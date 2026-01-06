//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment6_2.c 
// Description : Write a program which accept number from user and print it in to words.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DisplayNumberWords
// Description   : This function is used to display number in to words. 
// Input         : int 
// Output        : void
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayNumberWords(int iNo)
{
   switch(iNo)
   {
    case 0:
        printf("Zero\n");
    break;
    case 1:
        printf("one\n");
    break;
    case 2:
        printf("two\n");
    break;
    case 3:
        printf("three\n");
    break;
    case 4:
        printf("four\n");
    break;
    case 5:
        printf("five\n");
    break;
    case 6:
        printf("six\n");
    break;
    case 7:
        printf("seven\n");
    break;
    case 8:
        printf("eight\n");
    break;
    case 9:
        printf("nine\n");
    break;
    default :
        printf("wrong input\n");
    break;

   }   
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d ",&iValue);

    DisplayNumberWords(iValue);

    return 0;
}
//Time Complexcity cant find in this example.