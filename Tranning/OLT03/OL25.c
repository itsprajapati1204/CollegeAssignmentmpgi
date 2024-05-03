#include<stdio.h>
int main()
{
	char n='A';
	
	switch(n)
	{
	case 'B':
		printf("Case B\n");
		break;
	case 'C':
		printf("Case C\n");
		break;
	case 'A':
		printf("Case A\n");
		if('A')printf("one");
		break;
	default:
		printf("Default");
	}
	
}
