#include<stdio.h>
int main()
{
	int n=1;
	
	switch(n)
	{
		case 1:
			printf("Case 1");
		case 2:
			printf("case 2");
		case 3:
			printf("case 3");
		case 1:
			printf("case 1");
		default:
			printf("default");
	}
	
}

//error due to dual case define in this question
