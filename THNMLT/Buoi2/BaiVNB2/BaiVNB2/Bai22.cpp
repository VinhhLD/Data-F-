/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int n;
	float x, s;
	s = 0;
	printf("Nhap x: "); scanf_s("%f", &x);
	printf("Nhap n: "); scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)(pow(-1.0, i) * pow(x, i));
	}
	printf("Cong thuc tinh S(%.0f,%d): -x + x^2 - x^3 + ... + (-1)^n * x^n\n", x, n);
	printf("KQ la: %.2f\n", s);
	return 0;
	getch ();
}*/
