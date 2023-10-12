#include <stdio.h>
 
int main() 
{
    int num;  
    printf("Enter your number:-");
    scanf("%d", &num);
    (num % 2 == 0)? printf("The given number is even") : printf("The given number is odd");
    //  conditional operation   
    return 0;
}