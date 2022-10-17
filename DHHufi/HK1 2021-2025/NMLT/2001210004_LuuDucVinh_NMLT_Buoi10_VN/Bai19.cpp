/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
void themPTvaodaumang(int a[], int &n, int x);
int main ()
{
	int a[MAX];
	int n;
	int x;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nNhap PT x: "); scanf_s("%d", &x);
	themPTvaodaumang(a, n, x);
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
void themPTvaodaumang(int a[], int &n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
	a[0] = x;
	n++;
}*/