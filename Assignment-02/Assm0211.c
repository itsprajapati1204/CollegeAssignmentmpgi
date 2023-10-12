#include <stdio.h>
int main()
{
    int num,sub=0;
    int sum = 0;
    printf("Enter your number:-");
    scanf("%d",&num);

    while (num != 0)
    {
        sum += num % 10;
        // sub -= num % 10; doubt how to solve  it in substration
        num = num / 10;
    }
    printf(" The sum of five number is : %d\n", sum);
    printf(" The sub of five number is : %d", sub);
    return 0;
}