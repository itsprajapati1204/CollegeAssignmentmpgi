#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float r1, r2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("real roots exists: %.2f and %.2f", r1, r2);
    }
    else if (discriminant == 0)
    {
        r1 = r2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
    }
    else if (discriminant < 0)
    {
        r1 = r2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf(" complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
               r1, imaginary, r2, imaginary);
    }

    return 0;
}