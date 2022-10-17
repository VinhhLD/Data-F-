/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
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
		tong = tong + (i * (i + 1));
	printf("Cong thuc tinh tong: 1 * 2 + 2 * 3 + 3 * 4 + 4 * 5 + ... + n * (n + 1)\n");
	printf("=> Tong tu 1 den %d la: %ld\n", n, tong);
	return 0;
	getch ();
}*/