//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void nhapmang (int a[], int &n);
//void xuatmang (int a[], int n);
//int dang2k (int a[], int n);
//void vitriPT2k (int a[], int n, int vitri);
//void duaPT2klendau (int a[], int n);
//int main ()
//{
//	int a[MAX];
//	int n;
//	nhapmang(a, n);
//	xuatmang(a, n);
//	printf("\nMang sau khi dua PT co gia tri 2^k len dau mang\n");
//	duaPT2klendau(a, n);
//	xuatmang(a, n);
//	return 0;
//	getch ();
//}
//void nhapmang (int a[], int &n)
//{
//	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu thu [%d]: ", i); scanf_s("%d", &a[i]);
//	}
//}
//void xuatmang (int a[], int n)
//{
//	printf("Xuat mang: ");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//}
//int dang2k (int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			while (a[i] >= 2)
//			{
//				a[i] = a[i] / 2;
//			}
//			return 1;
//		}
//		else
//			return 0;
//	}
//	return 1;
//}
//void vitriPT2k (int a[], int n, int vitri)
//{
//	for (int i = vitri; i > 0; i--)
//	{
//		a[i] = a[i - 1];
//	}
//}
//void duaPT2klendau (int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dang2k(a, n) == 1)
//		{
//			int tam = a[i];
//			vitriPT2k(a, n, i);
//			a[0] = tam;
//		}
//	}
//}