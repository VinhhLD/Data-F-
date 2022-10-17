/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
void nhapMaTranVuong (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
void xuatcacPTtrendgcheochinh (int a[][MAXSIZE], int n);
int main ()
{
	int a[MAXSIZE][MAXSIZE], n;
	nhapMaTranVuong(a, n);
	printf("Mang tran vuong vua nhap la: \n");
	xuatMaTranVuong(a, n);
	xuatcacPTtrendgcheochinh(a, n);
	return 0;
	getch ();
}
void nhapMaTranVuong (int a[][MAXSIZE], int &n)
{
	printf("Nhap cap cua ma tran: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void xuatMaTranVuong (int a[][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void xuatcacPTtrendgcheochinh (int a[][MAXSIZE], int n)
{
	printf("Cac PT tren duong cheo chinh la: ");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}*/