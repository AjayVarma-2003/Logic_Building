// Problem Statement : Print Jay Ganesh 5 times on screen

// Conclusion : We will print thr Jay Ganesh 5 times on the screen using for loop

// Algorithm 
/*
    START
        create variable value 
        take input from user as integer and store it in value
        create cnt 
        run for loop as cnt =1 and cnt<value and cnt++
        return the value of for loop
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display  
//  Description :   using for loop prints required string how many times user wants to print
//  Input :         Integer
//  Output :        None
//  Author :        Ajay Yogesh Varma
//  Date :          9-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
   auto int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    printf("Jay Ganesh...\n");
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
    auto int iValue = 0;
    
    printf("Enter the how many times you want to display : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}