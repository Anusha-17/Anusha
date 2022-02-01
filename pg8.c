#include<stdio.h>
void main()
{
	static int x;
	if(x++<2)
	{
		main();
		printf("I'm here");
	}
}

