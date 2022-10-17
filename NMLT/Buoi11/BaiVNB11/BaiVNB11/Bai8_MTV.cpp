/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
void nhapMaTranVuong (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
int demPTcucdai (int a[][MAXSIZE], int n);
int main ()
{
	int a[MAXSIZE][MAXSIZE], n;
	nhapMaTranVuong(a, n);
	printf("Mang tran vuong vua nhap la: \n");
	xuatMaTranVuong(a, n);
	printf("So luong phan tu cuc dai trong ma tran a la: %d\n", demPTcucdai(a, n));
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
int demPTcucdai (int a[][MAXSIZE], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i - 1 >= 0)
			{
				if (a[i][j] <= a[i - 1][j])
					continue;
			}
			if (i + 1 < n)
			{
				if (a[i][j] <= a[i + 1][j])
					continue;
			}
			if (j - 1 >= 0)
			{
				if (a[i][j] <= a[i][j - 1])
					continue;
			}
			if (j + 1 < n)
			{
				if (a[i][j] <= a[i][j + 1])
					continue;
			}
			dem++;
		}
	}
	return dem;
}*/