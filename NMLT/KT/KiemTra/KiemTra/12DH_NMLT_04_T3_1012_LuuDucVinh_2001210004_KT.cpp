//				/*KIEM TRA HOC PHAN NHAP MON LAP TRINH 12DH
//							DE SO: 04
//							Thoi gian: 75 phut
//Ho va ten: Luu Duc Vinh			MSSV: 2001210004
//Lop: NMLT Thu 3 tiet 10-12
//							Bai Lam*/
//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAXSIZE 100
//#define MAX 100
//void sieuthi (long int &tien, float &khoangcach);
//int KT(long int n);
//void kiemtra_sotoanle (long int &n);
//void Tong (int &x);
//void nhapMTV (int a[][MAXSIZE], int &cot);
//void xuatMaTranVuong (int a[][MAXSIZE], int cot);
//void PTMAX_dgcheophu (int a[][MAXSIZE], int cot);
//void KT_MTVtoanle (int a[][MAXSIZE], int cot);
//struct date
//{
//	int d;
//	int m;
//	int y;
//};
//struct ttls
//{
//	char ma[7];
//	char ten[41];
//	date ngaybatdau;
//	int buoi;
//	int sohocvien;
//};
//void nhap1LH (ttls &lophoc);
//void nhapntn (date &ntn);
//void nhapdslh (ttls dsLH[], int &k);
//void xuatdsLH (ttls dsLH[], int k);
//int main ()
//{
//	int a[MAXSIZE][MAXSIZE], cot;
//	ttls dsLH[MAX];
//	long int tien;
//	float khoangcach;
//	long int n;
//	int x;
//	printf("Bai 1:\n");
//	sieuthi(tien, khoangcach);
//	printf("Bai 2: \n");
//	kiemtra_sotoanle(n);
//	printf("Bai 3: \n");
//	Tong(x);
//	printf("Bai 4: \n");
//	nhapMTV(a, cot);
//	xuatMaTranVuong(a, cot);
//	PTMAX_dgcheophu(a, cot);
//	KT_MTVtoanle(a, cot);
//	return 0;
//	getch ();
//}
////Cau 1:
//void sieuthi (long int &tien, float &khoangcach)
//{
//	int ship;
//	printf("Nhap tien don hang: "); scanf_s("%ld", &tien);
//	printf("Nhap khoang cach: "); scanf_s("%f", &khoangcach);
//	if (tien >= 500000)
//	{
//		ship = 0;
//	}
//	else if (khoangcach >= 0 && khoangcach <= 1)
//		{
//			ship = 0;
//		}
//	else if (khoangcach >= 1 && khoangcach <= 3)
//	{
//		if (tien > 300000)
//		{
//			ship = 0;
//		}
//		else
//		{
//			ship = 20000;
//		}
//	}
//	else
//		{
//			ship = 40000;
//		}
//	printf("Phi van chuyen la: %dVND\n", ship);
//	printf("Hoa don = %ldVND\n", tien + ship);
//}
////Cau2:
//int kt(long int n)
//{
//   while(n > 0)
//    {
//        if(n % 10 % 2 == 0)
//            return 0;
//        n = n / 10;
//    } return 1;
//}
//void kiemtra_sotoanle (long int &n)
//{
//	printf("nhap vao n: "); scanf_s("%ld", &n);
//    if(kt(n))
//	{
//        printf("%d toan chu so le\n", n);
//    } 
//	else 
//	{
//        printf("%d khong toan chu so le\n", n);
//   }
//}
////Cau 3:
//void Tong (int &x)
//{
//	float tong = 0;
//	printf("Nhap vao x: "); scanf_s("%d", &x);
//	for (int i = 1; i <= x; i++)
//	{
//		tong += (float)i / ((i + 1) * (i + 2));
//	}
//	printf("Tong tu S = %.2f\n", tong);
//}
////Cau4:
//void nhapMTV (int a[][MAXSIZE], int &cot)
//{
//	printf("Nhap cap cua ma tran: "); scanf_s("%d", &cot);
//	for (int i = 0; i < cot; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			printf("Nhap a[%d][%d]: ", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//}
//void xuatMaTranVuong (int a[][MAXSIZE], int cot)
//{
//	for (int i = 0; i < cot; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void PTMAX_dgcheophu (int a[][MAXSIZE], int cot)
//{
//	int max = a[0][0];
//	for (int i = 0; i < cot; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			if ((i + j == cot - 1) && max < a[i][j])
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	printf("Phan tu lon nhat tren duong cheo phu la: %d\n", max);
//}
//int dem_MTVsole (int a[][MAXSIZE], int cot)
//{
//	int dem = 0;
//	for (int i = 0; i < cot; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			if (a[i][j] % 2 != 0)
//			{
//				dem++;
//			}
//		}
//	}
//	return dem;
//}
//void KT_MTVtoanle (int a[][MAXSIZE], int cot)
//{
//	int dem = 0;
//	printf("Cac so le trong mang la:\n");
//	for (int i = 0;  i < cot; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			if (kt(a[i][j]))
//			{
//				dem++;
//				printf("%5d", a[i][j]);
//			}
//		}
//	}
//	if (dem == 0)
//	{
//		printf("\nKhong co chu so toan le trong ma tran\n");
//	}
//	else 
//		printf("\nSo luong chu so toan le trong ma tran = %d", dem);
//}
////Cau5:
//void nhapntn (date &ntn)
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
//void xuatntn (date ntn)
//{
//	printf("%d-", ntn.d);
//	printf("%d-", ntn.m);
//	printf("%d\n", ntn.y);
//}
//void nhap1LH (ttls &lophoc)
//{
//	printf("Nhap ma lop hoc: ");
//	gets(lophoc.ma);
//	printf("Nhap ten lop hoc: ");
//	gets(lophoc.ten);
//	printf("Nhap ngay bat dau: ");
//	nhapntn(lophoc.ngaybatdau);
//	printf("Nhap so buoi: ");
//	scanf_s("%d", &lophoc.buoi);
//	printf("Nhap so hoc vien: ");
//	scanf_s("%d", &lophoc.sohocvien);
//}
//void xuat1LH (ttls lophoc)
//{
//	printf("\tMa lop hoc: %s", lophoc.ma);
//	printf("\tTen lop hoc: %s", lophoc.ten);
//	printf("\tNgay bat dau: ");
//	xuatntn(lophoc.ngaybatdau);
//	printf("So buoi: %d", lophoc.buoi);
//	printf("So hoc vien: %d", lophoc.sohocvien);
//}
//void nhapdslh (ttls dsLH[], int &k)
//{
//	printf("Nhap so luong lop hoc: "); scanf_s("%d", &k);
//	printf("\tNhap thong tin lop hoc:\n");
//	for (int i = 0; i < k; i++)
//	{
//		printf("Lop hoc thu %d\n", i + 1);
//		fflush(stdin);
//		nhap1LH(dsLH[i]);
//	}
//}
//void xuatdsLH (ttls dsLH[], int k)
//{
//	printf("Danh sach lop hoc:\n");
//	for (int i = 0; i < k; i++)
//	{
//		printf("Lop hoc thu %d\n", i + 1);
//		xuat1LH(dsLH[i]);
//		printf("\t---------------------------------------\n");
//	}
//}
