//Problem statement : Accept 2 values from user and perform the addition.

#include <stdio.h>

int main()
{
    int i,j,k;
    printf("Enter 1st number : \n");
    scanf("%d",&i);

    printf("Enter 2nd number : \n");
    scanf("%d",&j);

    k = i +j;

    printf("Sum of given number is : %d\n",k);

    return 0;
}