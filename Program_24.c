// Problem Statement : Find the minimum number from given two numbers

// Coclusion : We will take 2 numbers as input from user and then use if-else condition checking to get minimum number

// Algorithm : 
/*
    START 
        Create 2 variables value1 and value2
        Create Ret variable to store result
        get first number from user and store it in the value1
        get second number from user and store it in the value2
        if - value1 < value2 return value1
        or - return value2
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description :   Take two integer values as parameters and returns minimum among them
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Ajay Yogesh Varma
//  Date :          3-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int iNo1, int iNo2)
{
    if (iNo1 < iNo2)
    {
        return iNo1;
    }
    else if(iNo1 > iNo2)
    {
        return iNo2;
    }  
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1, iValue2);
    printf("Smallest number is : %d",iRet);

    return 0;
}