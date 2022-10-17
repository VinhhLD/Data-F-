#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void NhapMaTran (int a[][MAX], int &m, int &n);
void InMatran (int a[][MAX], int m, int n);
int PTMax_TrenBien (int a[][MAX], int m, int n);
void swap (int &x, int &y);
void chuyenvi (int a[][MAX], int m, int n, int b[][MAX]);
int main ()
{
	int a[MAX][MAX], m, n;
	int b[MAX][MAX];
	NhapMaTran(a, m, n);
	InMatran(a, m, n);
	printf("PT Max tren bien cua ma tran la: %d\n", PTMax_TrenBien(a, m, n));
	chuyenvi(a, m, n, b);
	return 0;
	getch ();
}
void NhapMaTran (int a[][MAX], int &m, int &n)
{
	printf("Nhap so luong dong: "); scanf_s("%d", &m);
	printf("Nhap so luong cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap pt a[%d][%d]: ", i, j); scanf_s("%d", &a[i][j]);
		}
	}
}
void InMatran (int a[][MAX], int m, int n)
{
	printf("Xuat ma tran:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int PTMax_TrenBien (int a[][MAX], int m, int n)
{
	int max = a[0][0];
	for (int j = 0; j < n; j++)
	{
		if (a[0][j] > max)
		{
			max = a[0][j];
		}
		if (a[m - 1][j] > max)
		{
			max = a[m - 1][j];
		}
	}
	for (int i = 1; i < m; i++)
	{
		if (a[i][0] > max)
		{
			max = a[i][0];
		}
		if (a[i][n - 1] > max)
		{
			max = a[i][n - 1];
		}
	}
	return max;
}
void chuyenvi (int a[][MAX], int m, int n, int b[][MAX])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	printf("Ma tran sau khi bien doi dong thanh cot la\n");
	InMatran(b, n, m);
}