/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu [%d]: ", i); scanf_s("%d", &a[i]);
	}
}
void xuatmang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
void kiemtrachan (int a[], int n)
{
	printf("Cac phan tu so chan trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d ", a[i]);
		}
	}
}
int main ()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	kiemtrachan(a, n);
	return 0;
	getch ();
}*/

