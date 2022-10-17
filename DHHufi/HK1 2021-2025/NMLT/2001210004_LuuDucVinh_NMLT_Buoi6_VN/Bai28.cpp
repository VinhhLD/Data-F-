/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float giovao, giora, tiengio1, tiengio2, tiengio3;
	printf("\t----KARAOKE IDOL----\a\n--------------------------------");
	printf("\n|Gio hoat dong: 10h - 24h      |\n");
	printf("|Don gia: 10h - 17h: 20.000/gio|\n");
	printf("|\t  17h - 24h: 45.000/gio|\n");
	printf("--------------------------------\n");
	do
	{
	printf("\nGio vao: "); scanf_s("%f", &giovao);
	printf("Gio ra: "); scanf_s("%f", &giora);
	}
	while (giovao < 10.0 || giora > 24.0);
	tiengio1 = (giora - giovao) * 20;
	tiengio2 = (giora - giovao) * 45;
	tiengio3 = (17 - giovao) * 20 + (giora - 17) * 45;
	printf("Gio hat: %.2fh", giora - giovao);
	if (giovao >= giora)
	{
		printf("Vui long nhap gio vao < gio ra\n");
	}
	else if (giora <= 17)
	{
		printf("\tTien gio: %.3f\n", tiengio1); 
	}
	else
	{
		if (giovao <=17)
		{
			printf("\tTien gio: %.3f\n", tiengio3);
		}
		else 
		{
			printf("\tTien gio: %.3f\n", tiengio2);
		}
	}
	return 0;
	getch ();
}*/