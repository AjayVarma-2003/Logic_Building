#include <stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the how many number you want to display on screen : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}