#include<stdio.h>
int main()
{
	int i=13,j=60;
	
	i ^=j;
	j ^=i;
	i ^=j;
	printf("%d %d",i ,j);
	
}
