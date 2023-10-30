# include <stdio.h>
# include <stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        if((Arr[iCnt])%2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        } 
    }
    return iSum;
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

    iRet = Addition(ptr,iCount);
    printf("\nAddition of all even Elements of the array are : %d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}