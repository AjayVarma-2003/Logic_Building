# include <stdio.h>
# include <stdbool.h>

bool ChkCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = ChkCapital(ch);

    if(bRet == true)
    {
        printf("It is a capital letter \n");
    }
    else
    {
        printf("It is not a capital letter \n");
    }

    return 0;
}