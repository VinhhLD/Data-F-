/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
void lietkesoam (int a[], int n);
int main ()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	lietkesoam(a, n);
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
void lietkesoam (int a[], int n)
{
	printf("\nCac phan tu co gia tri am trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			printf("%d  ", a[i]);
	}
}*/