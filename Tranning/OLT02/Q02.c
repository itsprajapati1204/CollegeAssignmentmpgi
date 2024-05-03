#include<stdio.h>
int* f()
{
	int x=5;
	return &x;
	
}
main(){
	printf("%d",*f());
}

//output- 5
