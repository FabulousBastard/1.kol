#include <stdio.h>

int	kolSlova = 0;
char slovo;
char slova[10];

int main(int argc, char const *argv[])
{	
	printf("Unesi slova\n");

	while(kolSlova <= 10){

		scanf(" %c", &slovo);

		if (slovo >= 97 && slovo <= 122)
		{
			slova[kolSlova] = slovo;
			kolSlova++;
		}
	}

	printf("-----------\n");

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (slova[i] > slova[j]) {
		        
		        int temp = slova[i];
		        slova[i] = slova[j];
		        slova[j] = temp;
		    }
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%c\n", slova[i]);
	}

	scanf(" %c", &slovo);

	return 0;
}