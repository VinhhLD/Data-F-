/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapM2C (int a[][MAXCOL], int &m, int &n);
void xuatM2C (int a[][MAXCOL], int m, int n);
void xuatsochandongk (int a[][MAXCOL], int n, int &k);
void xuatsolecotk(int a[][MAXCOL], int m, int &k);
int main ()
{
	int a[MAXROW][MAXCOL], m, n, k;
	nhapM2C(a, m, n);
	printf("Mang 2 chieu vua nhap la: \n");
	xuatM2C(a, m, n);
	xuatsochandongk(a, n, k);
	xuatsolecotk(a, m, k);
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
void xuatsochandongk (int a[][MAXCOL], int n, int &k)
{
	printf("Nhap dong k: "); scanf_s("%d", &k);
	printf("\nCac so chan o dong %d trong mang la: ", k);
	for (int j = 0; j < n; j++)
	{
		if (a[k][j] % 2 == 0)
		{
			printf("%d " , a[k][j]);
		}
	}
}
void xuatsolecotk(int a[][MAXCOL], int m, int &k)
{
	printf("Nhap cot k: "); scanf_s("%d", &k);
	printf("\nCac so le o cot %d trong mang la: ", k);
	for (int i = 0; i < m; i++)
	{
		if (a[i][k] % 2 != 0)
		{
			printf("%d ", a[i][k]);
		}

	}

}*/