#include <stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercent = 0.0f;

    if ( (iMarks < 0) || (iTotal < 0) ) //Filter
    {
        printf("Invalid marks \n");
        return fPercent;
    }
    if (iMarks > iTotal)    //Filter
    {
        printf("Invalid marks \n");
        return fPercent;
    }

    fPercent = (((float) iMarks / (float) iTotal) * 100);
    return fPercent;
}

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