/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
void nhapMaTranVuong (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
void tongchan_tgtren_duoi (int a[][MAXSIZE], int n);
int main ()
{
	int a[MAXSIZE][MAXSIZE], n;
	nhapMaTranVuong(a, n);
	printf("Mang tran vuong vua nhap la: \n");
	xuatMaTranVuong(a, n);
	tongchan_tgtren_duoi(a, n);
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
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}
void tongchan_tgtren_duoi (int a[][MAXSIZE], int n)
{
	int tongtren = 0;
	int tongduoi = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j && a[i][j] % 2 == 0)
			{
				tongtren = tongtren + a[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j && a[i][j] % 2 == 0)
			{
				tongduoi = tongduoi + a[i][j];
			}
		}
	}
	int tong = tongtren + tongduoi;
	printf("Tong cac PT chan thuoc tam giac tren va tam giac duoi la: %d\n", tong);
}*/