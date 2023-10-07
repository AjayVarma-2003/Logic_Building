#include <stdio.h>

int Largest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        return iNo1;
    }
    else if(iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number : ");
    scanf("%d",&iValue2);

    printf("Enter 3rd number : ");
    scanf("%d",&iValue3);

    iRet = Largest(iValue1, iValue2, iValue3);
    printf("Largets number is : %d \n",iRet);

    return 0;
}