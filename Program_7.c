//Problem statement : Accept 2 values from user and perform the addition.

//Step 1: Understand problem statement 
//conclusion : We have to accept to integers and perform the addition.

//Step 2: Write algorithm
/*
 START
    Accept 1st number from user and store it into no1
    Accept 2nd number from user and store it into no2
    Create one variable to store result named as ans
    Perform addition of no1 and no2 and store result in ans
    Display the result from ans to the user
 STOP
*/

//Step 3: Decide the programming language (C / cpp / java / python)
//We select the c programming

//Step 4: Write the program 

#include <stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function name :     Addition
//  Description :       It is used to perform addtion of two integers
//  Input Argument :    Integer , Integer
//  Output :            Integer
//  Author :            Ajay Yogesh Varma
//  Date :              25-09-2023
//
///////////////////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2)
{
    int iSum = 0;           //Variable to store the value of addition
    iSum = iNo1 + iNo2;
    return iSum;
}

///////////////////////////////////////////////////////////////////////
//
//  Entry Point function of an application which performs addition 
//  of two integers
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;        //Variable to store the 1st input 
    int iValue2 = 0;        //Variable to store the 2nd input
    int iAns = 0;           //Variable to store the result

    printf("Enter 1st number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1 , iValue2);     //Function call to perform addition 

    printf("Sum of given number is : %d\n",iAns);

    return 0;
}

//Step 5: Test the code
/*
Test case 1: 
Input = 10 11
output = 21

Test case 2:
input = 12 -6
output = 6

Test case 3:
input = 10 0
output = 10

Test case 4:
input = -5 -6
output = -11
*/