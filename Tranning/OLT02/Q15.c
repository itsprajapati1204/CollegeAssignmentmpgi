#include<stdio.h>

void main()
{
	int cls =1;
	switch(cls<<(2+cls))
	{
		default:
			printf("\nclass");
		case 4:
			printf("\nclass 4");
		case 5:
			printf("\nclass 5");
		case 8:
			printf("\nclass 8");
	}
}

//output- class 8
