// Problem Statement : take integer as input and check whether it is prime number or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    auto int iCnt = 0;

    if(iNo < 0)         //filter
    {
       return false;
    }

    for(iCnt = 2; iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    auto int iValue = 0;
    auto bool bRet = false;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }
    
    return 0;
}