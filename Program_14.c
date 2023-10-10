// Problem Statement : Check whether the number given is odd or even

// Conclusion : We will check the given number is odd or even using if-else and mathematical calculations

// Algorithm : 
/*
    START
        Accpet number by user
        divide given number by 2
        if reminder is equal to 0 display even
        or display odd
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenOdd
//  Description :   Takes a integer as parameter and checks whether it is odd or even
//  Input :         Integer
//  Output :        void
//  Author :        Ajay Yogesh Varma
//  Date :          2-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void EvenOdd(int iValue)
{
    if(iValue%2 == 0)
    {
        printf("It is an even number.");    //do not program like this ... check program15
    }
    else
    {
        printf("It is an odd nume=ber.");
    }
    
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    auto int iNo = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iNo);

    EvenOdd(iNo);

    return 0;
}