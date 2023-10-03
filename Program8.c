// Problem Statement : Accept radius from user and calculate area of circle

// Step 1: Understand the problem statement
// Conclusion : We are going to use formula PI*R*R

// Step 2: Algorithm
/*
    START :
        Accept radius from user and store it into Radius
        Create variable as PI and store value 3.14
        Calculate area as PI*R*R
        Display the value of are to the user
    STOP
*/


#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : displayArea
//  Description :   This function is used to calculate area of circle using radius given by user
//  Input :         float
//  Output :        float
//  Athor :         Ajay Yogesh Varma
//  Date :          2-10-2023
//
////////////////////////////////////////////////////////////////////////////////////////////////

float displayArea(float dRad)
{
    auto float fCalculateArea = 0.0f;
    auto const float PI = 3.14f;

    fCalculateArea = PI * dRad * dRad;
    return fCalculateArea;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle: ");
    scanf("%f",&fRadius);

    fArea = displayArea(fRadius);

    printf("Area of circle is : %f\n",fArea);
    return 0;
}
