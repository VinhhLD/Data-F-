//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//struct SV
//{
//	int STT;
//	char masv[11];
//	char hoten[30];
//	float dTieuluan;
//	float dKetthuc;
//	float dTongket;
//};
//void nhap1SV (SV &sv);
//void xuat1SV (SV sv);
//void nhapDSSV (SV dssv[], int &n);
//void xuatDSSV (SV dssv[], int n);
//void tinhdiemTK (SV dssv[], int n);
//float Tim_dTongket_MAX (SV dssv[], int n);
//float Tim_dTongket_MIN (SV dssv[], int n);
//void Tim_SV_dTongket_MAX (SV dssv[], int n);
//int demdssv_dat (SV dssv[], int n);
//int demdssv_khongdat (SV dssv[], int n);
//void dem_dssv_dat_khongdat (SV dssv[], int n);
//void Quidoi_diem_sanghe4 (SV dssv[], int n);
//void tinhDiemTB_tatcaSV (SV dssv[], int n);
//void swap (SV &x, SV &y);
//void sapxep_tangdan_theodTongket (SV dssv[], int n);
//void sapxep_giamdan_theodTongket (SV dssv[], int n);
//int main ()
//{
//	SV dssv[MAX];
//	int n;
//	int chon;
//	do
//	{
//	printf("1.Nhap danh sach sinh vien\n");
//	printf("2.Xuat danh sach sinh vien\n");
//	printf("3.Tinh diem tong ket\n");
//	printf("4.In ra sinh vien co diem tong ket MAX/MIN\n");
//	printf("5.Cho biet bao nhieu sinh vien dat va khong dat\n");
//	printf("6.Qui doi diem tu he 10 sang he 4 theo co che tin chi\n");
//	printf("7.Sap xep danh sach sinh vien tang/giam dan theo diem tong ket\n");
//	printf("8.Tinh diem TB cua tat ca sinh vien\n");
//	printf("9.Nhap xuat du lieu bang file txt\n");
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
//			tinhdiemTK(dssv, n);
//			break;
//		}
//	case 4:
//		{
//			Tim_SV_dTongket_MAX(dssv, n);
//			break;
//		}
//	case 5:
//		{
//			dem_dssv_dat_khongdat(dssv, n);
//			break;
//		}
//	case 6:
//		{
//			Quidoi_diem_sanghe4(dssv, n);
//			break;
//		}
//	case 7:
//		{
//			sapxep_tangdan_theodTongket(dssv, n);
//			printf("Danh sach sinh vien tang dan theo diem tong ket:\n");
//			xuatDSSV(dssv, n);
//			sapxep_giamdan_theodTongket(dssv, n);
//			printf("Danh sach sinh vien giam dan theo diem tong ket:\n");
//			xuatDSSV(dssv, n);
//			break;
//		}
//	case 8:
//		{
//			tinhDiemTB_tatcaSV(dssv, n);
//			break;
//		}
//
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhap1SV (SV &sv)
//{
//	printf("\tNhap so thu tu: "); scanf_s("%d", &sv.STT);
//	fflush(stdin);
//	printf("\tNhap ma sinh vien: "); gets(sv.masv);
//	fflush(stdin);
//	printf("\tNhap ho ten: "); gets(sv.hoten);
//	printf("\tNhap diem tieu luan: "); scanf_s("%f", &sv.dTieuluan);
//	printf("\tNhap diem ket thuc mon: "); scanf_s("%f", &sv.dKetthuc);
//}
//void xuat1SV (SV sv)
//{
//	printf("\tSTT: %d\n", sv.STT);
//	printf("\tMa sinh vien: %s\n", sv.masv);
//	printf("\tHo ten: %s\n", sv.hoten);
//	printf("\tDiem tieu luan: %.2f\n", sv.dTieuluan);
//	printf("\tDiem ket thuc mon: %.2f\n", sv.dKetthuc);
//	if (sv.dTongket != -107374176)
//	{
//		printf("\tDiem tong ket: %.2f\n", sv.dTongket);
//	}
//	else
//	{
//		printf("\tDiem tong ket: %s\n", "Chua tinh diem TK");
//	}
//}
//void nhapDSSV (SV dssv[], int &n)
//{
//	printf("Nhap danh sach sinh vien:\n");
//	printf("Nhap so luong sinh vien: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap thong tin sinh vien thu %d\n", i + 1);
//		fflush(stdin);
//		nhap1SV(dssv[i]);
//	}
//}
//void xuatDSSV (SV dssv[], int n)
//{
//	printf("Danh sach sinh vien vua nhap la: \n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1SV(dssv[i]);
//		printf("\t---------------------------------\n");
//	}
//}
//void tinhdiemTK (SV dssv[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		dssv[i].dTongket = dssv[i].dTieuluan * float(0.3) + dssv[i].dKetthuc * float(0.7);
//	}
//}
//float Tim_dTongket_MAX (SV dssv[], int n)
//{
//	float max = dssv[0].dTongket;
//	for (int i = 1; i < n; i++)
//	{
//		if (dssv[i].dTongket > max)
//		{
//			max = dssv[i].dTongket;
//		}
//	}
//	return max;
//}
//float Tim_dTongket_MIN (SV dssv[], int n)
//{
//	float min = dssv[0].dTongket;
//	for (int i = 1; i < n; i++)
//	{
//		if (dssv[i].dTongket < min)
//		{
//			min = dssv[i].dTongket;
//		}
//	}
//	return min;
//}
//void Tim_SV_dTongket_MAX (SV dssv[], int n)
//{
//	float a = Tim_dTongket_MAX(dssv, n);
//	float b = Tim_dTongket_MIN(dssv, n);
//	printf("Sinh vien co diem tong ket cao nhat:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].dTongket == a)
//		{
//			xuat1SV(dssv[i]);
//		}
//	}
//	printf("Sinh vien co diem tong ket thap nhat:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].dTongket == b)
//		{
//			xuat1SV(dssv[i]);
//		}
//	}
//}
//int demdssv_dat (SV dssv[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].dTongket >= 4)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//int demdssv_khongdat (SV dssv[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].dTongket < 4)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//void dem_dssv_dat_khongdat (SV dssv[], int n)
//{
//	int a = demdssv_dat(dssv, n);
//	int b = demdssv_khongdat(dssv, n);
//	printf("Danh sach sinh vien co: %d sinh vien dat va %d khong dat\n", a, b);
//}
//void Quidoi_diem_sanghe4 (SV dssv[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dssv[i].dTongket >= 8.5)
//		{
//			xuat1SV(dssv[i]);
//			printf("\tDiem he so 4 la: 4\n");
//			printf("\t---------------------------------\n");
//		}
//		else if (dssv[i].dTongket >= 7.0)
//		{
//			xuat1SV(dssv[i]);
//			printf("\tDiem he so 4 la: 3\n");
//			printf("\t---------------------------------\n");
//		}
//		else if (dssv[i].dTongket >= 5.5)
//		{
//			xuat1SV(dssv[i]);
//			printf("\tDiem he so 4 la: 2\n");
//			printf("\t---------------------------------\n");
//		}
//		else if (dssv[i].dTongket >= 4.0)
//		{
//			xuat1SV(dssv[i]);
//			printf("\tDiem he so 4 la: 1\n");
//			printf("\t---------------------------------\n");
//		}
//		else
//		{
//			xuat1SV(dssv[i]);
//			printf("\tDiem he so 4 la: 0\n");
//			printf("\t---------------------------------\n");
//		}
//	}
//}
//void tinhDiemTB_tatcaSV (SV dssv[], int n)
//{
//	float diemTB = 0;
//	for (int i = 0; i < n; i++)
//	{
//		diemTB = diemTB + dssv[i].dTongket;
//	}
//	diemTB = diemTB / n;
//	printf("Diem TB cua tat ca sinh vien: %.2f\n", diemTB);
//}
//void swap (SV &x, SV &y)
//{
//	SV temp = x;
//	x = y;
//	y = temp;
//}
//void sapxep_tangdan_theodTongket (SV dssv[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (dssv[j].dTongket < dssv[i].dTongket)
//			{
//				swap(dssv[i], dssv[j]);
//			}
//		}
//	}
//}
//void sapxep_giamdan_theodTongket (SV dssv[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (dssv[j].dTongket > dssv[i].dTongket)
//			{
//				swap(dssv[j], dssv[i]);
//			}
//		}
//	}
//}