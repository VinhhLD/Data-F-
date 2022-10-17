/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int n, i;
	long tong = 0;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while (n <= 0);
	for (i = 1; i <= n; i++)
		tong = tong + i * i;
	printf("Cong thuc tinh tong: 1^2 + 2^2 + 3^2 + ... + %d^2\n", n);
	printf("=> Tong tu 1 den %d la: %ld\n", n, tong);
	return 0;
	getch ();
}*/