#include<stdio.h>

main()
{
	int i;
	char s[]="hello";
	
	for(i=0;s[i];i++);
		printf("%d",i);
	i=0;
		while(s[i++]);
			printf("%d",i);
}

//output- 56
