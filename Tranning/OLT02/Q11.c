#include<stdio.h>

 void main()
{
		float expr=2.0;
		switch(expr)
		{
			case 1:printf("one");
			case 2:printf("two");
			case 3:printf("default");
		}
}

//output-  switch can't take flaot value -compile time error
