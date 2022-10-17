/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int tonguoc (int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
		s = s + i;
		return s;
}
int nhuan (int nam)
{
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int songay (int thang, int nam)
{
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			return 31;
			break;
		}
	case 4: case 6: case 9: case 11:
		{
			return 30;
			break;
		}
	case 2:
		{
			if (nhuan(nam))
			{
				return 29;
			}
			return 28;
		}
	}
	return 1;
}
void swap (int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int USCLN (int a, int b)
{
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
int BSCNN (int a, int b)
{
	return a * b / USCLN(a, b);
}
int ktNle (int n)
{
	while (n > 0)
	{
		if (n % 10 % 2 == 0)
			return 0;
		n = n / 10;
	}
	return 1;
}

int main ()
{
	int chon;
	printf("1.Tinh tong cac uoc so nguyen\n2.Tim so ngay cua 1 thang khi biet nam\n3.Doi cho 2 so thuc x, y\n4.Tim BCNN 2 so nguyen a, b\n5.Kiem tra so nguyen duong n co cac chu so toan le hay khong\n");
	printf("Chon: "); scanf_s("%d", &chon);
	switch(chon)
	{
	case 1:
		{
			int n;
			printf("Nhap n: "); scanf_s("%d", &n);
			printf("Tong cac uoc so nguyen la: %d\n", tonguoc(n));
			break;
		}
	case 2:
		{
			int thang, nam;
			printf("Nhap thang: "); scanf_s("%d", &thang);
			printf("Nhap nam: "); scanf_s("%d", &nam);
			if (nhuan(nam) == 1)
			{
				printf("%d la nam nhuan\n", nam);
			}
			else
			{
				printf("%d khong phai la nam nhuan\n", nam);
			}
			printf("So ngay trong thang %d nam %d la: %d\n", thang, nam, songay(thang, nam));
			break;
		}
	case 3:
		{
			int x, y;
			printf("Nhap X: "); scanf_s("%d", &x);
			printf("Nhap Y: "); scanf_s("%d", &y);
			swap(x,y);
			printf("X = %d, Y = %d", x, y);
			break;
		}
	case 4:
		{
			int a, b;
			printf("Nhap a: "); scanf_s("%d", &a);
			printf("Nhap b: "); scanf_s("%d", &b);
			printf("BSCNN cua %d va %d la: %d\n", a, b, BSCNN(a, b));
			break;
		}
	case 5:
		{
			int n;
			printf("Nhap n: "); scanf_s("%d", &n);
			if (ktNle(n) == 0)
			{
				printf("Khong phai\n");
			}
			else
			{
				printf("Toan so le\n");
			}
			break;
		}
	}
	return 0;
	getch ();
}*/