#include <stdio.h>
#include <math.h>

int broj;

int pretvoriBazu10(int broj, int baza){

	int znamenka, dekatskiZapis = 0, i = 0;

	for(int i = 0; i < 10; i++){

		znamenka = broj % 10;
		if (znamenka >= baza)
		{
			printf("broj nije u zapisu baze %d\n", baza);
			break;
		}
		else{

			dekatskiZapis += znamenka * pow(baza, i);
			broj /= 10;
		}
		
		if (broj == 0)
		{
	printf("%d\n", dekatskiZapis);
			break;
		}
	}
}

int main()
{
	
	while(1){
		printf("Unesi broj sa najvise 10 znamenki: ");
		scanf("%d", &broj);
		if (broj <= 9999999999)
		{
			break;
		}
	}

	for (int i = 2; i < 10; ++i)
	{
		printf("baza %d: ", i);
		pretvoriBazu10(broj, i);
	}

	scanf("%d", &broj);

	return 0;
}