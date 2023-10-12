#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10,d;

    d = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", d);

    d = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", d);
    d = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", d);

    d = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", d);

    d = !(a != b);
    printf("!(a != b) is %d \n", d);

    d = !(a == b);
    printf("!(a == b) is %d \n", d);

    return 0;
}

//logical operator