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