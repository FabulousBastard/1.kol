#include <stdio.h>

int hhmmss = 0;
int ispravnoVijeme=1;
int sekundiOd12 = 0;
int hh, mm, ss = 0;

int main()
{
	do{
	printf("Unesi vrijeme u obliku HHMMSS: ");
	scanf(" %d", &hhmmss);

	ispravnoVijeme=1;

	if (hhmmss > 235959 || hhmmss < 0)
	{
		ispravnoVijeme = 0;
	}

	hh = (hhmmss/10000);
	mm = (hhmmss%10000)/100;
	ss = hhmmss%100;

	if (mm > 59 || ss > 59)
	{
		ispravnoVijeme = 0;
	}

	}while(ispravnoVijeme == 0);


	printf("%d sat %d minute %d sekundi\n", hh, mm, ss);

	if (hh < 12)
	{
		sekundiOd12 =( hh + 12 )*3600 + mm * 60 + ss;
		printf(" %d", sekundiOd12);
	}
	else{

		sekundiOd12 =( hh - 12 )*3600 + mm * 60 + ss;
		printf(" %d", sekundiOd12);
	}

	scanf("%d", &hhmmss);

	return 0;
}

//1906---43200