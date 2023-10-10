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

/*
    START
        Accpet number by user
        divide given number by 2
        if reminder is equal to 0 display even
        or display odd
    STOP
*/

#include<stdio.h>
#include <stdbool.h>

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

bool CheckEven (int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    auto bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("%d is an even number.",iValue);
    }
    else
    {
        printf("%d is an odd number.",iValue);
    }

    return 0;
}