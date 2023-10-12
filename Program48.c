// Problem Statement : take a integer as a input from user and return the addition of its factors

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
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
    return iSum;
}

int main()
{   
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Sum of factors are : %d \n",iRet);
    
    return 0;
}

// Time COmplexity : O(N/2)