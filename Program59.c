// Problem Statement : split the given number in input into single digit and count the number of digits

#include <stdio.h>

int CountDigits(int iNo)
{
    auto int iCnt = 0;
    auto int iDigit = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt += 1;
    }
    return iCnt;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d \n",iRet);

    return 0;
}