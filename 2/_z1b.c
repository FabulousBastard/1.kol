#include <stdio.h>

int brojZvjezdica = 7;
int brojRazmaka = 0;

int main(int argc, char const *argv[])
{
	
	for (int y = 0; y < 5; ++y)
	{

		if (y == 0)
		{
			/* code */
		}
		else if (y > 0 && y < 3)
		{
			brojRazmaka++;
			brojZvjezdica -= 2;
		}
		else{

			brojRazmaka--;
			brojZvjezdica += 2;
		}

		for (int razmaci = brojRazmaka; razmaci > 0; --razmaci)
		{
			printf("  ");
		}

		for (int zvjezdice = brojZvjezdica; zvjezdice > 0; --zvjezdice)
		{
			printf("* ", zvjezdice);
		}

		printf("\n");
	}

	return 0;
}