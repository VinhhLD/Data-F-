/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapmatran (int a[][MAXCOL], int &m, int &n);
void xuatmatran (int a[][MAXCOL], int m, int n);
int DemPT_Duong (int a[][MAXCOL], int m, int n);
int Demsolanxuathienx (int a[][MAXCOL], int m, int n, int &x);
int main ()
{
	int a[MAXROW][MAXCOL], m, n, x;
	nhapmatran (a, m, n);
	printf("Mang 2 chieu: \n");
	xuatmatran (a, m, n);
	printf("Dem PT duong trong ma tran: %d\n", DemPT_Duong(a, m, n));
	printf("So lan xuat hien gia tri %d trong mang la: %d\n", x, Demsolanxuathienx(a, m, n, x));
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
int DemPT_Duong (int a[][MAXCOL], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
			}
		}
	}
	return dem;
}
int Demsolanxuathienx (int a[][MAXCOL], int m, int n, int &x)
{
	int dem = 0;
	printf("Nhap gia tri can tim: "); scanf_s("%d", &x);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				dem++;
			}
		}
	}
	return dem;
}*/