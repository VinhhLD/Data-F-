#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int TinhA1 (int n);
int TinhA2 (int n);
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	//printf("A(%d): %d\n", n, TinhA1(n));
	printf("A(n + 3) => A(%d): %d\n", n + 3, TinhA2(n + 3));
	return 0;
	getch ();
}
int TinhA1 (int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 0;
	else if (n == 2)
		return -1;
	return 2 * TinhA1(n - 1) - 3 * TinhA1(n - 2) - TinhA1(n - 3);
}
int TinhA2 (int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n == 3)
		return 3;
	return 2 * TinhA2(n - 3 + 2) + TinhA2(n - 3 + 1) - 3 * TinhA2(n - 3);
}