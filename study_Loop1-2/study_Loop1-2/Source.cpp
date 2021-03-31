#include <stdio.h>

void main()
{
	int i, j, gob;

	for (i = 1; i <= 9; i++)
	{
		printf("%d ´Ü\n\n", i);
		for (j = 1; j <= 9; j++)
		{
			gob = i * j;
			printf("%d * %d = %d \n", i, j, gob);
		}
		printf("\n");
	}

}