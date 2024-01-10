#include <stdio.h>
#include <math.h>

int broj, znamenka, dekatskiZapis;

int main(int argc, char const *argv[])
{
	
	printf("Upisi broj u zapisu s bazom 6:\n");

	scanf("%d", &broj);

	for(int i = 0; i < 8; i++){

		znamenka = broj % 10;
		if (znamenka >= 6)
		{
			printf("broj nije u zapisu s bazom 6\n");
		}

		dekatskiZapis += znamenka * pow(6, i);
		broj /= 10;
		
		if (broj == 0)
		{
			break;
		}
	}

	printf("dekatski zapis: %d\n", dekatskiZapis);

	scanf("%d", &broj);

	return 0;
}