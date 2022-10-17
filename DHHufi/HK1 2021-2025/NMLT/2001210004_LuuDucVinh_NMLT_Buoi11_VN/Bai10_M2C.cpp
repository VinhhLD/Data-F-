/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapM2C (int a[][MAXCOL], int &m, int &n);
void xuatM2C (int a[][MAXCOL], int m, int n);
int MaxdongK (int a[][MAXCOL], int &k, int n);
int main ()
{
	int a[MAXROW][MAXCOL], m, n, k;
	nhapM2C(a, m, n);
	printf("Mang 2 chieu vua nhap la: \n");
	xuatM2C(a, m, n);
	printf("PT lon nhat trong dong %d la: %d\n", k, MaxdongK(a, k, n));
	return 0;
	getch ();
}
void nhapM2C (int a[][MAXCOL], int &m, int &n)
{
	printf("Nhap so dong: "); scanf_s("%d", &m);
	printf("Nhap so cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void xuatM2C (int a[][MAXCOL], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int MaxdongK (int a[][MAXCOL], int &k, int n)
{
	printf("Nhap dong K: "); scanf_s("%d", &k);
	int max = a[0][0];
	for (int j = 0; j < n; j++)
	{
		if (max < a[k][j])
		{
			max = a[k][j];
		}
	}
	return max;
}*/