# include <stdio.h>
# include <stdbool.h>

bool ChkCapital(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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
        printf("It is a small letter \n");
    }
    else
    {
        printf("It is not a small letter \n");
    }

    return 0;
}