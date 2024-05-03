// output of the program
#include <stdio.h>
int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];//i++ increase the value to 2
    printf("%d %d %d", i, j, m);
    return 0;
}
// output - 3,2,15
