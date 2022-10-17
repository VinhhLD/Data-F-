//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//void TaoMangNgauNhien_PTlonhonbang15 (int *&a, int &n);
//void TaoMangNgauNhienSoChan (int *&a, int &n);
//void XuatM1C (int *a, int n);
//int Linear_Search(int *a, int n, int x);
//void swap(int &x, int &y);
//void TangDan_InterchangeSort(int *a, int n);
//void GiamDan_InterchangeSort(int *a, int n);
//int Binary_Search (int *a, int n, int x);
//void Tangdan_Selection_Sort (int *a, int n);
//void Giamdan_Selection_Sort (int *a, int n);
//void Tangdan_Quick_Sort(int *a, int left, int right);
//void Giamdan_Quick_Sort(int *a, int left, int right);
//void LietKeSoNguyenTo_NhohonN (int *a, int n, int &x);
//int TimChuSoDauLe (int n);
//int kiemtrasnt (long n);
//int TinhTongCacChuSoDauLe (int *a, int n);
//int DemSoLanXuatHien (int *a, int n, int x);
//void LietKeSoLanXuatHien_CuaCacPT (int *a, int n);
//void SoLeDauMang_SoChanCuoiMang (int *a, int n);
//void SoLeDauMang_SoChanCuoiMang (int *a, int n);
//void Sapxep_ChanTang_LeGiam (int *a, int n);
//void TimMinThuHai (int *a, int n);
//void Sapxep_ChanTangDan_ConLaiGiuNguyenVitri (int *a, int n);
//int main ()
//{
//	int *a, n, chon;
//	do
//	{
//	printf("1.Tao mang 1 chieu ngau nhien co so pt >= 15\n");
//	printf("2.Tao mang chua toan so chan\n");
//	printf("3.Xuat mang\n");
//	printf("4.Tim kiem x trong mang theo giai thuat Linear Search\n");
//	printf("5.Sap xep mang tang dan/giam dan theo giai thuat Interchanger Sort\n");
//	printf("6.Tim kiem x trong mang theo giai thuat Binary Search\n");
//	printf("7.Sap xep mang tang dan/giam dan theo giai thuat Selection Sort\n");
//	printf("8.Sap xep mang tang dan/giam dan theo giai thuat Quick Sort\n");
//	printf("9.Liet ke so nguyen to nho hon n co trong mang\n");
//	printf("10.Tinh tong cac PT co chu so dau la le trong mang\n");
//	printf("11.Liet ke so lan xuat hien cua cac PT trong mang\n");
//	printf("12.Sap xep so le o dau mang, so chan o cuoi mang\n");
//	printf("13.Sap xep chan tang dan le giam dan\n");
//	printf("14.Tim PT nho thu 2 trong mang\n");
//	printf("15.Sap xep chan tang dan con lai giu nguyen vi tri\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			TaoMangNgauNhien_PTlonhonbang15(a, n);
//			break;
//		}
//	case 2:
//		{
//			TaoMangNgauNhienSoChan(a, n);
//			break;
//		}
//	case 3:
//		{
//			XuatM1C(a, n);
//			break;
//		}
//	case 4:
//		{
//			int x;
//			printf("Nhap PT muon tim: "); scanf_s("%d", &x);
//			if (Linear_Search(a, n, x) == -1)
//			{
//				printf("Khong tim thay %d trong mang\n", x);
//			}
//			else
//			{
//				printf("Vi tri PT %d trong mang	la: %d\n", x, Linear_Search(a, n, x));
//			}
//		}
//	case 5:
//		{
//			int choose;
//			do
//			{
//				printf("\t1.Tang dan bang interchangesort\n");
//				printf("\t2.Giam dan bang interchangesort\n");
//				printf("\tChon chuc nang: "); scanf_s("%d", &choose);
//				switch (choose)
//				{
//					case 1:
//					{
//						TangDan_InterchangeSort(a, n);
//						break;
//					}
//				case 2:
//					{
//						GiamDan_InterchangeSort(a, n);
//						break;
//					}
//				}
//			}
//			while (choose != 1 && choose != 2);
//			break;
//		}
//	case 6:
//		{
//			int x;
//			printf("\t\tVui long sap xep mang tang dan de dung Binary Search\n");
//			int choose;
//			do
//			{
//				printf("\t|1.Tang dan bang interchangesort\n");
//				printf("\t|Chon chuc nang: "); scanf_s("%d", &choose);
//				switch (choose)
//				{
//					case 1:
//					{
//						TangDan_InterchangeSort(a, n);
//						XuatM1C(a, n);
//						break;
//					}
//				}
//			}
//			while (choose != 1);
//			printf("Nhap PT muon tim: "); scanf_s("%d", &x);
//			if (Binary_Search(a, n, x) == -1)
//			{
//				printf("Khong ton tai gia tri %d\n", x);
//			}
//			else
//			{
//				printf("Vi tri PT %d trong mang	la: %d\n", x, Binary_Search(a, n, x));
//			}
//			break;
//		}
//	case 7:
//		{
//			int choose;
//			do
//			{
//				printf("\t1.Tang dan bang SelectionSort\n");
//				printf("\t2.Giam dan bang SelectionSort\n");
//				printf("\tChon chuc nang: "); scanf_s("%d", &choose);
//				switch (choose)
//				{
//					case 1:
//					{
//						Tangdan_Selection_Sort(a, n);
//						break;
//					}
//				case 2:
//					{
//						Giamdan_Selection_Sort(a, n);
//						break;
//					}
//				}
//			}
//			while (choose != 1 && choose != 2);
//			break;
//		}
//	case 8:
//		{
//			int choose;
//			do
//			{
//				printf("\t1.Tang dan bang QuickSort\n");
//				printf("\t2.Giam dan bang QuickSort\n");
//				printf("\tChon chuc nang: "); scanf_s("%d", &choose);
//				switch (choose)
//				{
//					case 1:
//					{
//						Tangdan_Quick_Sort(a, 0, n - 1);
//						break;
//					}
//				case 2:
//					{
//						Giamdan_Quick_Sort(a, 0, n - 1);
//						break;
//					}
//				}
//			}
//			while (choose != 1 && choose != 2);
//			break;
//		}
//	case 9:
//		{
//			int x;
//			LietKeSoNguyenTo_NhohonN(a, n, x);
//			break;
//		}
//	case 10:
//		{
//			printf("Tong cac pt co chu so dau la le trong mang la: %d\n", TinhTongCacChuSoDauLe(a, n));
//			break;
//		}
//	case 11:
//		{
//			LietKeSoLanXuatHien_CuaCacPT(a, n);
//			break;
//		}
//	case 12:
//		{
//			SoLeDauMang_SoChanCuoiMang(a, n);
//			printf("Mang sau khi sap xep:\n");
//			XuatM1C(a, n);
//			break;
//		}
//	case 13:
//		{
//			Sapxep_ChanTang_LeGiam(a, n);
//			printf("Mang sau khi sap xep:\n");
//			XuatM1C(a, n);
//			break;
//		}
//	case 14:
//		{
//			TimMinThuHai(a, n);
//			break;
//		}
//	case 15:
//		{
//			Sapxep_ChanTangDan_ConLaiGiuNguyenVitri(a, n);
//			printf("Mang sau khi sap xep:\n");
//			XuatM1C(a, n);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void TaoMangNgauNhien_PTlonhonbang15 (int *&a, int &n)
//{
//	printf("Nhap so luong pt: "); scanf_s("%d", &n);
//	a = (int *)malloc(n*sizeof(int));
//	srand((unsigned)time(NULL));
//	if (n >= 15)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % 100;
//		}
//	}
//	else
//	{
//		printf("Xin vui long nhap so luong PT >= 15!\n");
//	}
//}
//void XuatM1C (int *a, int n)
//{
//	printf("Xuat mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//}
//void TaoMangNgauNhienSoChan (int *&a, int &n)
//{
//	printf("Nhap so luong pt: "); scanf_s("%d", &n);
//	a = (int *)malloc(n*sizeof(int));
//	srand((unsigned)time(NULL));
//	if (n > 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = (rand() % 100) * 2;
//		}
//	}
//	else
//	{
//		printf("Xin vui long nhap so luong PT > 0!\n");
//	}
//}
//int Linear_Search(int *a, int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//			return i;
//	}
//	return -1;
//}
//void swap(int &x, int &y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void TangDan_InterchangeSort(int *a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[j] < a[i])
//			{
//				swap(a[j], a[i]);
//			}
//		}
//	}
//}
//void GiamDan_InterchangeSort(int *a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[j] > a[i])
//			{
//				swap(a[j], a[i]);
//			}
//		}
//	}
//}
//int Binary_Search (int *a, int n, int x)
//{
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] == x)
//		{
//			return mid;
//		}
//		else
//		{
//			if (a[mid] < x)
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
//void Tangdan_Selection_Sort (int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j <= n - 1; j++)
//		{
//			if (a[j] < a[min])
//			{
//				min = j;
//			}
//		}
//		swap(a[i], a[min]);
//	}
//}
//void Giamdan_Selection_Sort (int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j <= n - 1; j++)
//		{
//			if (a[j] > a[max])
//			{
//				max = j;
//			}
//		}
//		swap(a[i], a[max]);
//	}
//}
//void Tangdan_Quick_Sort(int *a, int left, int right)
//{
//	int l = left, r = right, mid = (left + right) / 2;
//	int x = a[mid];
//	do
//	{
//		while (a[l] < x) l++;
//		while (a[r] > x) r--;
//		if (l <= r)
//		{
//			swap(a[l], a[r]);
//			l++;
//			r--;
//		}
//	}
//	while (l <= r);
//	if (left < r) Tangdan_Quick_Sort(a, left, r);
//	if (right > l) Tangdan_Quick_Sort(a, l, right);
//}
//void Giamdan_Quick_Sort(int *a, int left, int right)
//{
//	int l = left, r = right, mid = (left + right) / 2;
//	int x = a[mid];
//	do
//	{
//		while (a[l] > x) l++;
//		while (a[r] < x) r--;
//		if (l <= r)
//		{
//			swap(a[l], a[r]);
//			l++;
//			r--;
//		}
//	}
//	while (l <= r);
//	if (left < r) Giamdan_Quick_Sort(a, left, r);
//	if (right > l) Giamdan_Quick_Sort(a, l, right);
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
//void LietKeSoNguyenTo_NhohonN (int *a, int n, int &x)
//{
//	int dem = 0;
//	do
//	{
//	printf("Nhap n: "); scanf_s("%d", &x);
//	}
//	while (x < 1);
//	printf("Cac so nguyen to < %d co trong mang la:\n", x);
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < x)
//		{
//			if (kiemtrasnt(a[i]) == 1)
//			{
//				printf("%5d", a[i]);
//				dem++;
//			}
//		}
//	}
//	printf("\n");
//	if (dem == 0)
//	{
//		printf("Mang ko co so nguyen to nao nho hon n!\n");
//	}
//}
//int TimChuSoDauLe (int n)
//{
//	int b[1];
//	while (n > 0)
//	{
//		b[0] = n;
//		n = n / 10;
//	}
//	if (b[0] % 2 == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//int TinhTongCacChuSoDauLe (int *a, int n)
//{
//	int Tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (TimChuSoDauLe(a[i]) == 1)
//		{
//			Tong = Tong + a[i];
//		}
//	}
//	return Tong;
//}
//int DemSoLanXuatHien (int *a, int n, int x)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//void LietKeSoLanXuatHien_CuaCacPT (int *a, int n)
//{
//	int *b, dem = 0;
//	b = (int *)malloc(n*sizeof(int));
//	
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = DemSoLanXuatHien(a, n, a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("So lan xuat hien PT a[%d] = %d: %d\n", i, a[i], b[i]);
//	}
//}
//void Sapxep_ChanTang_LeGiam (int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (a[j] % 2 == 0)
//			{
//				swap(a[i], a[j]);
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] % 2 == 0 && a[j] % 2 == 0)
//			{
//				if (a[i] > a[j])
//				{
//					swap(a[i], a[j]);
//				}
//			}
//			else if (a[i] % 2 == 0 && a[j] != 0)
//			{
//				break;
//			}
//			else
//			{
//				if (a[i] < a[j])
//				{
//					swap(a[i], a[j]);
//				}
//			}
//		}
//	}
//}
//void SoLeDauMang_SoChanCuoiMang (int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (a[j] % 2 != 0)
//			{
//				swap(a[i], a[j]);
//				break;
//			}
//		}
//	}
//}
//void TimMinThuHai (int *a, int n)
//{
//	int Min_Max = a[0];
//	int Min_Min = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < Min_Max)
//		{
//			Min_Max = a[i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < Min_Min && a[i] != Min_Max)
//		{
//			Min_Min = a[i];
//		}
//	}
//	printf("PT nho thu hai trong mang la: %d\n", Min_Min);
//}
//void Sapxep_ChanTangDan_ConLaiGiuNguyenVitri (int *a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (a[j] % 2 == 0 && a[i] > a[j])
//				{
//					swap(a[i], a[j]);
//				}
//			}
//		}
//	}
//}