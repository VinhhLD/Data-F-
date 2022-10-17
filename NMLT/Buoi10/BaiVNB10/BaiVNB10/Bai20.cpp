/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
void themPT (int a[], int &n, int x, int vitri);
int main ()
{
	int a[MAX];
	int n;
	int x, vitri;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nNhap PT x: "); scanf_s("%d", &x);
	printf("\nNhap vi tri: "); scanf_s("%d", &vitri);
	themPT(a, n, x, vitri);
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
void themPT (int a[], int &n, int x, int vitri)
{
	if (vitri < 0)
	{
		for (int i = n - 1; i >= vitri; i--)
		{
			a[i + 1] = a[i];
		}
		a[0] = x;
		n++;
	}
	else if (vitri > n)
	{
		a[n] = x;
		n++;
	}
	else
	{
		for (int i = n - 1; i >= vitri; i--)
		{
			a[i + 1] = a[i];
		}
	a[vitri] = x;
	n++;
	}
}*/