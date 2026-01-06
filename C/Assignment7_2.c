//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// file name   : Assignment7_2.c 
// Description : Write a program which accept doller from and return in indian currency.
// Author      : Aniket Devaba Markad 
// Date        : 16/05/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
#define INR 70

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// 
// Function Name : DollerToINR
// Description   : This function is used to calculate doller to indian currency. 
// Input         : int 
// Output        : int
// Author        : Aniket Devaba Markad 
// Date          : 16/05/2025 
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

int DollerToINR(int iNo)
{  
    int iAmount = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }  
  
    iAmount = iNo * INR ;
   
    return iAmount;
}

int main()
{
    int  iValue = 0;
    int  iRet = 0;
    
    printf("Enter amount in usd :");
    scanf("%d ",&iValue);

    iRet = DollerToINR(iValue);

    printf("Amount in indian currency :%d\n",iRet);

    return 0;
}
//Time Complexcity cant find in this example.