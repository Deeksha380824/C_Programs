#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character =");
	scanf("%c",&ch);
	switch (ch)	{
		case 'A'...'Z':
			printf("%c is in uppercase",ch);
			break;
			case'a'...'z':
			printf("%c is in lowercase",ch);
			break;
			default:
				printf("enter an alphabet");
	}
	return 0;
}