// find the output
#include <stdio.h>
int main()
{
    int a = 2, b = 3, c;
    c = a, a = b, b = c;
    printf("%d %d %d", a, b, c);
    return 0;
}
// output-3 2 2