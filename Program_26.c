// Problem Statement : Take 3 integers as input from user and find largest among them

// Conclusion : We will take 3 integers as input and find largest from them using if-else condition checking

// Algorithm
/*
    START
        create 3 variables as no1, no2, no3
        take 3 integer values as input from user and store it in those variables
        create variable result to store result of average
        if - no1 >=no2 and no>=no3 return no1
        if - no2 >= no1 and no2>=no3 return no2
        or - return no3
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Largest
//  Description :   Takes 3 integers as parameter and returns largest among them
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Ajay Yogesh Varma
//  Date :          3-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Largest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        return iNo1;
    }
    else if(iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
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
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : ");
    scanf("%d",&iValue2);

    printf("Enter 3rd number : ");
    scanf("%d",&iValue3);

    iRet = Largest(iValue1, iValue2, iValue3);
    printf("Largets number is : %d \n",iRet);

    return 0;
}