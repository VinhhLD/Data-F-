/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapM2C (int a[][MAXCOL], int &m, int &n);
void xuatM2C (int a[][MAXCOL], int m, int n);
void xuatsochan (int a[][MAXCOL], int m, int n);
void xuatsole (int a[][MAXCOL], int m, int n);
int main ()
{
	int a[MAXROW][MAXCOL], m, n;
	nhapM2C(a, m, n);
	printf("Mang 2 chieu vua nhap la: \n");
	xuatM2C(a, m, n);
	xuatsochan(a, m, n);
	xuatsole(a, m, n);
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
void xuatsochan (int a[][MAXCOL], int m, int n)
{
	printf("Cac so chan trong mang la: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}
void xuatsole (int a[][MAXCOL], int m, int n)
{
	printf("\nCac so le trong mang la: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}*/