/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 20
void Nhapmang (int a[], int &n);
void Xuatmang (int a[], int n);
void Nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuatmang (int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
int main ()
{
	int a[MAX];
	int n;
	Nhapmang(a, n);
	printf("Mang sau khi nhap: ");
	Xuatmang(a, n);
	return 0;
	getch ();
}*/