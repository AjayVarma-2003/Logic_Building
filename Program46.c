#include <stdio.h>
#include <stdbool.h>

// This is build phase program check program45

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d are :", iNo);
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d \n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;
}

//Time Complexity : O(n)

/*
    Time Complexity     Input       Iterations 
    o(n)                100         100
    o(2n)               100         200
    o(n^2)              100         10000
    o(n^3)              100         1000000
    o(n/2)              100         50
    o(n/4)              100         25
*/