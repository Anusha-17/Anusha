#include<stdio.h>
void main()
{
	register int x=0;
	if(x<2)
	{
		x++;
		main();
	}
}

