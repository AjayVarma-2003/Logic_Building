// Problem Statement : Take a number as a input and check whether it is pallindrome or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPallindrome(int iNo)
{
    auto int iRev = 0;
    auto int iDigit = 0;
    auto int iDupli = iNo;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        iRev = (iRev*10)+iDigit;    
    }
    return (iRev == iDupli); 
}

int main()
{
    auto int iValue = 0;
    auto int bRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a pallindrone number \n",iValue);
    }

    return 0;
}