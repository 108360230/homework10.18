#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int l, b;
	printf("please enter length and breadth");
	scanf_s("%d%d", &l, &b);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (i == 0 || i == l-1 || j == 0 || j == b - 1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}