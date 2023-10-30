# include <stdio.h>
# include <stdlib.h>

int DisplayMin(int Arr[], int iSize)
{
    int iCnt = 0;
    int min = Arr[0];
    
    for(iCnt = 0; iCnt < iSize;iCnt ++)
    {
        if (Arr[iCnt] < min)
        {
            min = Arr[iCnt];
        }
    }
    return min;
}

int main()
{
    auto int iCount = 0;
    int *ptr = NULL;
    auto int iCnt = 0;
    auto int iRet = 0;

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

    iRet = DisplayMax(ptr,iCount);
    printf("\nMinimum Element of the array are : %d \n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}