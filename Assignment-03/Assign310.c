#include <stdio.h>

int main()
{
    int length1, width1, area1;
    int length2, width2, area2;
    printf("Enter length of rectangle: ");
    scanf("%d", &length1);
    printf("Enter width of rectangle: ");
    scanf("%d", &width1);
    area1 = length1 * width1;
    printf("Area of rectangle = %d sq. units", area1);
    printf("\n");
    // second rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &length2);
    printf("Enter width of rectangle: ");
    scanf("%d", &width2);
    area2 = length2 * width2;
    printf("Area of rectangle = %d sq. units ", area2);
    printf("\n");

    if (area1>area2)
    printf("Area1 is greater than area2");
    else if (area2>area1)
    printf("Area2 is greater than area1");
    else
    printf("Null");

    return 0;
}