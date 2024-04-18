#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a before swap=");
	scanf("%d",a);
	printf ("enter the value of b before swap=");
	scanf("%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a after swap is =%d",a);
	printf("value of b after swap is =%d",b);
	return 0;
}