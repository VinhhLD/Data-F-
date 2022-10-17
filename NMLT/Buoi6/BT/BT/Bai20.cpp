/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, i;
	long p, s;
	s = 0;
	p = 0;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while (n <= 0);
	for (i = 1; i <= n; i++)
	{
		p = p + i;
		s = s + p;
	}
	printf("Cong thuc tinh tong: 1 + (1 + 2) + (1 + 2 + 3) + ... + ( 1 + 2 + 3 + ... + n)\n");
	printf("=> Tong tu 1 den %d la: %ld\n", n, s);
	return 0;
	getch ();
}*/