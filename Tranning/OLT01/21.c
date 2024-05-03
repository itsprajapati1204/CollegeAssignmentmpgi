// find the output
#include<stdio.h>
main()
{
	int a=10,b=20,c=30;
	int result;
	result =(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("%d",result);
}
//output- 30
