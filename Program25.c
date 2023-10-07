#include <stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fResult = 0.0f;

    fResult = (((float)iNo1 + (float)iNo2 + (float)iNo3) / 3);
    return fResult;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto float iRet = 0.0f;

    printf("Enter 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : ");
    scanf("%d",&iValue2);

    printf("Enter 3rd number : ");
    scanf("%d",&iValue3);

    iRet = Average(iValue1, iValue2, iValue3);
    printf("Average of these numbers is : %f",iRet);

    return 0;
}