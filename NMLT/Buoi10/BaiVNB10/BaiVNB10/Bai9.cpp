/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (float a[], int &n);
void xuatmang (float a[], int n);
void lietketrongdoanxy (float a[], int n, float x, float y);
int main ()
{
	float a[MAX];
	int n;
	float x, y;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nNhap doan [x,y]: "); scanf_s("%f%f", &x, &y);
	printf("\nCac so trong mang thuoc doan [%.2f , %.2f] la: ", x, y);
	lietketrongdoanxy(a, n, x, y);
	return 0;
	getch ();
}
void nhapmang (float a[], int &n)
{
	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu thu [%d]: ", i); scanf_s("%f", &a[i]);
	}
}
void xuatmang (float a[], int n)
{
	printf("Xuat mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%.2f  ", a[i]);
	}
}
void lietketrongdoanxy (float a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
	{
		if (x <= a[i] && a[i] <= y)
		{
			printf("%.2f  ", a[i]);
		}
	}
}*/