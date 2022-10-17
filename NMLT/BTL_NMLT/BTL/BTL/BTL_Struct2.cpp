//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#define MAX 100
//struct Date
//{
//	int d;
//	int m;
//	int y;
//};
//struct Sinhvien
//{
//	char masv[11];
//	char tensv[30];
//	char chuyennganh[30];
//	int starKH, endKH;
//	float diemGVHD;
//	float diemGVPB;
//	float diemTK;
//};
//struct KhoaLuan
//{
//	char maKL[11];
//	char noidungKL[201];
//	Date ngaynhanKL;
//	char hotenGVHD[31];
//	char hotenGVPB[31];
//	int soluongSVDK;
//	Sinhvien danhsachSVDK[5];
//};
//void nhapntn (Date &ntn);
//void xuatntn (Date ntn);
//void nhap1_KL (KhoaLuan &KL, int i);
//void xuat1_KL (KhoaLuan KL, int i);
//void nhap1SV_KL (Sinhvien &SV, int j);
//void xuat1SV_KL (Sinhvien SV, int i);
//void nhapdsKL (KhoaLuan dsKL[], int &n);
//void xuatdsKL (KhoaLuan dsKL[], int n);
//void tinhdiemTK (KhoaLuan dsKL[], int n);
//void KL_solgSVDK (KhoaLuan dsKL[], int n);
//int timMa_KL (KhoaLuan dsKL[], int n, char *z);
//float TimDiemTKMax (KhoaLuan dsKL[], int n, char *z);
//void timSinhvienDiemTKMax (KhoaLuan dsKL[], int n, char *z);
//int main ()
//{
//	KhoaLuan dsKL[MAX];
//	int chon;
//	int n;
//	nhapdsKL(dsKL, n);
//	do
//	{
//	printf("\n================ MENU ================\n");
//	printf("1.Tinh diem tong ket cua moi sinh vien cho tat ca khoa luan\n");
//	printf("2.Xuat thong tin cua tat ca khoa luan\n");
//	printf("3.Them 1 khoa luan duoc dang ky vao danh sach\n");
//	printf("4.In ra thong tin nhung khoa luan co so luong sinh vien dang ky <= 2\n");
//	printf("5.In ra thong tin khoa luan co nhieu sinh vien tham gia nhat trong dot\n");
//	printf("6.In ra thong tin sinh vien co diem tong ket lon nhat cua khoa luan co ma x\n");
//	printf("7.Tim va in ra thong tin khoa luan duoc huong dan boi giang vien co ma x\n");
//	printf("8.Thong tin nhung khoa luan duoc nhan trong nam 2021\n");
//	printf("9.Tim va in ra thong tin giang vien co ma x tham gia phan bien bao nhieu khoa luan trong dot\n");
//	printf("10.In danh sach cac khoa luan ma tat ca sinh vien tham gia ben trong deu co diem tong ket lon hon 4\n");
//	printf("11.Sap xep danh sach khoa luan tang dan theo ma khoa luan\n");
//	printf("12.Cap nhat ho ten giang vien phan bien cua khoa luan co ma la x\n");
//	printf("13.Xoa cac khoa luan khong co sinh vien dang ky\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			tinhdiemTK(dsKL, n);
//			break;
//		}
//	case 2:
//		{
//			xuatdsKL(dsKL, n);
//			break;
//		}
//	case 4:
//		{
//			KL_solgSVDK(dsKL, n);
//			break;
//		}
//	case 6:
//		{
//			char z[20];
//			printf("Nhap ma khoa luan can tim sinh vien diem tong ket lon nhat: ");
//			fflush(stdin);
//			fgets(z, sizeof(z), stdin);
//			int b = timMa_KL(dsKL, n, z);
//			if (timMa_KL(dsKL, n, z) == -1)
//			{
//				printf("Khong tim thay!\n");
//			}
//			else
//			{
//				xuat1_KL(dsKL[b], b);
//				timSinhvienDiemTKMax(dsKL, n, z);
//			}
//			break;
//		}
//	}
//	}
//	while (chon != 0);
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
//	while (ntn.d < 0 || ntn.d > 31);
//	do
//	{
//	printf("\t\t- Nhap thang: ");
//	scanf_s("%d", &ntn.m);
//	}
//	while (ntn.m < 0 || ntn.m > 12);
//	printf("\t\t- Nhap vao nam: ");
//	scanf_s("%d", &ntn.y);
//}
//void xuatntn (Date ntn)
//{
//	printf("%d-", ntn.d);
//	printf("%d-", ntn.m);
//	printf("%d\n", ntn.y);
//}
////void xoaXuongDong (char x[])
////{
////	size_t len = strlen(x);
////	if (x[len - 1] == '\n')
////	{
////		x[len - 1] = '\0';
////	}
////}
//void nhap1SV_KL (Sinhvien &SV, int j)
//{
//	printf("\t\t- Sinh vien thu %d: \n", j + 1);
//	printf("\t\t\tNhap ma sinh vien: ");
//	fflush(stdin);
//	fgets(SV.masv, sizeof(SV.masv), stdin); 
//	printf("\t\t\tNhap ten sinh vien: ");
//	fflush(stdin);
//	gets(SV.tensv);
//	printf("\t\t\tNhap chuyen nganh: ");
//	gets(SV.chuyennganh);
//	printf("\t\t\tNhap nam bat dau khoa hoc: ");
//	scanf_s("%d", &SV.starKH);
//	printf("\t\t\tNhap nam ket thuc khoa hoc: ");
//	scanf_s("%d", &SV.endKH);
//	printf("\t\t\tNhap diem giang vien huong dan: ");
//	scanf_s("%f", &SV.diemGVHD);
//	printf("\t\t\tNhap diem giang vien phan bien: ");
//	scanf_s("%f", &SV.diemGVPB);
//}
//void xuat1SV_KL (Sinhvien SV, int j)
//{
//	SV.diemTK = 0;
//	printf("\t\t- Sinh vien thu %d:\n", j + 1);
//	printf("\t\t\tMa sinh vien: %s", SV.masv);
//	printf("\t\t\tTen sinh vien: %s\n", SV.tensv);
//	printf("\t\t\tChuyen nganh: %s\n", SV.chuyennganh);
//	printf("\t\t\tKhoa hoc: %d - %d\n", SV.starKH, SV.endKH);
//	printf("\t\t\tDiem giang vien huong dan: %.2f\n", SV.diemGVHD);
//	printf("\t\t\tDiem giang vien phan bien: %.2f\n", SV.diemGVPB);
//	printf("\t\t\tDiem tong ket: %.2f\n", SV.diemTK);
//	printf("\t\t---------------------------------------------------------\n");
//}
//void nhap1_KL (KhoaLuan &KL, int i)
//{
//	printf("- Khoa luan thu %d:\n", i + 1);
//	printf("\tNhap ma khoa luan: ");
//	fflush(stdin);
//	fgets(KL.maKL, sizeof(KL.maKL), stdin);
//	printf("\tNhap noi dung khoa luan: ");
//	fflush(stdin);
//	gets(KL.noidungKL);
//	printf("\tNhap ngay nhan khoa luan:\n");
//	nhapntn(KL.ngaynhanKL);
//	printf("\tNhap ho ten giang vien huong dan: ");
//	fflush(stdin);
//	gets(KL.hotenGVHD);
//	printf("\tNhap ho ten giang vien phan bien: ");
//	fflush(stdin);
//	gets(KL.hotenGVPB);
//	printf("\tDanh sach sinh vien dang ky: \n");
//	do
//	{
//	printf("\t- Nhap so luong sinh vien dang ky (toi da 5 sinh vien): "); scanf_s("%d", &KL.soluongSVDK);
//	}
//	while (KL.soluongSVDK > 5);
//	for (int j = 0; j < KL.soluongSVDK; j++)
//	{
//		nhap1SV_KL(KL.danhsachSVDK[j], j);
//	}
//}
//void xuat1_KL (KhoaLuan KL, int i)
//{
//	printf("- Khoa luan thu %d:\n", i + 1);
//	printf("\tMa khoa luan: %s", KL.maKL);
//	printf("\tNoi dung khoa luan: %s\n", KL.noidungKL);
//	printf("\tNgay nhan khoa luan: ");
//	xuatntn(KL.ngaynhanKL);
//	printf("\tHo ten giang vien huong dan: %s\n", KL.hotenGVHD);
//	printf("\tHo ten giang vien phan bien: %s\n", KL.hotenGVPB);
//	printf("\tDanh sach sinh vien dang ky: \n");
//	for (int j = 0; j < KL.soluongSVDK; j++)
//	{
//		xuat1SV_KL(KL.danhsachSVDK[j], j);
//	}
//}
//void nhapdsKL (KhoaLuan dsKL[], int &n)
//{
//	printf("Nhap so luong khoa luan: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		nhap1_KL(dsKL[i], i);
//	}
//}
//void xuatdsKL (KhoaLuan dsKL[], int n)
//{
//	printf("Danh sach khoa luan:\n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1_KL(dsKL[i], i);
//	}
//}
//void tinhdiemTK (KhoaLuan dsKL[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < dsKL[i].soluongSVDK; j++)
//		{
//			dsKL[i].danhsachSVDK[j].diemTK = (dsKL[i].danhsachSVDK[j].diemGVHD + dsKL[i].danhsachSVDK[j].diemGVPB) / 2;
//		}
//	}
//}
//void KL_solgSVDK (KhoaLuan dsKL[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dsKL[i].soluongSVDK <= 2)
//		{
//			xuat1_KL(dsKL[i], i);
//		}
//	}
//}
//int timMa_KL (KhoaLuan dsKL[], int n, char *z)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (strcmp(dsKL[i].maKL, z) == 0)
//		{
//			return i;
//			break;
//		}
//	}
//	return -1;
//}
//float TimDiemTKMax (KhoaLuan dsKL[], int n, char *z)
//{
//	float Max;
//	int a = timMa_KL(dsKL, n, z);
//	Max = dsKL[a].danhsachSVDK[0].diemTK;
//	for (int i = 1; i < dsKL[a].soluongSVDK; i++)
//	{
//		if (dsKL[a].danhsachSVDK[i].diemTK > Max)
//		{
//			Max = dsKL[a].danhsachSVDK[i].diemTK;
//		}
//	}
//	return Max;
//}
//void timSinhvienDiemTKMax (KhoaLuan dsKL[], int n, char *z)
//{
//	int a = timMa_KL(dsKL, n, z);
//	float Max = TimDiemTKMax(dsKL, n, z);
//	printf("Sinh vien co diem tong ket lon nhat trong khoa luan co ma %s\n", z);
//	for (int i = 0; i < dsKL[a].soluongSVDK; i++)
//	{
//		if (dsKL[a].danhsachSVDK[i].diemTK == Max)
//		{	
//			xuat1SV_KL(dsKL[a].danhsachSVDK[i], i);
//		}
//	}
//}