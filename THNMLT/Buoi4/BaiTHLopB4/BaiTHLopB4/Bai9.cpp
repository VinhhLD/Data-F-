/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
double giaithua (int n)
{
	if (n == 1)
		return 1;
	return n * giaithua(n - 1);
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Giai thua n = %.0lf\n", giaithua(n));
	return 0;
	getch ();
}*/