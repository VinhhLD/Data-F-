//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void NhapM1C (int a[], int &n);
//void XuatM1C (int a[], int n);
//void xoaPTtaivitriK (int a[], int &n, int &k);
//void themPTtaivitriK (int a[], int &n, int &x, int &vitri);
//int main ()
//{
//	int a[MAX], n;
//	int chon;
//	do
//	{
//	printf("\n1. Nhap mang 1 chieu\n");
//	printf("2. Xuat mang\n");
//	printf("3. Xoa phan tu tai vi tri k\n");
//	printf("4. Them phan tu tai vi tri k\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			try
//			{
//				NhapM1C(a, n);
//			}
//			catch (const char* msg)
//			{
//				printf("- %s!\n", msg);
//			}
//			break;
//		}
//	case 2:
//		{
//			XuatM1C(a, n);
//			break;
//		}
//	case 3:
//		{
//			int k;
//			try
//			{
//				xoaPTtaivitriK(a, n, k);
//			}
//			catch (const char* msg)
//			{
//				printf("- %s!\n", msg);
//			}
//			break;
//		}
//	case 4:
//		{
//			int x;
//			int vitri;
//			try
//			{
//				themPTtaivitriK(a, n, x, vitri);
//			}
//			catch (const char* msg)
//			{
//				printf("- %s!\n", msg);
//			}
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void NhapM1C (int a[], int &n)
//{
//	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "- Khong hop le. Vui long nhap lai!";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu a[%d]: ", i); scanf_s("%d", &a[i]);
//	}
//}
//void XuatM1C (int a[], int n)
//{
//	printf("Xuat mang 1 chieu:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//}
//void xoaPTtaivitriK (int a[], int &n, int &k)
//{
//	printf("Nhap vi tri phan tu muon xoa: "); scanf_s("%d", &k);
//	if (k < 0 || k >= n)
//	{
//		throw "Vi tri khong hop le";
//	}
//	else
//	{
//		for (int i = k; i < n; i++)
//		{
//			a[i] = a[i + 1];
//		}
//		n--;
//	}
//}
//void themPTtaivitriK (int a[], int &n, int &x, int &vitri)
//{
//	printf("Nhap PT x: "); scanf_s("%d", &x);
//	printf("Nhap vi tri muon them: "); scanf_s("%d", &vitri);
//	if (vitri < 0)
//	{
//		throw "Vi tri khong hop le";
//	}
//	else if (vitri > n)
//	{
//		a[n] = x;
//		n++;
//	}
//	else
//	{
//		for (int i = n - 1; i >= vitri; i--)
//		{
//			a[i + 1] = a[i];
//		}
//		a[vitri] = x;
//		n++;
//	}
//}
