/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapM2C (int a[][MAXCOL], int &m, int &n);
void xuatM2C (int a[][MAXCOL], int m, int n);
int KTmatranvuong (int m, int n);
int main ()
{
	int a[MAXROW][MAXCOL], m, n;
	nhapM2C(a, m, n);
	printf("Mang 2 chieu vua nhap la: \n");
	xuatM2C(a, m, n);
	if (KTmatranvuong(m, n) == 1)
	{
		printf("Day la ma tran vuong\n");
	}
	else
		printf("Day khong phai la ma tran vuong\n");
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
int KTmatranvuong (int m, int n)
{
	if (m == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/