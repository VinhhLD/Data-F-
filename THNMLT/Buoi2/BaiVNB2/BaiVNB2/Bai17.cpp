/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float n; 
	long double tong = 0;
	do
	{
	printf("Nhap n (n >= 1): "); scanf_s("%f", &n);
	}
	while (n < 1);
	for (int i = 1; i <= n; i++)
	{
		tong = tong + (float)(1.0 / (i * (i + 1.0)));
	}
	printf("Cong thuc tinh tong: 1/1*2 + 1/2*3 + ... + 1/n*(n+1)\n");
	printf("KQ la: %.4lf\n", tong);
	return 0;
	getch ();
}*/