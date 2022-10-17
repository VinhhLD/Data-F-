/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int n, i;
	float x, s;
	s = 0;
	printf("Nhap x: "); scanf_s("%f", &x);
	printf("Nhap n: "); scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + pow(x,i);
	}
	printf("Cong thuc tinh S(%.0f,%d): x + x^2 + x^3 + ... + x^n\n", x, n);
	printf("KQ la: %.2f\n", s);
	return 0;
	getch ();
}*/
