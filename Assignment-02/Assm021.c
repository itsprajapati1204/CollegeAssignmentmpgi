#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter number num1:-");
    scanf("%d",&num1);
    printf("Enter number num2:-");
    scanf("%d",&num2);
    (num1>num2)?printf("num1 is greater than num2 "):printf("num1 is less than num2");
    return 0;
}