/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapmatran (int a[][MAXCOL], int &m, int &n);
void xuatmatran (int a[][MAXCOL], int m, int n);
void Maxdongk (int a[][MAXCOL], int n, int &k);
int main ()
{
	int a[MAXROW][MAXCOL], m, n, k;
	nhapmatran (a, m, n);
	printf("Mang 2 chieu: \n");
	xuatmatran (a, m, n);
	Maxdongk(a, n, k);
	return 0;
	getch ();
}
void nhapmatran (int a[][MAXCOL], int &m, int &n)
{
	printf("Nhap so dong: "); scanf_s("%d", &m);
	printf("Nhap so cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j); scanf_s("%d", &a[i][j]);
		}
	}
}
void xuatmatran (int a[][MAXCOL], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void Maxdongk (int a[][MAXCOL], int n, int &k)
{
	printf("Nhap dong k: "); scanf_s("%d", &k);
	int max = a[k][0];
	for (int j = 0; j < n; j++)
	{
		if (a[k][j] > max)
		{
			max = a[k][j];
		}
	}
	printf("PT co gia tri lon nhat trong mang la: %d\n", max);
}*/