#include<stdio.h>
int main()
{
	int num=2;
	
	switch(num+2)
	{
		case 1:
			printf("Case 1");
		case 2:
			printf("case 2");
		case 3:
			printf("case 3");
		default:
			printf("default");
	}
	return 0;
}

