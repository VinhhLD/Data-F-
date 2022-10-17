#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
#define MAX 100
void hinhtrutron (float r, float h);
int demsoluong (int dem);
void tinhdiemTB_xephang (float gk, float ck);
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
void xoaPTchan (int a[], int &n);
void vi_tri_chan (int a[], int &n, int x);
void hinhtrutron (float r, float h)
{
	float Sday, Sxq, Vtru;
	Sday = (float)2 * (float)PI * r * r;
	Sxq = (float)2 * (float)PI * r * h;
	Vtru = (float)PI * r * r * h;
	printf("\nDien tich day hinh tru tron la: %.2f", Sday);
	printf("\nDien tich xung quanh hinh tru tron la: %.2f", Sxq);
	printf("\nThe tich hinh tru tron la: %.2f\n", Vtru);
}
int demsoluong (int dem)
{
	
	if(dem % 2 != 0)
		return 1;
	return 0;
}
void tinhdiemTB_xephang (float gk, float ck)
{
	float TB;
	TB = (gk + ck) / 2;
	printf("Diem TB: %.2f", TB);
	if (TB >= 9.0)
	{
		printf("\tHang A\n");
	}
	else if (TB >= 7.0 && TB < 9.0)
	{
		printf("\tHang B\n");
	}
	else if (TB >= 5.0 && TB < 7.0)
	{
		printf("\tHang C\n");
	}
	else
		printf("\tHang F\n");
}
void nhapmang (int a[], int &n)
{
	printf("Nhap so PT cua mang: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap PT thu [%d]: ", i); scanf_s("%d", &a[i]);
	}
}
void xuatmang (int a[], int n)
{
	printf("Xuat mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
void vi_tri_chan (int a[], int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoaPTchan (int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			vi_tri_chan(a, n, i);
			i--;
		}
	}
}
int main ()
{
	int a[MAX], n;
	int chon;
	do
	{
	printf("\n1.Tinh dien tich day, dien tich xung quanh va the tinh cua hinh tru");
	printf("\n2.Dem so luong cac chu so");
	printf("\n3.Tinh diem trung binh va xet xep hang cua hoc vien");
	printf("\n4.Nhap va xuat mang");
	printf("\n5.Xoa cac phan tu chan");
	printf("\nChon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			float r, h;
			printf("\nNhap ban kinh hinh tru tron: "); scanf_s("%f", &r);
			printf("Nhap chieu cao hinh tru tron: "); scanf_s("%f", &h);
			hinhtrutron(r, h);
			break;
		}
	case 2:
		{
			int n;
			printf("\nNhap n: "); scanf_s("%d", &n);
			int a = n;
			int dem = 0;
			while (n > 0)
			{
				n = n / 10;
				dem++;
			}
			if (demsoluong(dem) == 1)
			{
				printf("\n%d co %d chu so nen dung\n", a, dem);
			}
			else
			{
				printf("\n%d co %d chu so nen sai\n", a, dem);
			}
			break;
		}
	case 3:
		{
			float gk, ck;
			printf("\nNhap diem thi giua ki: "); scanf_s("%f", &gk);
			printf("Nhap diem thi cuoi ki: "); scanf_s("%f", &ck);
			tinhdiemTB_xephang(gk, ck);
			break;

		}
	case 4:
		{
			nhapmang(a, n);
			xuatmang(a, n);
			break;
		}
	case 5:
		{
			xoaPTchan(a, n);
			xuatmang(a, n);
			break;
		}



	}
	}
	while (chon != 0);
	return 0;
	getch();
}
