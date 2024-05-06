#include<stdio.h>
int main()
{
	int arr[]={1,3,5,7,9};
	int i;
	int min=0;
	int max=0;
	for(i=0;i<4;i++)
	{
	min=min+arr[i];	
	max=min+arr[4]-arr[0];
	printf("no of min:%d\n",min);
	printf("no of max:%d\n",max);
}
	return 0;
}


