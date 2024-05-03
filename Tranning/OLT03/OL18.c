#include<stdio.h>
int main()
{
	int expr=2,j=1;
	
	switch(expr)
	{
		case j:
			printf("Case 1");
		case 2:
			printf("case 2");
		default:
			printf("default");
	}
	
}
//	[Error] case label does not reduce to an integer constant

