#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z'))
        printf("%c  alphabet.", c);
    else
        printf("%c not an alphabet.", c);

    return 0;
}
