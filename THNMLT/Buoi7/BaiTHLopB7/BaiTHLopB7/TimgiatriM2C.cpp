/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXROW 100
#define MAXCOL 100
void nhapmatran (int a[][MAXCOL], int &m, int &n);
void xuatmatran (int a[][MAXCOL], int m, int n);
void Timvitri (int a[][MAXCOL], int m, int n, int &x);
int main ()
{
	int a[MAXROW][MAXCOL], m, n, x;
	nhapmatran (a, m, n);
	printf("Mang 2 chieu: \n");
	xuatmatran (a, m, n);
	Timvitri(a, m, n, x);
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
void Timvitri (int a[][MAXCOL], int m, int n, int &x)
{
	int flag = 0;
	printf("Nhap gia tri: "); scanf_s("%d", &x);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				printf("Vi tri cua gia tri %d trong mang la: dong %d cot %d\n", x, i, j);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("Khong tim thay gia tri %d trong mang\n", x);
}*/