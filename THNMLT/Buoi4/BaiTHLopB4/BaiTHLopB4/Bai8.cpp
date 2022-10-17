/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
double tinh (int n)
{
	double tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong = sqrt(2.0 + tong);
	}
	return tong;
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Can bac 2 = %f\n", tinh(n));
	return 0;
	getch ();
}*/