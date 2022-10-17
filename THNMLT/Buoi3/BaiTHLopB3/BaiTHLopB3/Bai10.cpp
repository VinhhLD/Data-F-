#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	long n;
	int chon;
	do
	{
	printf("\n1.Xuat so dau tien cua n\n2.Tinh tong cac chu so n\n3.Tim chu so lon nhat trong n\n4.Dem so chu so cua n\n5.Xem n co phai la so khac nhau doi mot khong\n");
	printf("Chon: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
		int a;
		printf("\nNhap n: "); scanf_s("%ld", &n);
		while (n > 0)
		{
			a = n;
			n = n / 10;
		}
		printf("So dau tien cua n la: %d\n", a);
		break;
		}
	case 2:
		{
		long tong = 0;
		int a = n;
		printf("Nhap n: "); scanf_s("%ld", &n);
		while (n > 0)
		{
			tong = tong + n % 10;
			n = n / 10;
		}
		printf("Tong cac chu so trong %ld la: %ld\n", a, tong);
		break;
		}
	case 3:
		{
		int max = 0;
		printf("\nNhap n: "); scanf_s("%ld", &n);
		int a = n;
		while (n > 0)
		{
		max = max > n % 10 ? max : n % 10;
		n = n / 10;
		}
		printf("So lon nhat trong %ld la: %d\n", a, max);
		break;
		}
	case 4:
		{
		int dem;
		dem = 0;
		printf("\nNhap n: "); scanf_s("%ld", &n);
		int a = n;
		while (n > 0)
		{
			n = n / 10;
			dem++;
		}
		printf("So luong chu so cua %ld la: %d\n", a, dem);
		break;
		}
	case 5:		{		printf("\nNhap n:"); scanf_s("%ld", &n);		int kt = 1;		int m, a;		while(n > 0)		{			m = n % 10;			a = n / 10;			while(a > 0)			{				if(m == a % 10)				{					kt = 0;					break;				}				a = a / 10;			}			n = n / 10;		}		if(kt)			printf("\n Khac nhau tung doi mot\n");		else			printf("\n Khong khac nhau tung doi mot\n");		break;		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}