// find the output
#include<stdio.h>
int main(){
    int c=5,no=1000;
    do{
        no/=c;

    }while (c--);
    printf("%d\n",no);
    return 0;
    
}
// output- run time error
