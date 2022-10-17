/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
long doixung (long n)
{
	long a, b, d, e;
	a = n / 10000;
	b = (n / 1000) % 10;
	d = (n / 10) % 10;
	e = n % 10;
	if (a == e && b == d)
		return 1;
	return 0;
}
int main ()
{
	long n;
	do
	{
	printf("Nhap n (n gom 5 chu so): "); scanf_s("%ld", &n);
	}
	while (n < 10000 && n > 99999);
	if (doixung(n) == 1)
	{
		printf("%ld la so doi xung\n", n);
	}
	else
	{
		printf("%ld khong phai la so doi xung\n", n);
	}
	return 0;
	getch ();
}*/