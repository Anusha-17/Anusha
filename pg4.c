#include<stdio.h>
int i;
int main()
{
	extern int i;
	if(i==0)
		printf("Scope rules\n");
	return 0;
}

