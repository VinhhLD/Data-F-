/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
int demduongchiahetcho3 (int a[], int n);
int main ()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nSo luong cac gia tri duong chia het cho 3 trong mang la: %d\n", demduongchiahetcho3(a, n));
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
int demduongchiahetcho3 (int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0 && a[i] >= 0)
		{
			dem++;
		}
	}
	return dem;
}*/