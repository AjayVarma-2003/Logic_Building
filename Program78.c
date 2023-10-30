# include <stdio.h>
# include <stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/(float)iSize);
}

int main()
{
    auto int iCount = 0;
    int *ptr = NULL;
    auto int iCnt = 0;
    auto int fRet = 0.0f;

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

    fRet = Average(ptr,iCount);
    printf("\nAddition of all Elements of the array are : %f\n",fRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}