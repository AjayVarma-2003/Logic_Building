#include <stdio.h>

void DisplayExamTime(int iStandarad)
{
    switch(iStandarad)
    {
        case 1:
            printf("Your exam is at 8 Am \n");
            break;
        case 2:
            printf("Your exam is at 9 AM \n");
            break;
        case 3:
            printf("Your exam is at 10 AM \n");
            break;
        case 4:
            printf("Your exam is at 11 AM \n");
            break;
        case 5:
            printf("Your exam is at 12 PM \n");
            break;
        default:
            printf("Wrong standard \n");
    }
}

int main()
{
    auto int iValue = 0;
    
    printf("Enter your standard : ");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}