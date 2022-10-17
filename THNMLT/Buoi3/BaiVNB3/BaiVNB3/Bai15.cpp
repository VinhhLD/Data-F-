/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
long kiemtraso (long n)
{
	long socuoi, sokecuoi, chuabien;
	chuabien = n;
	socuoi = chuabien % 10;
	chuabien = chuabien / 10;
	int flag = 1;
	while (chuabien != 0)
	{
		sokecuoi = chuabien % 10;
		chuabien = chuabien / 10;
		if (sokecuoi > socuoi)
		{
			return 0;
			break;
		}
		else
		{
			socuoi = sokecuoi;
			return 1;
		}
	}
	return 1;
}
int main ()
{
	long n;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%ld", &n);
	}
	while (n < 1);
	printf("N co phai so tang dan tu trai sang phai khong?");
	if (kiemtraso(n) == 0)
	{
		printf(" Sai\n");
	}
	else
	{
		printf(" Dung\n");
	}
	return 0;
	getch ();
}*/