#include <stdio.h>

char znakovi[5] = {'c', 'd', 'e', 'f', 'g'};
char neki_znak = ' ';

int razmaci = 2;

int main()
{

	for (int y = 0; y < 5; ++y)
	{
		razmaci;

		for (int x = 0 - razmaci; x < 5-razmaci; ++x)
		{

			if (x  < 0 || x > 4)
			{
				printf("  ");
			}
			else{
				neki_znak = znakovi[x];
				printf("%c ", neki_znak);
			}
		}
		printf("\n");
		razmaci--;
	}

	return 0;
}