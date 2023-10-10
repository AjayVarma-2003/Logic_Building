#include <stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Hello %d \n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of times you want to display on screen : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}