// Problem Statement : Take numbers from users and display even from them
# include <stdio.h>
# include <stdlib.h>

void EvenDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("\nEven Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize;iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }

    printf("\n");
}

int main()
{
    auto int iCount = 0;
    int *ptr = NULL;
    auto int iCnt = 0;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements \n",iCount);

    printf("Enter the  %d values : \n",iCount);

    printf("Enter the values : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    EvenDisplay(ptr,iCount);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}