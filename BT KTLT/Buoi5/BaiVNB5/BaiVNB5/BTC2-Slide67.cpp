//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//struct Thongtin_Monhoc
//{
//	char mamon[11];
//	char tenmon[30];
//	int TC;
//	float diem;
//};
//struct SV
//{
//	char masv[11];
//	char hoten[30];
//	Thongtin_Monhoc NMLT;
//	Thongtin_Monhoc TA1;
//	Thongtin_Monhoc TA2;
//	Thongtin_Monhoc VLKT;
//	Thongtin_Monhoc AV;
//	float DTBTL;
//};
//void nhap1SV (SV &sv);
//void xuat1SV (SV sv);
//void nhapDSSV (SV dssv[], int &n);
//void xuatDSSV (SV dssv[], int n);
//int timMSSV (SV dssv[], int n, char *y);
//void TimSV_DTB_Max (SV dssv[], int n);
//void swap (SV &x, SV &y);
//void sapxep_tangdan_theoDTB (SV dssv[], int n);
//void sapxep_giamdan_theoDTB (SV dssv[], int n);
//int main ()
//{
//	SV dssv[MAX];
//	int n;
//	int chon;
//	do
//	{
//	printf("1.Nhap danh sach sinh vien\n");
//	printf("2.Xuat danh sach sinh vien\n");
//	printf("3.Tim 1 sinh vien qua ma so sinh vien\n");
//	printf("4.Tim sinh vien co diem TB cao nhat\n");
//	printf("5.Them mot sinh vien\n");
//	printf("6.Xoa mot sinh vien\n");
//	printf("7.Sap xep danh sach sinh vien tang/giam theo diem trung binh\n");
//	printf("8.Xep loai hoc tap cua sinh vien theo ket qua hoc tap\n");
//	printf("9.Thong ke so mon dau va so mon rot cua sinh vien\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			nhapDSSV(dssv, n);
//			break;
//		}
//	case 2:
//		{
//			xuatDSSV(dssv, n);
//			break;
//		}
//	case 3:
//		{
//			char z[20];
//			printf("\nNhap ten nhan vien can tim: ");
//			fflush(stdin);
//			gets(z);
//			int b = timMSSV(dssv, n, z);
//			if (timMSSV(dssv, n, z) == -1)
//			{
//				printf("Khong tim thay\n");
//			}
//			else
//			{
//				printf("Tim thay nhan vien thu %d\n", b + 1);
//				xuat1SV(dssv[b]);
//			}
//			break;
//		}
//	case 4:
//		{
//			TimSV_DTB_Max(dssv, n);
//			break;
//		}
//	case 7:
//		{
//			sapxep_tangdan_theoDTB(dssv, n);
//			printf("Danh sach sinh vien tang dan theo DTB:\n");
//			xuatDSSV(dssv, n);
//			sapxep_giamdan_theoDTB(dssv, n);
//			printf("Danh sach sinh vien giam dan theo DTB:\n");
//			xuatDSSV(dssv, n);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhap1SV (SV &sv)
//{
//	fflush(stdin);
//	printf("\tNhap ma sinh vien: "); gets(sv.masv);
//	fflush(stdin);
//	printf("\tNhap ho ten: "); gets(sv.hoten);
//	printf("\tNhap thong tin mon hoc:\n");
//	printf("\t\t- Mon hoc thu 1:\n");
//	fflush(stdin);
//	printf("\t\t\t- Nhap ma mon hoc: "); gets(sv.NMLT.mamon);
//	fflush(stdin);
//	printf("\t\t\t- Nhap ten mon hoc: "); gets(sv.NMLT.tenmon);
//	printf("\t\t\t- Nhap so tin chi: "); scanf_s("%d", &sv.NMLT.TC);
//	printf("\t\t\t- Nhap diem: "); scanf_s("%f", &sv.NMLT.diem);
//	printf("\t\t- Mon hoc thu 2:\n");
//	fflush(stdin);
//	printf("\t\t\t- Nhap ma mon hoc: "); gets(sv.TA1.mamon);
//	fflush(stdin);
//	printf("\t\t\t- Nhap ten mon hoc: "); gets(sv.TA1.tenmon);
//	printf("\t\t\t- Nhap so tin chi: "); scanf_s("%d", &sv.TA1.TC);
//	printf("\t\t\t- Nhap diem: "); scanf_s("%f", &sv.TA1.diem);
//	printf("\t\t- Mon hoc thu 3:\n");
//	fflush(stdin);
//	printf("\t\t\t- Nhap ma mon hoc: "); gets(sv.TA2.mamon);
//	fflush(stdin);
//	printf("\t\t\t- Nhap ten mon hoc: "); gets(sv.TA2.tenmon);
//	printf("\t\t\t- Nhap so tin chi: "); scanf_s("%d", &sv.TA2.TC);
//	printf("\t\t\t- Nhap diem: "); scanf_s("%f", &sv.TA2.diem);
//	printf("\t\t- Mon hoc thu 4:\n");
//	fflush(stdin);
//	printf("\t\t\t- Nhap ma mon hoc: "); gets(sv.VLKT.mamon);
//	fflush(stdin);
//	printf("\t\t\t- Nhap ten mon hoc: "); gets(sv.VLKT.tenmon);
//	printf("\t\t\t- Nhap so tin chi: "); scanf_s("%d", &sv.VLKT.TC);
//	printf("\t\t\t- Nhap diem: "); scanf_s("%f", &sv.VLKT.diem);
//	printf("\t\t- Mon hoc thu 5:\n");
//	fflush(stdin);
//	printf("\t\t\t- Nhap ma mon hoc: "); gets(sv.AV.mamon);
//	fflush(stdin);
//	printf("\t\t\t- Nhap ten mon hoc: "); gets(sv.AV.tenmon);
//	printf("\t\t\t- Nhap so tin chi: "); scanf_s("%d", &sv.AV.TC);
//	printf("\t\t\t- Nhap diem: "); scanf_s("%f", &sv.AV.diem);
//}
//void xuat1SV (SV sv)
//{
//	printf("\tMa sinh vien: %s\n", sv.masv);
//	printf("\tHo ten: %s\n", sv.hoten);
//	printf("\tThong tin mon hoc:\n");
//	printf("\t\tMon thu 1:\n");
//	printf("\t\t\t- Ma mon hoc: %s\n", sv.NMLT.mamon);
//	printf("\t\t\t- Ten mon hoc: %s\n", sv.NMLT.tenmon);
//	printf("\t\t\t- So tin chi: %d\n", sv.NMLT.TC);
//	printf("\t\t\t- Diem: %.2f\n", sv.NMLT.diem);
//	printf("\t\tMon thu 2:\n");
//	printf("\t\t\t- Ma mon hoc: %s\n", sv.TA1.mamon);
//	printf("\t\t\t- Ten mon hoc: %s\n", sv.TA1.tenmon);
//	printf("\t\t\t- So tin chi: %d\n", sv.TA1.TC);
//	printf("\t\t\t- Diem: %.2f\n", sv.TA1.diem);
//	printf("\t\tMon thu 3:\n");
//	printf("\t\t\t- Ma mon hoc: %s\n", sv.TA2.mamon);
//	printf("\t\t\t- Ten mon hoc: %s\n", sv.TA2.tenmon);
//	printf("\t\t\t- So tin chi: %d\n", sv.TA2.TC);
//	printf("\t\t\t- Diem: %.2f\n", sv.TA2.diem);
//	printf("\t\tMon thu 4:\n");
//	printf("\t\t\t- Ma mon hoc: %s\n", sv.VLKT.mamon);
//	printf("\t\t\t- Ten mon hoc: %s\n", sv.VLKT.tenmon);
//	printf("\t\t\t- So tin chi: %d\n", sv.VLKT.TC);
//	printf("\t\t\t- Diem: %.2f\n", sv.VLKT.diem);
//	printf("\t\tMon thu 5:\n");
//	printf("\t\t\t- Ma mon hoc: %s\n", sv.AV.mamon);
//	printf("\t\t\t- Ten mon hoc: %s\n", sv.AV.tenmon);
//	printf("\t\t\t- So tin chi: %d\n", sv.AV.TC);
//	printf("\t\t\t- Diem: %.2f\n", sv.AV.diem);
//	sv.DTBTL = (sv.NMLT.diem * sv.NMLT.TC + sv.TA1.diem * sv.TA1.TC + sv.TA2.diem * sv.TA2.TC + sv.VLKT.diem * sv.VLKT.TC + sv.AV.diem + sv.AV.TC) / (sv.NMLT.TC + sv.TA1.TC + sv.TA2.TC + sv.VLKT.TC + sv.AV.TC);
//	printf("\tDiem trung binh tich luy: %.2f\n", sv.DTBTL);
//}
//void nhapDSSV (SV dssv[], int &n)
//{
//	printf("Nhap danh sach sinh vien:\n");
//	printf("Nhap so luong sinh vien: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap thong tin sinh vien thu %d\n", i + 1);
//		nhap1SV(dssv[i]);
//	}
//}
//void xuatDSSV (SV dssv[], int n)
//{
//	printf("Danh sach sinh vien vua nhap la: \n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Sinh vien thu %d\n", i + 1);
//		xuat1SV(dssv[i]);
//		printf("\t-----------------------------------\n");
//	}
//}
//int timMSSV (SV dssv[], int n, char *y)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].masv == y)
//		{
//			return i;
//			break;
//		}
//	}
//	return -1;
//}
//void TimSV_DTB_Max (SV dssv[], int n)
//{
//	float max = dssv[0].DTBTL;
//	for (int i = 1; i < n; i++)
//	{
//		if (dssv[i].DTBTL > max)
//		{
//			max = dssv[i].DTBTL;
//		}
//	}
//	printf("Sinh vien co diem tong ket cao nhat:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].DTBTL == max)
//		{
//			xuat1SV(dssv[i]);
//		}
//	}
//}
//void swap (SV &x, SV &y)
//{
//	SV temp = x;
//	x = y;
//	y = temp;
//}
//void sapxep_tangdan_theoDTB (SV dssv[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (dssv[j].DTBTL < dssv[i].DTBTL)
//			{
//				swap(dssv[i], dssv[j]);
//			}
//		}
//	}
//}
//void sapxep_giamdan_theoDTB (SV dssv[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (dssv[j].DTBTL > dssv[i].DTBTL)
//			{
//				swap(dssv[j], dssv[i]);
//			}
//		}
//	}
//}