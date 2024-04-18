#include<stdio.h>
int main()
{
    int num,i,a;
    printf("enter number");
    scanf("%d",&num);
    for( i=1;i<10;i++)
	{
		a=num*i;
		printf("%d*%d=%d\n",num,i,a);
	}
	
}