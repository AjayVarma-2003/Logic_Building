#include <stdio.h>

int CalculateCube(int iValue)
{
    auto int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto int iAns = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);
    printf("Cube of number is :%d \n",iAns);

    return 0;
}
