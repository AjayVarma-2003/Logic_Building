# include <stdio.h>
# include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize;iCnt ++)
    {
        printf("%d \t",Arr[iCnt]);
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

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);

    return 0;
}