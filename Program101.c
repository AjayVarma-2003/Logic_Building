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
                printf("%d\t",i);
            }
        }
        printf("\n");
    }
}

int main()
{
    int No1 = 0, No2 = 0;

    printf("Enter the number of the rows : \n");
    scanf("%d",&No1);

    printf("Enter the number of the columns : \n");
    scanf("%d",&No2);

    Display(No1, No2);

    return 0;
}