/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
int tongchuso5hangchuc (int a[], int n);
int main ()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nTong cac gia tri co chu so hang chuc la so 5 trong mang: %d\n", tongchuso5hangchuc(a, n));
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
int tongchuso5hangchuc (int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] / 10  % 10 == 5)
		{
			tong = tong + a[i];
		}
	}
	return tong;
}*/