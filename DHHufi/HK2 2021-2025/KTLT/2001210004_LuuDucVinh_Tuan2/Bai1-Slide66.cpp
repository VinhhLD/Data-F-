//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//void docfile (FILE *&f, int a[], int &n);
//void xuatmatran (int a[], int n);
//void ghifile (FILE *&f, int a[], int &n);
//int main ()
//{
//	FILE *f;
//	int a[MAX], n;
//	int chon;
//	do
//	{
//	printf("1. Doc file txt\n");
//	printf("2. Ghi ra file txt\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			docfile(f, a, n);
//			xuatmatran(a, n);
//			break;
//		}
//	case 2:
//		{
//			try
//			{
//				ghifile(f, a, n);
//			}
//			catch (const char* msg)
//			{
//				printf("%s\n", msg);
//			}
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void docfile (FILE *&f, int a[], int &n)
//{
//	f = fopen("mangB1.txt", "rt");
//	if (!f)
//	{
//		printf("Loi doc file.");
//		return;
//	}
//	fscanf(f, "%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(f, "%d", &a[i]);
//	}
//	fclose(f);
//}
//void xuatmatran (int a[], int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//}
//void ghifile (FILE *&f, int a[], int &n)
//{
//	f = fopen("ghimangB1.txt", "wt");
//	if (!f)
//	{
//		printf("Loi tao file.");
//		return;
//	}
//	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "- Khong hop le. Vui long nhap lai!";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nNhap phan tu thu [%d]: ", i); scanf_s("%d", &a[i]);
//	}
//	fprintf(f, "Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		fprintf(f, "%5d", a[i]);
//	}
//	fclose(f);
//}