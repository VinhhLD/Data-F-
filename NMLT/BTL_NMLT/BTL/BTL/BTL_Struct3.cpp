//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
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
//void xoaXuongDong (char x[]);
//void nhap1_KL (KhoaLuan &KL, int i);
//void xuat1_KL (KhoaLuan KL, int i);
//void nhap1SV_KL (Sinhvien &SV, int j);
//void xuat1SV_KL (Sinhvien SV, int j);
//void nhapdsKL (KhoaLuan dsKL[], int &n);
//void xuatdsKL (KhoaLuan dsKL[], int n);
//void docFile (FILE *&f, KhoaLuan dsKL[], int &n);
//void tinhdiemTK (KhoaLuan dsKL[], int n);
//void KL_solgSVDK (KhoaLuan dsKL[], int n);
//int timMa_KL (KhoaLuan dsKL[], int n, char *z);
//float TimDiemTKMax (KhoaLuan dsKL[], int n, char *z);
//void timSinhvienDiemTKMax (KhoaLuan dsKL[], int n, char *z);
//void xoa_vitriKL_0SVDK (KhoaLuan dsKL[], int &n, int x);
//void xoa_cacKL_0SVDKL (KhoaLuan dsKL[], int &n);
//void IndsKL_DemTKlonhon4 (KhoaLuan dsKL[], int n);
//void them1KL (KhoaLuan dsKL[], KhoaLuan &x, int &n, int &vitri);
//void Timtengvhd(KhoaLuan dsKL[], int n);
//void Timkl2021(KhoaLuan dsKL[], int n);
//void Capnhattengvpb(KhoaLuan dsKL[], int n);
//void TimKL_SVDK_Max (KhoaLuan dsKL[], int n);
//void swap (KhoaLuan &x, KhoaLuan &y);
//void sapxep_tangdan_theomaKL (KhoaLuan dsKL[], int n);
//void demsolan_thamgiaPBcuaGV (KhoaLuan dsKL[], int n, char *x);
//int main ()
//{
//	FILE *f;
//	KhoaLuan dsKL[MAX];
//	KhoaLuan x;
//	int vitri;
//	int chon;
//	int n;
//	do
//	{
//	printf("\t\t\t\t\t\t\t===================== MENU =====================\n");
//	printf("\t\t\t|1.Nhap danh sach khoa luan thu cong/Nhap danh sach khoa luan tu file text                           |\n");
//	printf("\t\t\t|2.Tinh diem tong ket cua moi sinh vien cho tat ca khoa luan                                         |\n");
//	printf("\t\t\t|3.Xuat thong tin cua tat ca khoa luan                                                               |\n");
//	printf("\t\t\t|4.Them 1 khoa luan duoc dang ky vao danh sach                                                       |\n");
//	printf("\t\t\t|5.In ra thong tin nhung khoa luan co so luong sinh vien dang ky <= 2                                |\n");
//	printf("\t\t\t|6.In ra thong tin khoa luan co nhieu sinh vien tham gia nhat trong dot                              |\n");
//	printf("\t\t\t|7.In ra thong tin sinh vien co diem tong ket lon nhat cua khoa luan co ma x                         |\n");
//	printf("\t\t\t|8.Tim va in ra thong tin khoa luan duoc huong dan boi giang vien co ma x                            |\n");
//	printf("\t\t\t|9.Thong tin nhung khoa luan duoc nhan trong nam 2021                                                |\n");
//	printf("\t\t\t|10.Cho biet giang vien x tham gia phan bien bao nhieu khoa luan trong dot                           |\n");
//	printf("\t\t\t|11.In danh sach cac khoa luan ma tat ca sinh vien tham gia ben trong deu co diem tong ket lon hon 4 |\n");
//	printf("\t\t\t|12.Sap xep danh sach khoa luan tang dan theo ma khoa luan                                           |\n");
//	printf("\t\t\t|13.Cap nhat ho ten giang vien phan bien cua khoa luan co ma la x                                    |\n");
//	printf("\t\t\t|14.Xoa cac khoa luan khong co sinh vien dang ky                                                     |\n");
//	printf("\t\t\t|0.Bam phim so 0 de thoat khoi chuong trinh.                                                         |\n");
//	printf("\t\t\t\t\t\t\t================================================\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			int choose;
//			do
//			{
//			printf("1.Nhap danh sach khoa luan thu cong\n");
//			printf("2.Nhap danh sach khoa luan tu file text\n");
//			printf("Chon chuc nang: "); scanf_s("%d", &choose);
//			switch (choose)
//			{
//			case 1:
//				{
//					nhapdsKL(dsKL, n);
//					break;
//				}
//			case 2:
//				{
//					docFile(f, dsKL, n);
//					break;
//				}
//			}
//			}
//			while (choose != 1 && choose != 2);
//			break;
//		}
//	case 2:
//		{
//			tinhdiemTK(dsKL, n);
//			break;
//		}
//	case 3:
//		{
//			xuatdsKL(dsKL, n);
//			break;
//		}
//	case 4:
//		{
//			them1KL(dsKL, x, n, vitri);
//			break;
//		}
//
//	case 5:
//		{
//			KL_solgSVDK(dsKL, n);
//			break;
//		}
//	case 6:
//		{
//			TimKL_SVDK_Max(dsKL, n);
//			break;
//		}
//	case 7:
//		{
//			char z[20];
//			printf("Nhap ma khoa luan can tim sinh vien diem tong ket lon nhat: ");
//			fflush(stdin);
//			fgets(z, sizeof(z), stdin); xoaXuongDong(z);
//			int b = timMa_KL(dsKL, n, z);
//			if (timMa_KL(dsKL, n, z) == -1)
//			{
//				printf("- Khong tim thay!\n");
//			}
//			else
//			{
//				xuat1_KL(dsKL[b], b);
//				timSinhvienDiemTKMax(dsKL, n, z);
//			}
//			break;
//		}
//	case 8:
//		{
//			Timtengvhd(dsKL, n);
//			break;
//		}
//	case 9:
//		{
//			Timkl2021(dsKL, n);
//			break;
//		}
//	case 10:
//		{
//			char x[20];
//			demsolan_thamgiaPBcuaGV(dsKL, n, x);
//			break;
//		}
//	case 11:
//		{
//			IndsKL_DemTKlonhon4(dsKL, n);
//			break;
//		}
//	case 12:
//		{
//			sapxep_tangdan_theomaKL(dsKL, n);
//			break;
//		}
//	case 13:
//		{
//			Capnhattengvpb(dsKL, n);
//			xuatdsKL(dsKL, n);
//			break;
//		}
//	case 14:
//		{
//			system("cls");
//			xoa_cacKL_0SVDKL(dsKL, n);
//			printf("- Danh sach khoa luan sau khi xoa cac khoa luan khong co sinh vien dang ky:\n");
//			xuatdsKL(dsKL, n);
//			break;
//		}
//	case 0:
//		{
//			system("cls");
//			printf("\t\t\t\t\t\t\tCAM ON CAC BAN DA SU DUNG CHUONG TRINH DEN TU NHOM 8.\n");
//			return 0;
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
//	printf("\t %11d-", ntn.d);
//	printf("%d-", ntn.m);
//	printf("%d", ntn.y);
//}
//void xoaXuongDong (char x[])
//{
//	size_t len = strlen(x);
//	if (x[len - 1] == '\n')
//	{
//		x[len - 1] = '\0';
//	}
//}
//void nhap1SV_KL (Sinhvien &SV, int j)
//{
//	printf("\t\t- Sinh vien thu %d: \n", j + 1);
//	printf("\t\t\tNhap ma sinh vien: ");
//	fflush(stdin);
//	fgets(SV.masv, sizeof(SV.masv), stdin); xoaXuongDong(SV.masv);
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
//	printf("%5d", j + 1);
//	printf("\t %11s", SV.masv);
//	printf("\t %20s", SV.tensv);
//	printf("\t %30s", SV.chuyennganh);
//	printf("\t %12d - %d", SV.starKH, SV.endKH);
//	printf("\t %15.2f", SV.diemGVHD);
//	printf("\t %15.2f", SV.diemGVPB);
//	if (SV.diemTK != -107374176)
//	{
//		printf("\t %15.2f\n", SV.diemTK);
//	}
//	else
//	{
//		printf("\t %15s\n", "Chua tinh diem TK");
//	}
//}
//void nhap1_KL (KhoaLuan &KL, int i)
//{
//	printf("- Khoa luan thu %d\n", i + 1);
//	printf("\tNhap ma khoa luan: ");
//	fflush(stdin);
//	fgets(KL.maKL, sizeof(KL.maKL), stdin); xoaXuongDong(KL.maKL);
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
//	printf("==========================================================================================================================================================================\n");
//	printf("%5s \t %11s \t %30s \t %10s \t %20s \t %20s\n", "STT", "Ma khoa luan", "Noi dung", "Ngay nhan", "GVHD", "GVPB");
//	printf("%5d", i + 1);
//	printf("\t %11s", KL.maKL);
//	printf("\t %30s", KL.noidungKL);
//	xuatntn(KL.ngaynhanKL);
//	printf("\t %20s", KL.hotenGVHD);
//	printf("\t %20s", KL.hotenGVPB);
//	printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
//	printf("\n- Danh sach sinh vien dang ky khoa luan: \n");
//	printf("%5s \t %11s \t %20s \t %30s \t %11s \t %15s \t %15s \t %15s\n", "STT", "Ma SV", "Ten SV", "Chuyen nganh", "Khoa hoc", "Diem GVHD", "Diem GVPB", "Diem TK");
//	if (KL.soluongSVDK == 0)
//	{
//		printf("  - Khong co sinh vien nao dang ky khoa luan nay\n");
//	}
//	else
//	{
//		for (int j = 0; j < KL.soluongSVDK; j++)
//		{
//			xuat1SV_KL(KL.danhsachSVDK[j], j);
//		}
//	}
//	printf("\n");
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
//	printf("- Danh sach khoa luan:\n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1_KL(dsKL[i], i);
//	}
//}
////Cau 3 trong de tai:
//void docFile (FILE *&f, KhoaLuan dsKL[], int &n)
//{
//	f = fopen("dataStruct.txt", "rt");
//	fscanf(f, "%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(f, "%s ", dsKL[i].maKL);
//		fgets(dsKL[i].noidungKL, 201, f); xoaXuongDong(dsKL[i].noidungKL);
//		fscanf(f, "%d ", &dsKL[i].ngaynhanKL.d);
//		fscanf(f, "%d", &dsKL[i].ngaynhanKL.m);
//		fscanf(f, "%d ", &dsKL[i].ngaynhanKL.y);
//		fgets(dsKL[i].hotenGVHD, 31, f); xoaXuongDong(dsKL[i].hotenGVHD);
//		fgets(dsKL[i].hotenGVPB, 31, f); xoaXuongDong(dsKL[i].hotenGVPB);
//		fscanf(f, "%d ", &dsKL[i].soluongSVDK);
//		for (int j = 0; j < dsKL[i].soluongSVDK; j++)
//		{
//			fscanf(f, "%s ", dsKL[i].danhsachSVDK[j].masv);
//			fgets(dsKL[i].danhsachSVDK[j].tensv, 30, f); xoaXuongDong(dsKL[i].danhsachSVDK[j].tensv);
//			fgets(dsKL[i].danhsachSVDK[j].chuyennganh, 30, f); xoaXuongDong(dsKL[i].danhsachSVDK[j].chuyennganh);
//			fscanf(f, "%d ", &dsKL[i].danhsachSVDK[j].starKH);
//			fscanf(f, "%d", &dsKL[i].danhsachSVDK[j].endKH);
//			fscanf(f, "%f", &dsKL[i].danhsachSVDK[j].diemGVHD);
//			fscanf(f, "%f", &dsKL[i].danhsachSVDK[j].diemGVPB);
//		}
//	}
//}
////Cau 2 trong de tai:
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
////Cau 6 trong de tai:
//void KL_solgSVDK (KhoaLuan dsKL[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dsKL[i].soluongSVDK <= 2)
//		{
//			dem++;
//			xuat1_KL(dsKL[i], i);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("\n- Khong co khoa luan nao so luong sinh vien dang ky <= 2\n");
//	}
//}
////Cau 8 trong de tai:
//int timMa_KL (KhoaLuan dsKL[], int n, char *z)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(dsKL[i].maKL, z) == 0)
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
//	printf("- Sinh vien co diem tong ket lon nhat trong khoa luan co ma %s\n", z);
//	printf("%5s \t %11s \t %20s \t %30s \t %11s \t %15s \t %15s \t %15s\n", "STT", "Ma SV", "Ten SV", "Chuyen nganh", "Khoa hoc", "Diem GVHD", "Diem GVPB", "Diem TK");
//	for (int i = 0; i < dsKL[a].soluongSVDK; i++)
//	{
//		if (dsKL[a].danhsachSVDK[i].diemTK == Max)
//		{	
//			xuat1SV_KL(dsKL[a].danhsachSVDK[i], i);
//		}
//	}
//}
////Cau 12 trong de tai:
//void IndsKL_DemTKlonhon4 (KhoaLuan dsKL[], int n)
//{
//	bool check = false;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < dsKL[i].soluongSVDK; j++)
//		{
//			if (dsKL[i].danhsachSVDK[j].diemTK <= 4)
//			{
//				check = false;
//				break;
//			}
//			else if (dsKL[i].danhsachSVDK[j].diemTK > 4)
//			{
//				check = true;
//			}
//		}
//		if (check == true)
//		{		
//			if (dsKL[i].soluongSVDK == 0)
//			{
//				continue;
//			}
//			xuat1_KL(dsKL[i], i);
//		}
//	}
//	if (check == false)
//	{
//		printf("\n- Khong co khoa luan nao ma sinh vien tham gia ben trong co diem tong ket lon hon 4\n");
//	}
//}
////Cau 15 trong de tai:
//void xoa_vitriKL_0SVDK (KhoaLuan dsKL[], int &n, int x)
//{
//	for (int i = x; i < n; i++)
//	{
//		dsKL[i] = dsKL[i + 1];
//	}
//	n--;
//}
//void xoa_cacKL_0SVDKL (KhoaLuan dsKL[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dsKL[i].soluongSVDK == 0)
//		{
//			xoa_vitriKL_0SVDK(dsKL, n, i);
//			i--;
//		}
//	}
//}
////Cau 5 trong de tai
//void them1KL (KhoaLuan dsKL[], KhoaLuan &x, int &n, int &vitri)
//{
//	printf("Nhap vi tri can them khoa luan: "); scanf_s("%d", &vitri);
//	nhap1_KL(x, vitri - 1);
//	if (vitri - 1 < 0)
//	{
//		for (int i = n - 1; i >= vitri; i--)
//		{
//			dsKL[i + 1] = dsKL[i];
//		}
//		dsKL[0] = x;
//		n++;
//	}
//	else if (vitri - 1 > n)
//	{
//		dsKL[n] = x;
//		n++;
//	}
//	else
//	{
//		for (int i = n - 1; i >= vitri - 1; i--)
//		{
//			dsKL[i + 1] = dsKL[i];
//		}
//		dsKL[vitri - 1] = x;
//		n++;
//	}
//}
////Cau 9 trong de tai:
//void Timtengvhd(KhoaLuan dsKL[], int n)
//{
//	int dem = 0;
//	char gvhd[31];
//	printf("Nhap vao ten giang vien huong dan can tim: ");
//	fflush(stdin); 
//	gets(gvhd);
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(dsKL[i].hotenGVHD, gvhd) == 0)
//		{
//			dem++;
//			xuat1_KL(dsKL[i], i);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("\n- Giang vien %s khong huong dan khoa luan nao\n", gvhd);	
//	}
//}
////Cau 10 trong de tai:
//void Timkl2021(KhoaLuan dsKL[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dsKL[i].ngaynhanKL.y == 2021)
//		{
//			dem++;
//			xuat1_KL(dsKL[i], i);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("\n- Khong co khoa luan nao duoc nhan trong nam 2021\n");
//	}
//}
////Cau 14 trong de tai:
//void Capnhattengvpb(KhoaLuan dsKL[], int n)
//{
//	int dem = 0;
//	char mkl[11];
//	printf("Nhap ma khoa luan can thay ten GVPB: ");
//	fflush(stdin);
//	gets(mkl);
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(dsKL[i].maKL, mkl) == 0)
//		{
//			dem++;
//			printf("Nhap ten giang vien phan bien moi: ");
//			fflush(stdin);
//			gets(dsKL[i].hotenGVPB);
//		}
//	}
//	if (dem == 0)
//	{
//		printf("\n- Khong co khoa luan nhu tren\n");
//	}
//}
////Cau 7 trong de tai:
//void TimKL_SVDK_Max (KhoaLuan dsKL[], int n)
//{
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (dsKL[i].soluongSVDK > max)
//		{
//			max = dsKL[i].soluongSVDK;
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (dsKL[j].soluongSVDK == max)
//		{
//			xuat1_KL(dsKL[j], j);
//		}
//	}
//}
////Cau 13 trong de tai:
//void swap (KhoaLuan &x, KhoaLuan &y)
//{
//	KhoaLuan temp = x;
//	x = y;
//	y = temp;
//}
//void sapxep_tangdan_theomaKL (KhoaLuan dsKL[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(dsKL[i].maKL, dsKL[j].maKL) > 0)
//			{
//				swap(dsKL[i], dsKL[j]);
//			}
//		}
//	}
//}
////Cau 11 trong de tai:
//void demsolan_thamgiaPBcuaGV (KhoaLuan dsKL[], int n, char *x)
//{
//	int dem = 0;
//	printf("Nhap ten giang vien muon dem so lan tham gia PB: ");
//	fflush(stdin);
//	gets(x);
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(dsKL[i].hotenGVPB, x) == 0)
//		{
//			dem++;
//		}
//	}
//	if (dem != 0)
//	{
//		printf("Giang vien %s tham gia phan bien %d khoa luan trong dot\n", x, dem);
//	}
//	else
//	{
//		printf("\n- Khong tim thay giang vien %s\n", x);
//	}
//}