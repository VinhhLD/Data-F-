/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapmatran (int a[][MAXCOL], int &m, int &n);
void xuatmatran (int a[][MAXCOL], int m, int n);
void MaxChan (int a[][MAXCOL], int m, int n);
int main ()
{
	int a[MAXROW][MAXCOL], m, n;
	nhapmatran (a, m, n);
	printf("Mang 2 chieu: \n");
	xuatmatran (a, m, n);
	MaxChan(a, m, n);
	return 0;
	getch ();
}
void nhapmatran (int a[][MAXCOL], int &m, int &n)
{
	printf("Nhap so dong: "); scanf_s("%d", &m);
	printf("Nhap so cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j); scanf_s("%d", &a[i][j]);
		}
	}
}
void xuatmatran (int a[][MAXCOL], int m, int n)
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
void MaxChan (int a[][MAXCOL], int m, int n)
{
	int max = NULL;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				max = a[i][j];
			}
		}
	}
	if (max != NULL)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] % 2 == 0 && max < a[i][j])
				{
					max = a[i][j];
				}
			}
		}
		printf("Phan tu chan lon nhat la: %d\n", max);
	}
	else
		printf("Khong co phan tu chan\n");
}*/