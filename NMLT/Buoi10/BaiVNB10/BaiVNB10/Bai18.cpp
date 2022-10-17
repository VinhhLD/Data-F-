/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n);
void xuatmang (int a[], int n);
int kiemtrachanle (int a [], int n);
void sapxepchantanglegiam (int a[], int n);
int main ()
{
	int a[MAX];
	int n;
	nhapmang(a, n);
	xuatmang(a, n);
	sapxepchantanglegiam(a, n);
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
int kiemtrachanle (int a [], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			return 1;
	}
	return 0;
}
void sapxepchantanglegiam (int a[], int n)
{
	int temp = 0;
	int t = kiemtrachanle(a, n);
	if (t)
	{
	printf("\nMang le giam dan: ");
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
	}
	else if (!t)
	{
	printf("\nMang chan tang dan: ");
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
	}
}*/