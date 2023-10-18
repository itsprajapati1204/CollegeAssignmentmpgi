#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any char:- ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z'))
    {
        printf("'%c' is Lowercase", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is Uppercase", ch);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}