#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    // swapping to number logi

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swapping, a = %lf\n", a);
    printf("After swapping, b = %lf", b);

    return 0;
}
