#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character\n");
    scanf("%c", &ch);

    (( ch>= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))? printf("\n%c is an alphabet character.\n", ch) : printf("\n%c is not an alphabet character.\n", ch);

    return 0;
}