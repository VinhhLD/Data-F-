#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int TinhS1 (int n);
float TinhS2 (int n);
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Tong so S1 la: %d\n", TinhS1(n));
	printf("Tinh tong S2 la: %.2f\n", TinhS2(n));
	return 0;
	getch ();
}
int TinhS1 (int n)
{
	if (n <= 1)
		return 1;
	return n + TinhS1(n - 1);
}
float TinhS2 (int n)
{
	if (n == 1)
		return 1;
	return float(1) / n + TinhS2(n - 1);
}
int TinhS3 (int n)
{
	if (n == 1)
		return 1 * 2;
	return n * (n + 1) + TinhS3(n - 1);
}

