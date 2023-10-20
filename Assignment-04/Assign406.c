#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number:-");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("Number is postive ");
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("Number is negative");
            break;
        case 0:
            printf("Number is Zero");
            break;
        }
    }
    return 0;
}