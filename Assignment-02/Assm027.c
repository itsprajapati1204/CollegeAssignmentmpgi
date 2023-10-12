#include <stdio.h>
int main()
{
    int a, b, sum, sub, multi, divi;
    printf("Enter the number a & b ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    multi = a * b;
    sub = a - b;
    divi = a / b;
    printf("The result is %d \n ", sum);
    printf("The result is %d \n ", sub);
    printf("The result is %d \n ", multi);
    printf("The result is %d \n ", divi);
    return 0;
}