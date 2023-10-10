// Problem Statement : Take 3 integers as input from user and find their average

// Conclusion : We will take 3 integers as input and perform their average as (No1 + No2 + No3)/3

// Algorithm
/*
    START
        create 3 variables as no1, no2, no3
        take 3 integer values as input from user and store it in those variables
        create variable result to store result of average
        perform (no1 + no2 + no3)/3 and store its value in result
        return result
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Average
//  Description :   Takes 3 integers as parameter and returns it average
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Ajay Yogesh Varma
//  Date :          3-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

float Average(int iNo1, int iNo2, int iNo3)
{
    float fResult = 0.0f;

    fResult = (((float)iNo1 + (float)iNo2 + (float)iNo3) / 3);
    return fResult;
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
    auto int iValue3 = 0;
    auto float iRet = 0.0f;

    printf("Enter 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : ");
    scanf("%d",&iValue2);

    printf("Enter 3rd number : ");
    scanf("%d",&iValue3);

    iRet = Average(iValue1, iValue2, iValue3);
    printf("Average of these numbers is : %f",iRet);

    return 0;
}