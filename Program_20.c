// Problem Statement : Take percentage as input from user and print his passing criteria on screen

// Conclusion : We will use if-else condtion checking for this

// Algorithm
/*
    START
        create variable value and intialize it to 0
        Take percentage as input from user and store it in value
        if - value >= 0 and < 35 then failed
        or - value >= 35 and < 50 then pass class
        or - value >= 50 and < 59 then second class
        or - value >= 59 and < 75 then first class
        or - value >= 75 and <= 100 then distinction class
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayClass
//  Description :   Takes integer as parameter and prints class based upon value
//  Input :         Integer
//  Output :        Void
//  Author :        Ajay Yogesh Varma
//  Date :          3-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{
    if (fMarks >= 0 && fMarks < 35.00)
    {
        printf("You are failed!!");
    }
    else if(fMarks >= 35.00 && fMarks < 50.00)
    {
        printf("You got pass class");
    }
    else if(fMarks >= 50.00 && fMarks < 59.00)
    {
        printf("You got second class");
    }
    else if(fMarks >=59.00 && fMarks < 75.00)
    {
        printf("You got first class");
    }
    else if (fMarks >= 75.00 && fMarks <= 100.00)
    {
        printf("You got distinction");
    }
    else
    {
        printf("Invalid Marks");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto float fValue = 0.0;

    printf("Enter your percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}