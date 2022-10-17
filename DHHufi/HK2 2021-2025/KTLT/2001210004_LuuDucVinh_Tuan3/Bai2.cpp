//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void NhapM1C (int a[], int &n, int *&p);
//void XuatM1C (int n, int *p);
//void TimMaxA (int n, int *p);
//void XuatDiachi (int a[], int n);
//int main ()
//{
//	int a[MAX], n, *p;
//	NhapM1C(a, n, p);
//	XuatM1C(n, p);
//	TimMaxA(n, p);
//	XuatDiachi(a, n);
//	return 0;
//	getch ();
//}
//void NhapM1C (int a[], int &n, int *&p)
//{
//	p = a;
//	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu a[%d]: ", i); scanf_s("%d", &p[i]);
//	}
//}
//void XuatM1C (int n, int *p)
//{
//	printf("Xuat mang 1 chieu:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", p[i]);
//	}
//	printf("\n");
//}
//void TimMaxA (int n, int *p)
//{
//	int *Max = p;
//	for (int i = 0; i < n; i++)
//	{
//		if (p[i] > *Max)
//		{
//			Max = &p[i];
//		}
//	}
//	printf("Phan tu max cua a: %d\n", *Max);
//	printf("Dia chia cua pt max thong qua con tro: %x\n", Max);
//}
//void XuatDiachi (int a[], int n)
//{
//	int *Max = a;
//	int *Min = a;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > *Max)
//		{
//			Max = &a[i];
//		}
//		if (a[i] < *Min)
//		{
//			Min = &a[i];
//		}
//	}
//	printf("Dia chi cua pt max: %x\n", Max);
//	printf("Dia chi cua pt min: %x\n", Min);
//}