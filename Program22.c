#include <stdio.h>

void DisplayExamTime(int iStandarad)
{
   if (iStandarad == 1)
   {
        printf("Your exam is at 8 AM \n");
   }
   else if (iStandarad == 2)
   {
        printf("Your exam is at 9 AM \n");
   }
   else if(iStandarad == 3)
   {
        printf("Your exam is at 10 AM \n");
   }
   else if (iStandarad == 4)
   {
        printf("Your exam is at 11 AM \n");
   }
   else if(iStandarad == 5)
   {
        printf("Your exam is at 12 AM \n");
   }
   else
   {
        printf("Wrong standard");
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