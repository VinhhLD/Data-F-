#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int getSum(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	return s;
}
float getAverage (int a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	return s/n;
}

int getMin (int a[], int n)
{
	int Min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (Min > a[i])
			Min = a[i];
	}
	return Min;
}

void Nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuatmang (int a[], int n)
{
	printf("Xuat mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
void swap (int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}
void daonguocmang (int a[], int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		swap(a[i], a[n - 1 - i]);
	}
}
int mangdoixung (int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		return 0;
	}
	return 1;
}
int vitriX (int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return 0;
}
int main ()
{
	int a[100], n, x;
	Nhapmang(a, n);
	Xuatmang(a, n);
	printf("\nPhan tu nho nhat trong mang la: %d\n", getMin(a, n));
	printf("Tong cac phan tu trong mang: %d\n", getSum(a, n));
	printf("Trung binh cong cac phan tu trong mang: %.2f\n", getAverage(a, n));
	{
	daonguocmang(a, n);
	printf("In mang dao nguoc: ");
	Xuatmang(a, n);
	if (mangdoixung(a, n))
	{
		printf("\nMang doi xung");
	}
	else
	{
		printf("\nMang khong doi xung");
	}
	printf("\nNhap gia tri x can tim: "); scanf_s("%d", &x);
	}
	Xuatmang(a, n);
	if (vitriX(a, n, x))
	{
		printf("\nVi tri cua x trong mang la: %d", vitriX(a, n, x));
	}
	else
		printf("\nKhong co x trong mang\n");
	return 0;
	getch ();
}