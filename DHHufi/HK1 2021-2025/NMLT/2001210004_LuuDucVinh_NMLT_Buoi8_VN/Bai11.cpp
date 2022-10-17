/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void chuyen (long T)
{
	long gio, phut, giay;
	gio = 0;
	phut = 0;
	giay = T;
	if (T < 60)
	{
		printf(" %ld giay -> h:m:s la: %ldh:%ldm:%lds\n", T, gio, phut, giay);
	}
	else if (T  >= 60 && T < 3600)
	{
		phut = (giay - giay % 60) / 60;
		giay = giay % 60;
		printf(" %ld giay -> h:m:s la: %ldh:%ldm:%lds\n", T, gio, phut, giay);
	}
	else
	{
		gio = (giay - giay % 3600) / 3600;
		phut = ((giay % 3600) - (giay % 3600) % 60) / 60;
		giay = giay - phut * 60 - gio * 3600;
		printf(" %ld giay -> h:m:s la: %ldh:%ldm:%lds\n", T, gio, phut, giay);
	}
}
int main ()
{
	long T;
	do
	{
	printf("Nhap T: "); scanf_s("%ld", &T);
	} 
	while (T < 0);
	chuyen(T);
	return 0;
	getch ();
}*/