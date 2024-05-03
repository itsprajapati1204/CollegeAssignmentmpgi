// what is output of this code
#include<stdio.h>
int main(){
    static int i=2;
    printf("Hello main !!");
    if(i<3)
    main(i=5);
    return 0;
}
// output-Hello main !!Hello main !!
