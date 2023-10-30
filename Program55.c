// Problem Statement : split the given number in input into single digit

#include<stdio.h>

void Display(int iNo)
{
   auto int iDigit = 0;

   while(iNo != 0)
   {
    printf("------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Number is : %d\n",iNo);
   }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}