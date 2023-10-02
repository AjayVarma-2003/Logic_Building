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

int main()
{
    int i,j,k;
    printf("Enter 1st number : \n");
    scanf("%d",&i);

    printf("Enter 2nd number : \n");
    scanf("%d",&j);

    k = i +j;

    printf("Sum of given number is : %d\n",k);

    return 0;
}