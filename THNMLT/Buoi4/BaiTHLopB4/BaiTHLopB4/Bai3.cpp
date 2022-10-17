/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
long Luythua (int x, int n)
{
	if (n == 0)
		return 1;
	return Luythua(x, n - 1) * x;
}
int main ()
{
	int x, n;
	printf("Nhap x: "); scanf_s("%d", &x);
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("%d luy thua %d la: %ld\n", x, n, Luythua(x, n));
	return 0;
	getch ();
}*/