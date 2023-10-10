// Problem Statement : Calculate the percentage by taking obtained marks and total marks from user as input

// Conclusion : We will calculate the percentage by formula (obtained marks / Total marks) * 100

// Algorithm :
/*
    START
        create two variables marks and total and percent
        take user input for obtained marks and store it in the marks
        take user input for total marks and store it in the total
        create function as CalculatePercentage and pass two intger parameters named Marks and Total
        calculate percentage as (Marks / Total) * 100  and return percentagein the function
        return percentage in percent
    STOP
*/

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePercentage
//  Description :   Take Marks and total marks as input and return percentage
//  Input :         Integer , Integer
//  Output :        Float
//  Author :        Ajay Yogesh Varma
//  Date :          2-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercent = 0.0f;

    if (iMarks > iTotal)    //Filter
    {
        printf("Invalid marks \n");
        return fPercent;
    }

    fPercent = (((float) iMarks / (float) iTotal) * 100);
    return fPercent;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  This is entry point of the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int imarks = 0;
    auto int itotal = 0;
    auto float fpercent = 0.0f;

    printf("Enter the marks you get : ");
    scanf("%d",&imarks);

    printf("Enter the total marks : ");
    scanf("%d",&itotal);

    fpercent = CalculatePercentage(imarks, itotal);
    printf("Your percentage are : %f \n",fpercent);

    return 0;
}