#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("The is Monday");
            break;
        case 2: 
            printf("The is Tuesday");
            break;
        case 3: 
            printf("The is Wednesday");
            break;
        case 4: 
            printf("The is Thursday");
            break;
        case 5: 
            printf("The is Friday");
            break;
        case 6: 
            printf("The is Saturday");
            break;
        case 7: 
            printf("The is Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}