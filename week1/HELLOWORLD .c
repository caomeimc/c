#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	printf("-1,0,1\n");
	int a;
	scanf("%d", &a);
	while (1)
	{
		if (a == -1)
			break;
		else if (a == 0)
		{
			printf("helloworld\n");
			scanf("%d", &a);
		}
		else if (a == 1)
		{
			printf("HELLOWORLD\n");
			scanf("%d", &a);
		}
		else if (a != 1, a != 0, a != -1)
		{
			printf("-1,0,1\n");
			scanf("%d", &a);
		}
	}
	return 0;

}