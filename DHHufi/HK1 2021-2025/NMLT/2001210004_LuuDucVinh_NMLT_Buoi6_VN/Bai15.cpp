/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, i;
	long tich = 1;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while (n <= 0);
	for (i = 1; i <= n; i++)
	{
		tich = tich * i;
	}
	printf("Tich tu 1 den %d la: %d\n", n, tich);
	return 0;
	getch ();
}*/