#include <stdio.h>
#include <conio.h>
int main()
{
    float pie = 3.14;
    int radius;
    printf("Enter Radius of Cicle:");
    scanf("%d", &radius);
    printf(" radius of the circle is %d\n", radius);
    float area =pie * radius * radius;
    printf("The area of the given circle is %f", area);
    return 0;
}