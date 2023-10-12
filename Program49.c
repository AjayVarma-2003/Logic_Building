// Problem Statement : Take a integer from user as input and check whether it is perfect number or not 
#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    auto int iValue = 0;
    auto bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number",iValue);
    }
    else
    {
        printf("%d is not perfect number",iValue);
    }

    return 0;
}