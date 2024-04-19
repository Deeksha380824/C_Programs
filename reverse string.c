#include<stdio.h>
#include<string.h>
int main()
{
	char x[10];
	int i,l,j,temp;
	printf("enter string");
	gets(x);
	l=strlen(x);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		
	}
	puts(x);
	return 0;
}