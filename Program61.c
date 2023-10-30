// Problem Statement : split the given number in input into single digit and count the number of digits and get their sum

#include <stdio.h>

int SumDigits(int iNo)
{
    auto int iSum = 0;
    // auto int iDigit = 0;

    while(iNo != 0)
    {
        // iDigit = iNo % 10;
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        // iSum += iDigit; 
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digits are : %d \n",iRet);

    return 0;
}