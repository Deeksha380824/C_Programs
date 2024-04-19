#include<stdio.h>
int main()
{
	int age[50],i,n;
	printf("no of n value in array");
	scanf("%d",&n);
	printf("the array element are");
	for(i=0;i<n;i++)
	{
		scanf("%d",& age[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",age[i]);
	}
}