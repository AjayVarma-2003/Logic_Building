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
//Addition is a function which accepts two parameters as integers and it returns integer
int Addition(int iNo1 , int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter 1st number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1 , iValue2);

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