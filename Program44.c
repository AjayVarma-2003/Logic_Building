#include <stdio.h>
#include <stdbool.h>

// This is build phase program check program45

void DisplayFactors(int iNo)
{
    if(iNo % 1 == 0)
    {
        printf("1\n");
    }
    if(iNo % 2 == 0)
    {
        printf("2\n");
    }
    if(iNo % 3 == 0)
    {
        printf("3\n");
    }
    if(iNo % 4 == 0)
    {
        printf("4\n");
    }
    if(iNo % 5 == 0)
    {
        printf("5\n");
    }
    if(iNo % 6 == 0)
    {
        printf("6\n");
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