/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
void NhapM2C (int a[][MAX], int &m, int &n);
void XuatM2C (int a[][MAX], int m, int n);
void swap (int &x, int &y);
void Sapxep_DongChanTang_DongLeGiam (int a[][MAX], int m, int n);
void Sapxep_CotChanTang_CotLeGiam (int a[][MAX], int m, int n);
int main ()
{
	int a[MAX][MAX], m, n, chon;
	do
	{
		printf("1.Nhap mang 2 chieu\n");
		printf("2.Xuat mang\n");
		printf("3.Sap xep PT trong ma tran dong chan tang dong le giam\n");
		printf("4.Sap xep PT trong ma tran cot chan tang cot le giam\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				NhapM2C(a, m, n);
				break;
			}
		case 2:
			{
				XuatM2C(a, m, n);
				break;
			}
		case 3:
			{
				Sapxep_DongChanTang_DongLeGiam(a, m, n);
				break;
			}
		case 4:
			{
				Sapxep_CotChanTang_CotLeGiam(a, m, n);
				break;
			}
			}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void NhapM2C (int a[][MAX], int &m, int &n)
{
	printf("Nhap so dong: "); scanf_s("%d", &m);
	printf("Nhap so cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ",i ,j); scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatM2C (int a[][MAX], int m, int n)
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
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Sapxep_DongChanTang_DongLeGiam (int a[][MAX], int m, int n)
{
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 == 0 && a[k][i] > a[k][j])
				{
					swap(a[k][i], a[k][j]);
				}
			}
		}
	}
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 != 0 && a[k][i] < a[k][j])
				{
					swap(a[k][i], a[k][j]);
				}
			}
		}
	}
}
void Sapxep_CotChanTang_CotLeGiam (int a[][MAX], int m, int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (k % 2 == 0 && a[i][k] > a[j][k])
				{
					swap(a[i][k], a[j][k]);
				}
			}
		}
	}
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 != 0 && a[i][k] < a[j][k])
				{
					swap(a[i][k], a[j][k]);
				}
			}
		}
	}
}*/