/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float n;
	long double tong = 1.0;
	do
	{
	printf("Nhap n (n >= 1): "); scanf_s("%f", &n);
	}
	while (n < 1);
	for (int i = 1; i <= n; i++)
	{
		tong = tong + (float)(1.0 / ((2.0 * i) + 1.0));
	}
	printf("Cong thuc tinh tong: 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
	printf("KQ la: %.4lf\n", tong);
	return 0;
	getch ();
}*/