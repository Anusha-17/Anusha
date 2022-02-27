#include<stdio.h>
#include<string.h>
void main()
{	
	char s1[25],s2[25];
	int l;
	printf("Enter first string=");
	scanf("%s",s1);
	printf("Enter second string=");
	scanf("%s",s2);
	strcat(s1,s2);
	l=strlen(s1);
	printf("Concatenate string=%s\n",s1);
	printf("Length of concatenate string=%d",l);
}	
