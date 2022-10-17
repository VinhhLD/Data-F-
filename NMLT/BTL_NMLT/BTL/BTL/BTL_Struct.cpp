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
//typedef struct Sinhvien
//{
//	char masv[11];
//	char tensv[30];
//	char chuyennganh[30];
//	int starKH, endKH;
//	float diemGVHD;
//	float diemGVPB;
//	float diemTK;
//}a[MAX];
//struct KhoaLuan
//{
//	char maKL[11];
//	char noidungKL[201];
//	Date ngaynhanKL;
//	char hotenGVHD[31];
//	char hotenGVPB[31];
//	Sinhvien danhsachSVDK;
//};
//void nhapntn (Date &ntn);
//void xuatntn (Date ntn);
//void nhap1KL (KhoaLuan &KL, int i);
//void xuat1KL (KhoaLuan KL, int i, int &j);
//void nhap1SV_KL (Sinhvien &SV, int j);
//void xuat1SV_KL (Sinhvien SV, int j);
//void nhapdsSV_KL (KhoaLuan dsKL[], int &s);
//void xuatdsSV_KL (KhoaLuan dsKL[], int s);
//void nhapdsKL (KhoaLuan dsKL[], int &n, int &s);
//void xuatdsKL (KhoaLuan dsKL[], int n, int s);
//int main ()
//{
//	KhoaLuan dsKL[MAX];
//	int chon;
//	int n, s;
//	nhapdsKL(dsKL, n, s);
//	do
//	{
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
//
//		}
//	case 2:
//		{
//			xuatdsKL(dsKL, n, s);
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
//void nhap1KL (KhoaLuan &KL, int i)
//{
//	printf("- Khoa luan thu %d\n", i + 1);
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
//	//nhapdsSV_KL(KL.danhsachSVDK, s);
//}
//void xuat1KL (KhoaLuan KL, int i, int &j)
//{
//	printf("- Khoa luan thu %d\n", i + 1);
//	printf("\tMa khoa luan: %s\n", KL.maKL);
//	printf("\tNoi dung khoa luan: %s\n", KL.noidungKL);
//	printf("\tNgay nhan khoa luan: ");
//	xuatntn(KL.ngaynhanKL);
//	printf("\tHo ten giang vien huong dan: %s\n", KL.hotenGVHD);
//	printf("\tHo ten giang vien phan bien: %s\n", KL.hotenGVPB);
//	printf("\tDanh sach sinh vien dang ky: \n");
//	//xuat1SV_KL(KL.danhsachSVDK, j);
//	//xuatdsSV_KL(KL.danhsachSVDK, s);
//}
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
//	SV.diemTK = (SV.diemGVHD + SV.diemGVPB) / 2;
//	printf("\t\t- Sinh vien thu %d: \n", j + 1);
//	printf("\t\t\tMa sinh vien: %s\n", SV.masv);
//	printf("\t\t\tTen sinh vien: %s\n", SV.tensv);
//	printf("\t\t\tChuyen nganh: %s\n", SV.chuyennganh);
//	printf("\t\t\tKhoa hoc: %d - %d\n", SV.starKH, SV.endKH);
//	printf("\t\t\tDiem giang vien huong dan: %.2f\n", SV.diemGVHD);
//	printf("\t\t\tDiem giang vien phan bien: %.2f\n", SV.diemGVPB);
//	printf("\t\t\tDiem tong ket: %.2f\n", SV.diemTK);
//	printf("\t-----------------------------------------------------------------------\n");
//}
//void nhapdsSV_KL (KhoaLuan dsSV[], int &s)
//{
//	do
//	{
//	printf("Nhap so luong sinh vien dang ky khoa luan: ");
//	scanf_s("%d", &s);
//	}
//	while (s <= 5 && s <= 0);
//	for (int j = 0; j < s; j++)
//	{
//		nhap1SV_KL(dsSV[j].danhsachSVDK, j);
//	}
//}
//void xuatdsSV_KL (KhoaLuan dsSV[], int s)
//{
//	printf("Danh sach sinh vien dang ky khoa luan:\n");
//	for (int j = 0; j < s; j++)
//	{
//		xuat1SV_KL(dsSV[j].danhsachSVDK, j);
//	}
//}
//void nhapdsKL (KhoaLuan dsKL[], int &n, int &s)
//{
//	printf("Nhap so luong khoa luan: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		nhap1KL(dsKL[i], i);
//		nhapdsSV_KL(dsKL, s);
//		//do
//		//{
//		//printf("Nhap so luong sinh vien dang ky khoa luan: ");
//		//scanf_s("%d", &s);
//		//}
//		//while (s <= 0 && s <= 5);
//		//for (int j = 0; j < s; j++)
//		//{
//		//	nhapdsSV_KL(dsKL[j].danhsachSVDK, j);
//		//}
//
//	}
//	/*printf("Nhap so luong sinh vien dang ky khoa luan: ");
//	scanf_s("%d", &s);
//	for (int j = 0; j < s; j++)
//	{
//		nhap1SV_KL(dsKL[j], j);
//	}*/
//}
//void xuatdsKL (KhoaLuan dsKL[], int n, int s)
//{
//	printf("Danh sach khoa luan khoa CNTT\n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1KL(dsKL[i], i, s);
//		xuatdsSV_KL(dsKL, s);
//		//for (int j = 0; j < s; j++)
//		//{
//		//	xuat1SV_KL(dsKL[j].danhsachSVDK, j);
//		//}
//	}
//}