// Problem Statement : Calculate the cube of number 

// Conclusion : We will take number from user and calculate its cube as No * No* No

// Algorithm :
/*
    START
        Accept the number from user and store it in iNo
        Create variable Ans to store the result
        calculate the cube of input number as No * No * No in CalculateCube function
        return cube of number
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateCube
//  Description :   Take one integer value and returns its cube
//  Input :         Integer
//  Output :        Integer
//  Author :        Ajay Yogesh Varma
//  Date :          2-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

long int CalculateCube(int iValue)
{
    auto long int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);
    printf("Cube of number is :%ld \n",iAns);

    return 0;
}
