/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
int kiemtrascp (int a[], int n);
int timchinhphuongdautien (int a[], int n);
int main ()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	int ketqua = timchinhphuongdautien(a, n);
	printf("\nSo chinh phuong dau tien co trong mang la: %d", ketqua);
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
int kiemtrascp (int n)
{
	if (sqrt(float(n)) == (int)sqrt(float(n)))
		return 1;
	else
		return 0;
}
int timchinhphuongdautien (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtrascp(a[i]) == 1)
			return a[i];
	}
	return -1;
}*/
