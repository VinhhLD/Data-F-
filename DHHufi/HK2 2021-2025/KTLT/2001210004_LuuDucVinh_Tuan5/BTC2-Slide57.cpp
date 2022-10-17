//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void NhapM1C (int a[], int &n);
//void XuatM1C (int a[], int n);
//int kiemtrasnt (long n);
//int Kiemtra_ChuatoanboSNT (int a[], int n);
//void KT_doixung (int a[], int n);
//void KT_Mang (int a[], int n);
//int main ()
//{
//	int a[MAX], n, chon;
//	do
//	{
//	printf("1.Nhap mang 1 chieu\n");
//	printf("2.Xuat mang\n");
//	printf("3.Kiem tra mang co chua toan bo so nguyen to khong\n");
//	printf("4.Kiem tra mang co doi xung hay khong\n");
//	printf("5.Kiem tra mang co tang dan/giam dan/khong tang khong giam\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			NhapM1C(a, n);
//			break;
//		}
//	case 2:
//		{
//			XuatM1C(a, n);
//			break;
//		}
//	case 3:
//		{
//			int flag = Kiemtra_ChuatoanboSNT(a, n);
//			if (flag == 0)
//			{
//				printf("Mang chua toan bo SNT\n");
//			}
//			else
//			{
//				printf("Mang khong hoan toan la SNT\n");
//			}
//			break;
//		}
//	case 4:
//		{
//			KT_doixung(a, n);
//			break;
//		}
//	case 5:
//		{
//			KT_Mang(a, n);
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
//	printf("Nhap so luong phan tu cua mang: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "- Khong hop le. Vui long nhap lai!";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu thu a[%d]: ", i); scanf_s("%d", &a[i]);
//	}
//}
//void XuatM1C (int a[], int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//}
//int kiemtrasnt (long n)
//{
//	int dem = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			dem++;
//		}
//	}
//	if (dem == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int Kiemtra_ChuatoanboSNT (int a[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if(!kiemtrasnt(a[i]))
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//void KT_doixung (int a[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n / 2; i++)
//	{
//		if (a[i] != a[n - 1 - i])
//			dem++;
//	}
//	if (dem == 0)
//	{
//		printf("Mang doi xung\n");
//	}
//	else
//	{
//		printf("Mang KHONG doi xung\n");
//	}
//}
//void KT_Mang (int a[], int n)
//{
//	int tang = 0, giam = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] < a[i + 1])
//		{
//			tang++;
//		}
//		else if (a[i] > a[i + 1])
//		{
//			giam++;
//		}
//		else
//		{
//			printf("Mang ko tang ko giam\n");
//		}
//	}
//	if (tang == n - 1)
//	{
//		printf("Mang tang dan\n");
//	}
//	else if (giam == n - 1)
//	{
//		printf("Mang giam dan\n");
//	}
//}
