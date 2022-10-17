#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAXROW 100
#define MAXCOL 100
void nhapmatran (int a[][MAXCOL], int &m, int &n);
void xuatmatran (int a[][MAXCOL], int m, int n);
void Nhap_random (int a[][MAXCOL], int m, int n);
int main ()
{
	int a[MAXROW][MAXCOL], m, n;
	nhapmatran (a, m, n);
	printf("Mang 2 chieu: \n");
	xuatmatran (a, m, n);
	Nhap_random(a, m, n);
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
void Nhap_random (int a[][MAXCOL], int m, int n)
{
	srand((unsigned) time (NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 200 - 99;
		}
	}
	printf("Xuat ma tran randon: \n");
	xuatmatran(a, m, n);
}