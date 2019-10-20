#include<stdio.h>
#include<stdlib.h>


int main(void) {

	for (int i = 4; i >=0; i--)
	{
		for (int j = 0; j < 9; j++)
		{
			if (j >= i&& j < 9 - i) 
			{
				printf("¡¯");
			}
			else
			{
				printf("¡@");
			}
		}
		printf("\n");
	}
	for (int k = 1; k <= 4 ; k++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (j >= k && j < 9 - k)
			{
				printf("¡¯");
			}
			else
			{
				printf("¡@");
			}
		}printf("\n");
	}

	system("pause");
	return 0;

}