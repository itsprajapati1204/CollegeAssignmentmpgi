
#include <stdio.h>

int main()
{
    int N;
    printf("Enter months in numeric form:-(*Example-1,2,3):-");
    scanf("%d",&N);

    //  31 Days
    if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12)
    {
        printf("31 Days.");
    }

    //  30 Days
    else if (N == 4 || N == 6 || N == 9 || N == 11)
    {
        printf("30 Days.");
    }

    //  28 or 29 Days
    else if (N == 2)
    {
        printf("28/29 Days.");
    }

    else
    {
        printf("Invalid Month.");
    }
    return 0;
}
