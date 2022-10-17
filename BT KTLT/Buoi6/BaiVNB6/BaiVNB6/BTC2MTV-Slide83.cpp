/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAXROW 100
#define MAXCOL 100
void NhapMTV (int a[][MAXCOL], int &n);
void XuatMTV (int a[][MAXCOL], int n);
int TongCheoChinh (int a[][MAXCOL], int n);
int TongCheoPhu (int a[][MAXCOL], int n);
int tong_PT_PhiaTren_DgCheoChinh (int a[][MAXCOL], int n);
int tong_PT_PhiaTren_DgCheoPhu (int a[][MAXCOL], int n);
int main ()
{
	int a[MAXROW][MAXCOL], n, chon;
	do
	{
	printf("1.Nhap MTV\n");
	printf("2.Xuat ma tran\n");
	printf("3.Tinh tong cac PT nam tren duong cheo chinh\n");
	printf("4.Tinh tong cac PT nam tren duong cheo phu\n");
	printf("5.Tinh tong cac PT nam phia tren duong cheo chinh\n");
	printf("6.Tinh tong cac PT nam phia duoi duong cheo phu\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			NhapMTV(a, n);
			break;
		}
	case 2:
		{
			XuatMTV(a, n);
			break;
		}
	case 3:
		{
			printf("Tong cac PT nam tren duong cheo chinh trong ma tran vuong la: %d\n", TongCheoChinh(a, n));
			break;
		}
	case 4:
		{
			printf("Tong cac PT nam tren duong cheo phu trong ma tran vuong la: %d\n", TongCheoPhu(a, n));
			break;
		}
	case 5:
		{
			printf("Tong cac PT nam phia tren duong cheo chinh la: %d\n", tong_PT_PhiaTren_DgCheoChinh(a, n));
			break;
		}
	case 6:
		{
			printf("Tong cac PT nam phia tren duong cheo phu la: %d\n", tong_PT_PhiaTren_DgCheoPhu(a, n));
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void NhapMTV (int a[][MAXCOL], int &n)
{
	printf("Nhap cap cua ma tran vuong: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j); scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMTV (int a[][MAXCOL], int n)
{
	printf("Xuat ma tran:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int TongCheoChinh (int a[][MAXCOL], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}
int TongCheoPhu (int a[][MAXCOL], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) == (n - 1))
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}
int tong_PT_PhiaTren_DgCheoChinh (int a[][MAXCOL], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}
int tong_PT_PhiaTren_DgCheoPhu (int a[][MAXCOL], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) < (n - 1))
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}*/