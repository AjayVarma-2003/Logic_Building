#include <stdio.h>
#include <stdlib.h>  //for malloc and free

void Display(int Arr[], int iLen)
{   
    int iCnt = 0;

    printf("Your entered elements are : \n");
    for(iCnt = 0; iCnt < iLen; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;  //chaku zakun thevava nhitar tochto
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);

    ptr =  (int *) malloc(iCount * sizeof(int));

    printf("Enter the elements : "); 
    // scanf("%d",&ptr[0]);
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr,iCount);

    return 0;
}