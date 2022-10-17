/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
void nhapMaTranVuong (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
int kiemtraMatranToanle (int a[][MAXSIZE], int n);
int main ()
{
	int a[MAXSIZE][MAXSIZE], n;
	nhapMaTranVuong(a, n);
	printf("Mang tran vuong vua nhap la: \n");
	xuatMaTranVuong(a, n);
	if (kiemtraMatranToanle(a, n) == 1)
	{
		printf("Ma tran vuong toan la so chan\n");
	}
	else
		printf("Ma tran vuong khong toan la so chan\n");
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
int kiemtraMatranToanle (int a[][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}*/