// Problem Statement : 

#include <stdio.h>

int Reverse(int iNo)
{
    auto int iRev = 0;
    auto int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        iRev = (iRev*10)+iDigit;    
    }
    return iRev;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse of the given number is : %d",iRet);

    return 0;
}