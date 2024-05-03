#include<stdio.h>
#include<stdlib.h>
int main()
{
	static int i=2;
	printf("hello main !!\n");
	if(i<3)
		main(i=5);
}
