#include <stdio.h>

long int CalculateCube(int iValue)
{
    auto long int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);
    printf("Cube of number is :%ld \n",iAns);

    return 0;
}
