/*
    START
        Accpet number by user
        divide given number by 2
        if reminder is equal to 0 display even
        or display odd
    STOP
*/

#include<stdio.h>
#include <stdbool.h>

bool CheckEven (int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("%d is an even number.",iValue);
    }
    else
    {
        printf("%d is an odd number.",iValue);
    }

    return 0;
}