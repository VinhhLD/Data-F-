#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 50
void Tonguocsole (int n);
int kiemtratoanle (long n);
void tinhtiendien (int sodien);
void Taomangtudong (int a[], int &x);
void Xuatmang (int a[], int x);
void Inboicua3 (int a[], int x);
int Sht(int a);
int Tongsht(int a[], int x);
int Ktrasole(int a[], int x);
int main ()
{
	int a[MAX]; 
	int x;
	int chon;
	do
	{
	printf("\n1.Tinh tong cac uoc le cua so nguyen n");
	printf("\n2.Kiem tra 1 so nguyen n co phai la toan chu so le khong?");
	printf("\n3.Tinh tien dien su dung trong thang");
	printf("\n4.Tao mang ngau nhien");
	printf("\n5.Xuat mang");
	printf("\n6.Xuat cac phan tu le la boi so cua 3");
	printf("\n7.Tinh tong cac phan tu la so hoan thien co trong mang");
	printf("\n8.Kiem tra mang co chua chu so le khong");
	printf("\nChon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int n;
			printf("Nhap so nguyen n: "); scanf_s("%d", &n);
			printf("Cac uoc so le cua %d la: ", n);
			Tonguocsole(n);
			break;
		}
	case 2:
		{
			long n;
			int dem = 0;
			printf("Nhap n: "); scanf_s("%ld", &n);
			if (kiemtratoanle(n) == 0)
			{
				printf("Khong phai toan so le\n");
			}
			else
			{
				printf("Toan la so le\n");
			}
			break;
		}
	case 3:
		{
			int sodien;
			printf("Nhap muc tieu thu dien trong thang: "); scanf_s("%d", &sodien);
			tinhtiendien(sodien);
			break;
		}
	case 4:
		{
			Taomangtudong(a, x);
			break;
		}

	case 5:
		{
			printf("\nXuat mang: ");
			Xuatmang(a, x);
			break;
		}
	case 6:
		{
			Inboicua3(a, x);
			break;
		}
	case 7:
		{
			printf("Tong so hoan thien cua mang = %d\n", Tongsht(a, x));
            break;
		}
	case 8:
		{
			if(Ktrasole(a, x))
                    printf("Mang chua so le\n");
                else 
                    printf("Mang khong chua so le\n");
                break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void Tonguocsole (int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				printf("%d ", i);
				tong = tong + i; 
			}
		}
	}
	printf("\nTong cac uoc so le la: %d\n", tong);
}
int kiemtratoanle (long n)
{
	int dem = 0;
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			return 0;
			break;
		}
	n = n / 10;
	}
	return 1;
}
void tinhtiendien (int sodien)
{
	if (sodien <= 100)
	{
		printf("Tien dien su dung trong thang la: %d$\n", sodien * 5);
	}
	else 
		if (sodien <= 150)
		{
			printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + ((sodien - 100) * 7));
		}
		else
			if (sodien <= 200)
			{
				printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + ((sodien - 150) * 10));
			}
			else 
				if (sodien <= 300)
				{
					printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + (50 * 10) + ((sodien - 200) * 15));
				}
				else
				{
					printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + (50 * 10) + (100 * 15) + ((sodien - 300) * 20));
				}
}
void Taomangtudong (int a[], int &x)
{
	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &x);
	srand((unsigned)time(NULL));
	for (int i = 0; i < x; i++)
	{
		a[i] = rand() % 200 - 100;
	}
}
void Xuatmang (int a[], int x)
{
	for (int i = 0; i < x; i++)
		printf("%d  ", a[i]);
}
void Inboicua3 (int a[], int x)
{
	printf("Cac phan tu la boi so cua 3 trong mang la: ");
	for (int i = 0; i < x; i++)
		if (a[i] % 3 == 0)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void kiemtrasohh (long x)
{
	long tong = 0;
	for(int i = 1; i < x; i++)
	{
		if ( x % i == 0)
			tong = tong + i;
	}
	if (tong == x)
	{
		printf("%d la so hoan hao\n", x);
	}
	else
	{
		printf("%d khong phai la so hoan hao\n", x);
	}
}
int Sht(int a)
{
    int tong = 0;
    for(int i = 1; i < a; i++)
        tong += i;
    if(tong == a)
        return 1;
    else 
        return 0;
}
int Tongsht(int a[], int x)
{
    int tong = 0;
    for(int i = 0; i < x; i++)
        if(Sht(a[i]))
            tong += a[i];
    return tong;
}
int Ktrasole(int a[], int x)
{
	for(int i = 0; i < x; i++)
		if(a[i] % 2 != 0)
			return 1;
		return 0;
}