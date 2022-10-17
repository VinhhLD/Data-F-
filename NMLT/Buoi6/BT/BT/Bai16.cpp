/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n;
	long tong = 0;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while (n <= 0);
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
			tong = tong + i;
	}
	printf("Tong cac so chan tu 2 den %d la: %ld\n", n, tong);
	return 0;
	getch ();
}*/