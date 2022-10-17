//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
//#define MAX 100
//struct NhaThuoc
//{
//	char ma[6];
//	char ten[21];
//	char nhasx[21];
//	char dangthuoc[10];
//	float dongia;
//	char congdung[51];
//};
//void menu2();
//void NhapMang (int a[], int &n);
//void XuatMang (int a[], int n);
//int TichMangChanDeQuy (int a[], int n);
//bool Tachso (int n);
//void XuatSoCoChuSo4_DeQuy (int a[], int n);
//void menu3 ();
//float TinhSn_DeQuy (int n);
//float TinhSn_KhuDeQuy (int n);
//int TongCacChuSoChan_DeQuy (int n);
//int TongCacChuSoChan_KhuDeQuy (int n);
//int Fibonacci (int n);
//void menu4 ();
//void docFile (FILE *&f, NhaThuoc dsNT[], int &n);
//void xuatFile (NhaThuoc dsNT[], int n);
//void swap (NhaThuoc &x, NhaThuoc &y);
//void SapXepTangDanTheoMaThuoc (NhaThuoc dsNT[], int n);
//int BinarySearch (NhaThuoc dsNT[], int n, char *x);
//void TimTheoBinary (NhaThuoc dsNT[], int n);
//int BinarySearch2 (NhaThuoc dsNT[], int n);
//void TimTheoBinary2 (NhaThuoc dsNT[], int n);
//int main ()
//{
//	int chon;
//	do
//	{
//	printf("1. Bai 2\n");
//	printf("2. Bai 3\n");
//	printf("3. Bai 4\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			menu2();
//			break;
//		}
//	case 2:
//		{
//			menu3();
//			break;
//		}
//	case 3:
//		{
//			menu4();
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void menu2()
//{
//	int a[MAX], n, chon1;
//	do
//	{
//		printf("1. Nhap mang\n");
//		printf("2. Xuat mang\n");
//		printf("3. Tinh cac tich cac so chan trong mang de quy\n");
//		printf("4. Xuat cac pt co chua chu so 4 trong mang bang de quy\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon1);
//		switch (chon1)
//		{
//		case 1:
//			{
//				NhapMang(a, n);
//				break;
//			}
//		case 2:
//			{
//				XuatMang(a, n);
//				break;
//			}
//		case 3:
//			{
//				printf("Tich cac so chan trong mang la: %d\n", TichMangChanDeQuy(a, n ));
//				break;
//			}
//		case 4:
//			{
//				XuatSoCoChuSo4_DeQuy(a, n);
//				break;
//			}
//		}
//	}
//	while (chon1 != 0);
//}
//void NhapMang (int a[], int &n)
//{
//	printf("Nhap so luong pt mang: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap pt a[%d]: ", i); scanf_s("%d", &a[i]);
//	}
//}
//void XuatMang (int a[], int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//}
//int TichMangChanDeQuy (int a[], int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	if (a[n - 1] % 2 == 0)
//	{
//		return a[n - 1] * TichMangChanDeQuy(a, n - 1);
//	}
//	return TichMangChanDeQuy(a, n - 1);
//}
//bool Tachso (int n)
//{
//	if (n == 0)
//		return false;
//	int s = n % 10;
//	if (s == 4)
//		return true;
//	return Tachso(n / 10);
//}
//void XuatSoCoChuSo4_DeQuy (int a[], int n)
//{
//	if (n == 0)
//		return;
//	if (Tachso(a[n - 1]) == true)
//	{
//		printf("%5d ", a[n - 1]);
//		XuatSoCoChuSo4_DeQuy(a, n - 1);
//	}
//	else
//		XuatSoCoChuSo4_DeQuy(a, n - 1);
//	printf("\n");
//}
//void menu3 ()
//{
//	int n, chon1;
//	do
//	{
//	printf("1.Tinh S(n)\n");
//	printf("2.Tinh tong cac chu so chan cua so nguyen duong N\n");
//	printf("3.Xuat cac so fibonacci le thuoc doan [m, n]\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon1);
//	switch (chon1)
//	{
//	case 1:
//		{
//			printf("Nhap n: "); scanf_s("%d", &n);
//			printf("Tong S(n) bang de quy: %.6f\n", TinhSn_DeQuy(n));
//			printf("Tong S(n) bang khu de quy: %.6f\n", TinhSn_KhuDeQuy(n));
//			break;
//		}
//	case 2:
//		{
//			printf("Nhap n: "); scanf_s("%d", &n);
//			printf("Tong cac chu so chan bang de quy: %d\n", TongCacChuSoChan_DeQuy(n));
//			printf("Tong cac chu so chan bang khu de quy: %d\n", TongCacChuSoChan_KhuDeQuy(n));
//			break;
//		}
//	case 3:
//		{
//			int m;
//			int dem = 0;
//			int i = 0;
//			printf("Nhap [m, n]: "); scanf_s("%d%d", &m, &n);
//			printf("Cac so fibonacci le trong doan [%d, %d]\n", m, n);
//			while (Fibonacci(i) < m)
//			{
//				i++;
//			}
//			for (; Fibonacci(i) <= n; i++)
//			{
//				if (Fibonacci(i) % 2 != 0)
//				{
//					printf("%5d", Fibonacci(i));
//					dem++;
//				}
//			}
//			printf("\n");
//			if (dem == 0)
//			{
//				printf("Khong co so fibonacci nao la so le trong doan [%d, %d]\n", m, n);
//			}
//			break;
//		}
//	}
//	}
//	while (chon1 != 0);
//}
//float TinhSn_DeQuy (int n)
//{
//	if (n == 1)
//		return 0.5;
//	return (n / (float)(n * pow((float)(n + 1), n))) + TinhSn_DeQuy(n - 1);
//}
//float TinhSn_KhuDeQuy (int n)
//{
//	float s = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		s += i / (i * pow((float)(i + 1), i));
//	}
//	return s;
//}
//int TongCacChuSoChan_DeQuy (int n)
//{
//	if (n == 0)
//		return 0;
//	if (n % 2 == 0)
//		return TongCacChuSoChan_DeQuy(n / 10) +  n % 10;
//	return TongCacChuSoChan_DeQuy(n / 10);
//}
//int TongCacChuSoChan_KhuDeQuy (int n)
//{
//	int s = 0;
//	while (n > 0)
//	{
//		if (n % 2 == 0)
//		{
//			s += n % 10;
//		}
//		n = n / 10;
//	}
//	return s;
//}
//int Fibonacci (int n)
//{
//	if (n <= 2)
//		return 1;
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//void menu4 ()
//{
//	FILE *f;
//	NhaThuoc dsNT[MAX];
//	int n, chon1;
//	do
//	{
//	printf("1.Doc File\n");
//	printf("2.Xuat File\n");
//	printf("3.Sap xep tang dan theo ma thuoc\n");
//	printf("4.Tim thuoc co ma thuoc bat dau 3 ky tu T01\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon1);
//	switch (chon1)
//	{
//	case 1:
//		{
//			docFile(f, dsNT, n);
//			break;
//		}
//	case 2:
//		{
//			xuatFile(dsNT, n);
//			break;
//		}
//	case 3:
//		{
//			SapXepTangDanTheoMaThuoc(dsNT, n);
//			break;
//			xuatFile(dsNT, n);
//		}
//	case 4:
//		{
//			TimTheoBinary(dsNT, n);
//			break;
//		}
//	}
//	}
//	while (chon1 != 0);
//}
//void docFile (FILE *&f, NhaThuoc dsNT[], int &n)
//{
//	f = fopen ("nhathuoc.txt", "rt");
//	if (!f)
//	{
//		printf("Loi doc file\n");
//		return;
//	}
//	fscanf(f, "%d", &n);
//	fgetc(f);
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(f, "%[^#]%*c%[^#]%*c%[^#]%*c%[^#]%*c%f#%[^#]%*c\n", &dsNT[i].ma, &dsNT[i].ten, &dsNT[i].nhasx, &dsNT[i].dangthuoc, &dsNT[i].dongia, &dsNT[i].congdung);
//	}
//	fclose(f);
//}
//void xuatFile (NhaThuoc dsNT[], int n)
//{
//	printf("%10s%20s%15s%15s%15s%25s\n", "MA THUOC", "TEN THUOC" , "NHA SX", "DANG THUOC", "DON GIA", "CONG DUNG");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%10s%20s%15s%15s%15.2f%25s\n", dsNT[i].ma, dsNT[i].ten, dsNT[i].nhasx, dsNT[i].dangthuoc, dsNT[i].dongia, dsNT[i].congdung);
//	}
//}
//void swap (NhaThuoc &x, NhaThuoc &y)
//{
//	NhaThuoc temp = x;
//	x = y;
//	y = temp;
//}
//void SapXepTangDanTheoMaThuoc (NhaThuoc dsNT[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(dsNT[i].ma, dsNT[j].ma) > 0)
//			{
//				swap(dsNT[i], dsNT[j]);
//			}
//		}
//	}
//}
//int BinarySearch (NhaThuoc dsNT[], int n, char x[])
//{
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (strcmp(x, "T01") == 0)
//			return mid;
//		else
//		{
//			if (strcmp(x, "T01") < 0) 
//			{
//				left = mid + 1;
//			}
//			else 
//			{
//				right = mid - 1;
//			}
//		}
//	}
//	return -1;
//}
////int BinarySearch2 (NhaThuoc dsNT[], int n)
////{
////	int left = 0, right = n - 1;
////	while (left <= right)
////	{
////		int mid = (left + right) / 2;
////		if (strncmp(dsNT[mid].ma, "T01", 3) == 0)
////		{
////			return mid;
////		}
////		else
////		{
////			if (strncmp(dsNT[mid].ma, "T01", 3) < 0) 
////			{
////				left = mid + 1;
////			}
////			else 
////			{
////				right = mid - 1;
////			}
////		}
////	}
////	return -1;
////}
////void TimTheoBinary2 (NhaThuoc dsNT[], int n)
////{
////	int dem = 0;
////	for (int i = 0; i < n; i++)
////	{
////		int a = BinarySearch2(dsNT, n);
////		if (a != -1)
////		{
////			dem++;
////			printf("Thuoc co ma so bat dau bang T01 la: %s\n", dsNT[i].ten);
////		}
////	}
////	if (dem == 0)
////	{
////		printf("Khong co ma thuoc nao bat dau bang T01\n");
////	}
////}
//void TimTheoBinary (NhaThuoc dsNT[], int n)
//{
//	int dem = 0;
//	char x[4];
//	for (int i = 0; i < n; i++)
//	{
//		strncpy(x, dsNT[i].ma + 0, 3);
//		x[3] = '\0';
//		int a = BinarySearch(dsNT, n, x);
//		if (a != -1)
//		{
//			dem++;
//			printf("Thuoc co ma so bat dau bang T01 la: %s\n", dsNT[i].ten);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("Khong co ma thuoc nao bat dau bang T01\n");
//	}
//}