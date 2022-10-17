/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int kiemtra (long n)
{
	int dem = 0;
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			return 0;
			break;
		}
	n = n / 10;
	}
	return 1;
}
int main ()
{
	long n;
	int dem = 0;
	printf("Nhap n: "); scanf_s("%ld", &n);
	if (kiemtra(n) == 0)
	{
		printf("Toan so chan\n");
	}
	else
	{
		printf("Toan so le\n");
	}
	return 0;
	getch ();
}*/
