#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	for (int i = 0; i < 5; i++)
	{
		for (int k = i; k > 0; k--)
		{
			printf("  ");	
		}
		for (int j = 9 - (i*2); j > 0; j--)
		{
			printf("* ");
		}

			printf("\n");
	}

	return 0;
}