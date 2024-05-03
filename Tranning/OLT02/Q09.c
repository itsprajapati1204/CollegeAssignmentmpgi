#include<stdio.h>

 void main() 
{
	int i=1;
		loop:
			printf("%d",i++);
		if(i==5)
			break;
			goto jump;
			
}

//output- complie time error
