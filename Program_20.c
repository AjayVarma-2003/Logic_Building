#include <stdio.h>

void DisplayClass(float fMarks)
{
    if (fMarks >= 0 && fMarks < 35.00)
    {
        printf("You are failed!!");
    }
    else if(fMarks >= 35.00 && fMarks < 50.00)
    {
        printf("You got pass class");
    }
    else if(fMarks >= 50.00 && fMarks < 59.00)
    {
        printf("You got second class");
    }
    else if(fMarks >=59.00 && fMarks < 75.00)
    {
        printf("You got first class");
    }
    else if (fMarks >= 75.00 && fMarks <= 100.00)
    {
        printf("You got distinction");
    }
    else
    {
        printf("Invalid Marks");
    }
}

int main()
{
    auto float fValue = 0.0;

    printf("Enter your percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}