#include <stdio.h>

int main(void)
{
	
	
	int i;
	int j;
	
	
	for (i = 1; i < 10; i++)
	{
		if (i==5) continue;
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		

	}
	return 0;
}