// Problem Statement : Take stadard of student from user and then print its exam timing according to the standard

// Conclusion : We will print exam timing using if-else condition checking

// Algorithm :
/*
    START 
        Create variable value 
        take standard of student as input from user and store it in value
        if standard is 1 then exam at 8Am
        if standard is 2 then exam at 9Am
        if standard is 3 then exam at 10Am
        if standard is 4 then exam at 11Am
        if standard is 5 then exam at 12Am
        or print wrong standard
    STOP
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplauExamTime
//  Description :   Take standard as input and display timing of exam according to standard
//  Input :         Integer
//  Output :        void
//  Author :        Ajay Yogesh Varma
//  Date :          3-10-2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayExamTime(int iStandarad)
{
   if (iStandarad == 1)
   {
        printf("Your exam is at 8 AM \n");
   }
   else if (iStandarad == 2)
   {
        printf("Your exam is at 9 AM \n");
   }
   else if(iStandarad == 3)
   {
        printf("Your exam is at 10 AM \n");
   }
   else if (iStandarad == 4)
   {
        printf("Your exam is at 11 AM \n");
   }
   else if(iStandarad == 5)
   {
        printf("Your exam is at 12 AM \n");
   }
   else
   {
        printf("Wrong standard");
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
    
    printf("Enter your standard : ");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}