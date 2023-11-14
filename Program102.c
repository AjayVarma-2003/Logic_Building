# include <stdio.h>

void Display(int iRow, int iColumn)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if((i % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the number of the rows : \n");
    scanf("%d",&iNo1);

    printf("Enter the number of the column : \n");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);

    return 0;
}