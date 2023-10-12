#include <stdio.h>  
int main()  
{  
    int radius;  
    float pie=3.142;  
    printf("Enter Radius:");
    scanf("%d", &radius);
    double volume=(4/3)*pie*(radius*radius*radius); 
    printf("Volume of the sphere=%f",volume);  
    return 0;
} 