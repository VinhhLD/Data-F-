/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int nhap;
	printf("1.Tong cac so nguyen tu 1 den 100\n2.Tong cac so nguyen tu 1 den n, voi n duoc nhap vao\n3.Xuat cac so chan nam trong [n,m] voi n va m duoc nhap vao\n");
	do
	{
	printf("Chon chuc nang: "); scanf_s("%d", &nhap);
	switch (nhap)
	{
	case 1:
		{
			int tong = 0;
			for (int i = 1; i <= 100; i++)
				tong = tong + i;
				printf("Tong cac so nguyen tu 1 den 100 la: %d\n", tong);
				break;
		}
	case 2:
		{
			int n, tong = 0;
			printf("Nhap n: "); scanf_s("%d", &n);
			for (int i = 1; i <= n; i++)
				tong = tong + i;
				printf("Tong cac so nguyen tu 1 den %d la: %d\n", n, tong);
				break;
		}
	case 3:
		{
			int i, n, m;
			do
			{
			printf("Nhap n (n < m): "); scanf_s("%d", &n);
			printf("Nhap m: "); scanf_s("%d", &m);
			}
			while ( m < n);
			printf("Cac so chan trong (%d,%d):  ", n, m);
			for (i = n; i <= m; i++)
			if (i % 2 == 0)
			printf("%d ", i);
			printf("\n");
			break;
		}
	}
	}
	while (nhap != 0);
	return 0;
	getch ();
}*/
