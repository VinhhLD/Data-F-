/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
void xoacacPTam (int a[], int &n);
void xoa_vitri_am (int a[], int &n, int x);
int main ()
{
	int a[MAX];
	int n;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nXuat mang sau khi xoa cac PT am\n");
	xoacacPTam(a, n);
	xuatmang(a, n);
	return 0;
	getch ();
}
void nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu thu [%d]: ", i); scanf_s("%d", &a[i]);
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
void xoa_vitri_am (int a[], int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoacacPTam (int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			xoa_vitri_am(a, n, i);
			i--;
		}
	}
}*/