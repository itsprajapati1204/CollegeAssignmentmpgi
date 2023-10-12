#include <stdio.h>
int main()  
{  
    int a1, a2, a3; 
  
    
    printf("Enter two angles of triangle : ");  
    scanf("%d, %d", &a1, &a2);  
  
     a3 = 180 - (a1 + a2); 
  
    printf("Third angle :  %d\n", a3);  
  
    return 0;  
}  