#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a before swap=");
	scanf("%d",&a);
	printf("enter the value of b before swap=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("value of a after swap=%d",a);
	printf("value of b after swap=%d",b);
}