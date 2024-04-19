#include<stdio.h>
int main()
{
	int arr[4]={1,2,3,4};
	int i,j;
	for(i=0;i<=4;i++)
	{
	for(j=i+1;j<=4;j++)
	{
		if (arr[i]+arr[j]==5)
		{
			printf("%d%d index whose sum is 5",i,j);
		}
		break;
	}
	}
	}