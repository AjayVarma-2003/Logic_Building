/*
    START
        Accpet number by user
        divide given number by 2
        if reminder is equal to 0 display even
        or display odd
    STOP
*/

#include <stdio.h>

int EvenOdd(int iValue)
{
    if(iValue%2 == 0)
    {
        printf("It is an even number.");    //do not program like this ... check program15
    }
    else
    {
        printf("It is an odd nume=ber.");
    }
    
}

int main() 
{
    auto int iNo = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iNo);

    EvenOdd(iNo);

    return 0;
}