// Problem Statement : Print Jay Ganesh 5 times on screen

// Conclusion : We will print thr Jay Ganesh 5 times on the screen using for loop

// Algorithm 
/*
    START
        create variable cnt 
        run the for loop till cnt = 5 and print required string that much times
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display  
//  Description :   using for loop prints required string 5 times
//  Input :         None
//  Output :        None
//  Author :        Ajay Yogesh Varma
//  Date :          9-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
   auto int iCnt = 0;

   for(iCnt = 0; iCnt <= 4; iCnt++)
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
    Display();

    return 0;
}