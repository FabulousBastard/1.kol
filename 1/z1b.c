#include <stdio.h>


void ispis(char array[]){

	if (array == "sredina_fali")
	{
		for (int i = 0; i < 5; ++i)
		{
			if (i == 2)
			{
				printf("  ");
			}
			else if( i%2 == 0){
				printf("A ");
			}
			else{
				printf("B ");
			}
		}
	}
	else if (array == "krajevi_fale")
	{
		for (int i = 0; i < 5; ++i)
		{
			if (i == 0 || i == 4)
			{
				printf("  ");
			}
			else if( i%2 == 0){
				printf("A ");
			}
			else{
				printf("B ");
			}
		}
	}
	else if (array == "ne_fali")
	{
		for (int i = 0; i < 5; ++i)
		{
			if( i%2 == 0){
				printf("B ");
			}
			else{
				printf("A ");
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	
	for (int i = 0; i < 5; ++i)
	{

		switch(i){

			case 0:
			case 4:
				ispis("sredina_fali");
				break;
			case 2:
				ispis("krajevi_fale");
				break;	
			default:
				ispis("ne_fali");
				break;
		}

		printf("\n");
	}

	return 0;
}