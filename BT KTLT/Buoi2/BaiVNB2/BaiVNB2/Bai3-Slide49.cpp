//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#define MAX 100
//struct Date
//{
//	int d, m, y;
//};
//struct NV
//{
//	char hoten[30];
//	Date ns;
//	char gioitinh[5];
//};
//void nhapntn (Date &ntn);
//void xuatntn (Date ntn);
//void nhap1NV (NV &nv);
//void xuat1NV (NV nv);
//void nhapdsnv (NV dsnv[], int &n);
//void xuatdsnv (NV dsnv[], int n);
//int main ()
//{
//	NV dsnv[MAX];
//	int n;
//	try
//	{
//		nhapdsnv(dsnv, n);
//		xuatdsnv(dsnv, n);
//	}
//	catch (const char* msg)
//	{
//		printf("%s\n", msg);
//	}
//	return 0;
//	getch ();
//}
//void nhapntn (Date &ntn)
//{
//	do
//	{
//	printf("\t\t- Nhap ngay: ");
//	scanf_s("%d", &ntn.d);
//	}
//	while (ntn.d <= 0 || ntn.d > 31);
//	do
//	{
//	printf("\t\t- Nhap thang: ");
//	scanf_s("%d", &ntn.m);
//	}
//	while (ntn.m <= 0 || ntn.m > 12);
//	printf("\t\t- Nhap vao nam: ");
//	scanf_s("%d", &ntn.y);
//}
//void xuatntn (Date ntn)
//{
//	printf("%d-", ntn.d);
//	printf("%d-", ntn.m);
//	printf("%d\n", ntn.y);
//}
//void nhap1NV (NV &nv)
//{
//	printf("\tNhap ho ten: ");
//	fflush(stdin);
//	gets(nv.hoten);
//	if (strlen(nv.hoten) > 30)
//	{
//		throw "\t- Nhap qua ki tu cho phep. Vui long nhap lai!";
//	}
//	printf("\tNhap ngay sinh:\n");
//	nhapntn(nv.ns);
//	printf("\tNhap gioi tinh: ");
//	fflush(stdin);
//	gets(nv.gioitinh);
//	if (strlen(nv.gioitinh) > 5)
//	{
//		throw "\t- Nhap qua ki tu cho phep. Vui long nhap lai!";
//	}
//}
//void xuat1NV (NV nv)
//{
//	printf("\tHo ten nhan vien: %s\n", nv.hoten);
//	printf("\tNgay sinh: ");
//	xuatntn(nv.ns);
//	printf("\tGioi tinh: %s\n", nv.gioitinh);
//}
//void nhapdsnv (NV dsnv[], int &n)
//{
//	printf("Nhap so luong nhan vien: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "\tKhong hop le. Vui long nhap lai!";
//	}
//	printf("\tNhap thong tin nhan vien\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhan vien thu %d\n", i + 1);
//		fflush(stdin);
//		nhap1NV(dsnv[i]);
//	}
//}
//void xuatdsnv (NV dsnv[], int n)
//{
//	printf("Danh sach nhan vien:\n");
//	for (int i = 0; i < n; i++)
//	{
//		int nam = 0;
//		if (strcmp(dsnv[i].gioitinh, "Nam") == 0)
//		{
//			nam = dsnv[i].ns.y + 62;
//			printf("- Nhan vien thu %d\n", i + 1);
//			xuat1NV(dsnv[i]);
//			printf("\tThanng / nam nghi huu: %d / %d\n", dsnv[i].ns.m, nam);
//			printf("\t-------------------------------------\n");
//		}
//		else
//		{
//			nam = dsnv[i].ns.y + 60;
//			printf("- Nhan vien thu %d\n", i + 1);
//			xuat1NV(dsnv[i]);
//			printf("\tThanng / nam nghi huu: %d / %d\n", dsnv[i].ns.m, nam);
//			printf("\t-------------------------------------\n");
//		}
//	}
//}
