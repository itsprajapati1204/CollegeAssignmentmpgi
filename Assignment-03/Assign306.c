#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number *less than 10*: ");
    scanf("%d", &num);
  {
        if (num == 1)
            printf("1=>One");
        else if (num == 2)
            printf("2=>Two");
        else if (num == 3)
            printf("3=>Three");
        else if (num == 4)
            printf("4=>Four");
        else if (num == 5)
            printf("5=>Five");
        else if (num == 6)
            printf("6=>Six");
        else if (num == 7)
            printf("7=>Seven");
        else if (num == 8)
            printf("8=>Eight");
        else if (num == 9)
            printf("9=>Nine");
        else
        {
            if (num % 2 == 0)
                printf("%d is even.", num);
            else
                printf("%d is odd.", num);
        }
    }

    return 0;
}