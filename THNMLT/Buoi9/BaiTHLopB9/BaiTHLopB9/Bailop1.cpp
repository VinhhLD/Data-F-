//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#define MAX 100
//struct TS
//{
//	char maso[11];
//	char ten[50];
//	float toan, ly, hoa;
//	int KV;
//	char xeploai[20];
//	float tongdiem;
//	int diemcong;
//	int duutien;
//};
//void nhap1thisinh (TS &ts);
//void xuat1thisinh (TS ts, int i);
//void nhapdsts (TS dsts[], int &n);
//void xuatdsts (TS dsts[], int n);
//int demdsts_dau (TS dsts[], int n);
//void dsts_dau (TS dsts[], int n);
//int timthisinh (TS dsts[], int n, char *z);
//float timToanMax (TS dsts[], int n);
//void timthisinhToanMax (TS dsts[], int n);
//float timThuKhoa (TS dsts[], int n);
//void xuatThukhoa (TS dsts[], int n);
//void tile_dau (TS dsts[], int n, char a);
//int main ()
//{
//	TS dsts[MAX];
//	int n;
//	int chon;
//	char a = '%';
//	do
//	{
//	printf("1.Nhap danh sach thi sinh\n");
//	printf("2.Xuat danh sach thi sinh\n");
//	printf("3.Xuat danh sach thi sinh dau\n");
//	printf("4.Tim thi sinh\n");
//	printf("5.Tim thi sinh co diem toan cao nhat\n");
//	printf("6.In thi sinh dau thu khoa\n");
//	printf("7.Tinh ti le %c dau cua ki thi\n", a);
//	printf("Chon chuc nang: ");
//	scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			nhapdsts(dsts, n);
//			break;
//		}
//	case 2:
//		{
//			xuatdsts(dsts, n);
//			break;
//		}
//	case 3:
//		{
//			dsts_dau(dsts, n);
//			break;
//		}
//	case 4:
//		{
//			char z[20];
//			printf("Nhap ma so thi sinh can tim: ");
//			fflush(stdin);
//			gets(z);
//			int b = timthisinh(dsts, n, z);
//			if (b == -1)
//			{
//				printf("Khong tim thay\n");
//			}
//			else
//			{
//				xuat1thisinh(dsts[b], b);
//			}
//			break;
//		}
//	case 5:
//		{
//			timthisinhToanMax(dsts, n);
//			break;
//		}
//	case 6:
//		{
//			xuatThukhoa(dsts, n);
//			break;
//		}
//	case 7:
//		{
//			tile_dau(dsts, n, a);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhap1thisinh (TS &ts)
//{
//	printf("\tNhap ma so thi sinh: ");
//	fflush(stdin);
//	gets(ts.maso);
//	printf("\tNhap ten: ");
//	gets(ts.ten);
//	printf("\tNhap diem Toan: ");
//	scanf_s("%f", &ts.toan);
//	printf("\tNhap diem Ly: ");
//	scanf_s("%f", &ts.ly);
//	printf("\tNhap diem Hoa: ");
//	scanf_s("%f", &ts.hoa);
//	printf("\tNhap khu vuc du thi: ");
//	scanf_s("%d", &ts.KV);
//	printf("\tNhap loai tot nghiep: ");
//	fflush(stdin);
//	gets(ts.xeploai);
//	if (strcmp(ts.xeploai, "Gioi") == 0)
//	{
//		ts.diemcong = 2;
//	}
//	else if (strcmp(ts.xeploai, "Kha") == 0)
//	{
//		ts.diemcong = 1;
//	}
//	else
//	{
//		ts.diemcong = 0;
//	}
//	if (ts.KV == 3)
//	{
//		ts.duutien = 2;
//	}
//	else if (ts.KV == 2)
//	{
//		ts.duutien = 1;
//	}
//	else
//	{
//		ts.duutien = 0;
//	}
//	ts.tongdiem = ts.toan + ts.ly + ts.hoa + ts.diemcong + ts.duutien;
//}
//void xuat1thisinh (TS ts, int i)
//{
//	printf("Thi sinh thu %d:\n", i + 1);
//	printf("\tMa so thi sinh: %s\n", ts.maso);
//	printf("\tTen thi sinh: %s\n", ts.ten);
//	printf("\tDiem mon Toan: %.2f\n", ts.toan);
//	printf("\tDiem mon Ly: %.2f\n", ts.ly);
//	printf("\tDiem mon Hoa: %.2f\n", ts.hoa);
//	printf("\tKhu vuc du thi : %d\n", ts.KV);
//	printf("\tLoai tot nghiep: %s\n", ts.xeploai);
//	printf("\tDiem cong: %d\n", ts.diemcong);
//	printf("\tDiem uu tien: %d\n", ts.duutien);
//	printf("\tTong diem: %.2f\n", ts.tongdiem);
//}
//void nhapdsts (TS dsts[], int &n)
//{
//	printf("Nhap so luong thi sinh: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Thi sinh thu %d:\n", i + 1);
//		nhap1thisinh(dsts[i]);
//		printf("\t-----------------------------\n");
//	}
//}
//void xuatdsts (TS dsts[], int n)
//{
//	printf("Danh sach thi sinh:\n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1thisinh(dsts[i], i);
//		printf("\t-----------------------------\n");
//	}
//}
//int demdsts_dau (TS dsts[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dsts[i].tongdiem >= 15)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//void dsts_dau (TS dsts[], int n)
//{
//	printf("Danh sach thi sinh dau: \n");
//	if (demdsts_dau(dsts, n) != 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (dsts[i].tongdiem >= 15)
//			{
//				xuat1thisinh(dsts[i], i);
//			}
//		}
//	}
//	else
//	{
//		printf("Khong co thi sinh nao dau\n");
//	}
//}
//int timthisinh (TS dsts[], int n, char *z)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (strcmp(dsts[i].maso, z) == 0)
//		{
//			return i;
//			break;
//		}
//	}
//	return -1;
//}
//float timToanMax (TS dsts[], int n)
//{
//	float Max = dsts[0].toan;
//	for (int i = 1; i < n; i++)
//	{
//		if (dsts[i].toan > Max)
//		{
//			Max = dsts[i].toan;
//		}
//	}
//	return Max;
//}
//void timthisinhToanMax (TS dsts[], int n)
//{
//	float a = timToanMax(dsts, n);
//	printf("Thi sinh co diem toan cao nhat:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if (dsts[i].toan == a)
//		{
//			xuat1thisinh(dsts[i], i);
//		}
//	}
//}
//float timThuKhoa (TS dsts[], int n)
//{
//	float Maxtongdiem = dsts[0].tongdiem;
//	for (int i = 1; i < n ; i++)
//	{
//		if (dsts[i].tongdiem > Maxtongdiem)
//		{
//			Maxtongdiem = dsts[i].tongdiem;
//		}
//	}
//	return Maxtongdiem;
//}
//void xuatThukhoa (TS dsts[], int n)
//{
//	float a = timThuKhoa(dsts, n);
//	printf("Thi sinh dau thu khoa la:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if (dsts[i].tongdiem == a)
//		{
//			xuat1thisinh(dsts[i], i);
//		}
//	}
//}
//void tile_dau (TS dsts[], int n, char a)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dsts[i].tongdiem >= 15)
//		{
//			dem++;
//		}
//	}
//	printf("Ti le dau cua ki thi la: %.2f%c\n", (float)dem / n * 100, a);
//}