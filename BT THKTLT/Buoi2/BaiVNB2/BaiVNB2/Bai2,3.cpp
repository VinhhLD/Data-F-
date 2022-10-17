//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//struct HonSo
//{
//	int PhanNguyen;
//	int ts;
//	int ms;
//};
//struct PS
//{
//	int ts;
//	int ms;
//};
//void Xuat1HS (HonSo *hs);
//void NhapN (int &n);
//void Taodshs_Random (HonSo *dshs, int n);
//void Xuatdshs (HonSo *dshs, int n);
//void SoSanh_2HonSo (HonSo *dshs, int n, int &vt1, int &vt2);
//void xuat1PS (PS *ps);
//void ChuyenHonSo_SangPhanSo (HonSo *dshs, PS *dsps, int n);
//int USCLN (int x, int y);
//void rutgon1PS (PS *dsps);
//void ChuyenPhanSo_SangHonSo (HonSo *dshs2, PS *dsps, int n);
//void TinhTong_Hieu_Tich_Thuong_2HonSo (HonSo *dshs, PS *dsps, int n, int &vt1, int &vt2);
//HonSo RutGonHonSo(HonSo a);
//HonSo TinhTong(HonSo a, HonSo b);
//HonSo TinhHieu(HonSo a, HonSo b);
//HonSo TinhTich(HonSo a, HonSo b);
//HonSo TinhThuong(HonSo a, HonSo b);
//void swap(HonSo &x, HonSo &y);
//void TangDan_InterchangeSort(HonSo *dshs, PS *dsps, int n);
//void Vitri_Max_Min (HonSo *dshs, PS *dsps, int n);
//void Vitri_PhanNguyenChan (HonSo *dshs, int n);
//void TongcacPT (HonSo *dshs, PS *dsps, int n);
//void XoatPT_Vitrik (HonSo *dshs, int &n, int &k);
//void ThemHonSo (HonSo *dshs, int &n, HonSo &x, int &k);
//int main ()
//{
//	int n, chon;
//	HonSo *dshs;
//	PS *dsps;
//	do
//	{
//		printf("1.Tao mang b chua gia tri hon so ngau nhien\n");
//		printf("2.Xuat danh sach hon so\n");
//		printf("3.So sanh 2 hon so\n");
//		printf("4.Chuyen hon so thanh phan so\n");
//		printf("5.Chuyen phan so thanh hon so\n");
//		printf("6.Tinh tong, hieu, tich, thuong 2 hon so\n");
//		printf("7.Sap xep b tang/giam theo 3 giai thuat sap xep\n");
//		printf("8.Tim va xuat vi tri PT Max/Min trong mang\n");
//		printf("9.Xuat vi tri PT co phan nguyen chan\n");
//		printf("10.Tong cac PT trong mang\n");
//		printf("11.Xoa pt thu k trong mang\n");
//		printf("12.Them hon so x tai vi tri k\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//			{
//				NhapN(n);
//				dshs = (HonSo *)malloc(n*sizeof(HonSo));
//				Taodshs_Random(dshs, n);
//				break;
//			}
//		case 2:
//			{
//				Xuatdshs(dshs, n);
//				break;
//			}
//		case 3:
//			{
//				int vt1, vt2;
//				SoSanh_2HonSo(dshs, n, vt1, vt2);
//				break;
//			}
//		case 4:
//			{
//				dsps = (PS *)malloc(n*sizeof(PS));
//				ChuyenHonSo_SangPhanSo(dshs, dsps, n);
//				break;
//			}
//		case 5:
//			{
//				HonSo *dshs2;
//				dshs2 = (HonSo *)malloc(n*sizeof(HonSo));
//				ChuyenPhanSo_SangHonSo(dshs2, dsps, n);
//				break;
//			}
//		case 6:
//			{
//				int vt1, vt2;
//				printf("Nhap 2 vi tri can tinh\n");
//				printf("Hon so vi tri: "); scanf_s("%d", &vt1);
//				printf("Hon so vi tri: "); scanf_s("%d", &vt2);
//				printf("Tong 2 hon so: ");
//				Xuat1HS(&TinhTong(*(dshs + vt1), *(dshs + vt2)));
//				printf("Hieu 2 hon so: ");
//				Xuat1HS(&TinhHieu(*(dshs + vt1), *(dshs + vt2)));
//				printf("Tich 2 hon so: ");
//				Xuat1HS(&TinhTich(*(dshs + vt1), *(dshs + vt2)));
//				printf("Thuong 2 hon so: ");
//				Xuat1HS(&TinhThuong(*(dshs + vt1), *(dshs + vt2)));
//				break;
//			}
//		case 7:
//			{
//				dsps = (PS *)malloc(n*sizeof(PS));
//				TangDan_InterchangeSort(dshs, dsps, n);
//				break;
//			}
//		case 8:
//			{
//				dsps = (PS *)malloc(n*sizeof(PS));
//				Vitri_Max_Min(dshs, dsps, n);
//				break;
//			}
//		case 9:
//			{
//				Vitri_PhanNguyenChan(dshs, n);
//				break;
//			}
//		case 10:
//			{
//				dsps = (PS *)malloc(n*sizeof(PS));
//				TongcacPT(dshs, dsps, n);
//				break;
//			}
//		case 11:
//			{
//				int k;
//				XoatPT_Vitrik(dshs, n, k);
//				break;
//			}
//		case 12:
//			{
//				HonSo x;
//				int k;
//				ThemHonSo(dshs, n, x, k);
//				break;
//			}
//		}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void Xuat1HS (HonSo *hs)
//{
//	printf("\tHon so: %d %d/%d\n", hs->PhanNguyen, hs->ts, hs->ms);
//}
//void NhapN (int &n)
//{
//	printf("\tNhap danh sach hon so\n");
//	printf("Nhap so luong hon so: "); scanf_s("%d", &n);
//}
//void Taodshs_Random (HonSo *dshs, int n)
//{
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		(dshs + i)->PhanNguyen = rand() % 100; 
//		(dshs + i)->ts = rand() % 100;
//		(dshs + i)->ms = rand() % 100 + 1;
//	}
//}
//void Xuatdshs (HonSo *dshs, int n)
//{
//	printf("Danh sach hon so vua nhap la:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Hon so thu %d:\n", i + 1);
//		Xuat1HS(dshs + i);
//		printf("\t----------------\n");
//	}
//}
//void SoSanh_2HonSo (HonSo *dshs, int n, int &vt1, int &vt2)
//{
//	long double  a[2];
//	printf("Nhap vi tri hon so muon so sanh thu 1: "); scanf_s("%d", &vt1);
//	printf("Nhap vi tri hon so muon so sanh thu 2: "); scanf_s("%d", &vt2);
//	a[0] = (float)(((dshs + vt1)->PhanNguyen * (dshs + vt1)->ms) + (dshs + vt1)->ts) / (dshs + vt1)->ms;
//	a[1] = (float)(((dshs + vt2)->PhanNguyen * (dshs + vt2)->ms) + (dshs + vt2)->ts) / (dshs + vt2)->ms;
//	if (a[0] > a[1])
//	{
//		printf("Hon so: %d %d/%d > %d %d/%d\n", (dshs + vt1)->PhanNguyen, (dshs + vt1)->ts, (dshs + vt1)->ms, (dshs + vt2)->PhanNguyen, (dshs + vt2)->ts, (dshs + vt2)->ms);
//	}
//	else if (a[0] < a[1])
//	{
//		printf("Hon so: %d %d/%d < %d %d/%d\n", (dshs + vt1)->PhanNguyen, (dshs + vt1)->ts, (dshs + vt1)->ms, (dshs + vt2)->PhanNguyen, (dshs + vt2)->ts, (dshs + vt2)->ms);
//	}
//	else
//	{
//		printf("Hon so: %d %d/%d = %d %d/%d\n", (dshs + vt1)->PhanNguyen, (dshs + vt1)->ts, (dshs + vt1)->ms, (dshs + vt2)->PhanNguyen, (dshs + vt2)->ts, (dshs + vt2)->ms);
//	}
//}
//void xuat1PS (PS *ps)
//{
//	if (ps->ts < 0 && ps->ms < 0)
//	{
//		printf("\tPhan so: %d/%d\n", ps->ts * -1, ps->ms * -1);
//	}
//	else if (ps->ms < 0)
//	{
//		printf("\tPhan so: %d/%d\n", ps->ts * -1, ps->ms * -1);
//	}
//	else if (ps->ms == 1)
//	{
//		printf("\tPhan so: %d\n", ps->ts);
//	}
//	else 
//		printf("\tPhan so: %d/%d\n", ps->ts, ps->ms);
//}
//int USCLN (int x, int y)
//{
//	if (x == 0) return y;
//	return USCLN(y % x, x);
//}
//void rutgon1PS (PS *dsps)
//{
//	int u = USCLN(dsps->ts, dsps->ms);
//	dsps->ts = dsps->ts / u;
//	dsps->ms = dsps->ms / u;
//}
//void ChuyenHonSo_SangPhanSo (HonSo *dshs, PS *dsps, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		(dsps + i)->ts = ((dshs + i)->PhanNguyen * (dshs + i)->ms) + (dshs + i)->ts;
//		(dsps + i)->ms = (dshs + i)->ms;
//	}
//	printf("Hon so sau khi chuyen thanh phan so\n");
//	for (int i = 0; i < n; i++)
//	{
//		rutgon1PS(dsps + i);
//		xuat1PS(dsps + i);
//	}
//}
//void ChuyenPhanSo_SangHonSo (HonSo *dshs2, PS *dsps, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		(dshs2 + i)->PhanNguyen = (dsps + i)->ts  / (dsps + i)->ms;
//		(dshs2 + i)->ts = (dsps + i)->ts  % (dsps + i)->ms;
//		(dshs2 + i)->ms = (dsps + i)->ms;
//	}
//	printf("Phan so sau khi chuyen thanh hon so\n");
//	for (int i = 0; i < n; i++)
//	{
//		Xuat1HS(dshs2 + i);
//	}
//}
//HonSo RutGonHonSo(HonSo a)
//{
//    if (a.ts > a.ms)
//    {
//        int tam = a.ts / a.ms;
//        a.PhanNguyen += tam;
//        a.ts -= a.ms * tam;
//    }
//    int UCLN = USCLN(a.ts, a.ms);
//    a.ts /= UCLN;
//    a.ms /= UCLN;
//    return a;
//}
//HonSo TinhTong(HonSo a, HonSo b)
//{
//    HonSo c;
//    c.PhanNguyen = a.PhanNguyen + b.PhanNguyen;
//    c.ts = a.ts * b.ms + a.ms * b.ts;
//    c.ms = a.ms * b.ms;
//    return c;
//}
//HonSo TinhHieu(HonSo a, HonSo b)
//{
//	HonSo c;
//    c.PhanNguyen = a.PhanNguyen - b.PhanNguyen;
//    c.ts = a.ts * b.ms - a.ms * b.ts;
//    c.ms = a.ms * b.ms;
//    return c;
//}
//HonSo TinhTich(HonSo a, HonSo b)
//{
//    a.ts = a.ts + a.PhanNguyen * a.ms;
//    b.ts = b.ts + b.PhanNguyen * b.ms;
//    HonSo c;
//    c.PhanNguyen = 0;
//    c.ts = a.ts * b.ts;
//    c.ms = a.ms * b.ms;
//    c = RutGonHonSo(c);
//    return c;
//}
//HonSo TinhThuong(HonSo a, HonSo b)
//{
//    a.ts = a.ts+ a.PhanNguyen * a.ms;
//    b.ts = b.ts + b.PhanNguyen * b.ms;
//    HonSo c;
//    c.PhanNguyen = 0;
//    c.ts = a.ts * b.ms;
//    c.ms = a.ms * b.ts;
//    c = RutGonHonSo(c);
//    return c;
//}
//void swap(HonSo &x, HonSo &y)
//{
//	HonSo temp = x;
//	x = y;
//	y = temp;
//}
//void TangDan_InterchangeSort(HonSo *dshs, PS *dsps, int n)
//{
//	float *a;
//	a = (float *)malloc(n*sizeof(float));
//	ChuyenHonSo_SangPhanSo(dshs, dsps, n);
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = (float)(dsps + i)->ts / (dsps + i)->ms;
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if ((float)a[j] < (float)a[i])
//			{
//				swap(*(dshs + j), *(dshs + i));
//			}
//		}
//	}
//}
//void Vitri_Max_Min (HonSo *dshs, PS *dsps, int n)
//{
//	float *a;
//	a = (float *)malloc(n*sizeof(float));
//	ChuyenHonSo_SangPhanSo(dshs, dsps, n);
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = (float)(dsps + i)->ts / (dsps + i)->ms;
//	}
//	float Min = a[0];
//	float Max = a[0];
//	int vtMax, vtMin;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > Max)
//		{
//			Max = a[i];
//			vtMax = i;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < Min)
//		{
//			Min = a[i];
//			vtMin = i;
//		}
//	}
//	printf("PT Max co gia tri %d %d/%d va dia chi o nho la %x\nPT Min co gia tri %d %d/%d va dia chi o nho la %x\n", (dshs + vtMax)->PhanNguyen, (dshs + vtMax)->ts, (dshs + vtMax)->ms, (dshs + vtMax), (dshs + vtMin)->PhanNguyen, (dshs + vtMin)->ts, (dshs + vtMin)->ms, (dshs + vtMin));
//}
//void Vitri_PhanNguyenChan (HonSo *dshs, int n)
//{
//	printf("Xuat vi tri cac PT co phan nguyen chan\n");
//	for (int i = 0; i < n; i++)
//	{
//		if ((dshs + i)->PhanNguyen % 2 == 0)
//		{
//			printf("Vi tri PT %d %d/%d la: %x\n", (dshs + i)->PhanNguyen, (dshs + i)->ts, (dshs + i)->ms, (dshs + i));
//		}
//	}
//	printf("\n");
//}
//void TongcacPT (HonSo *dshs, PS *dsps, int n)
//{
//	float *a, Tong = 0;;
//	a = (float *)malloc(n*sizeof(float));
//	ChuyenHonSo_SangPhanSo(dshs, dsps, n);
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = (float)(dsps + i)->ts / (dsps + i)->ms;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		Tong += a[i];
//	}
//	printf("Tong cac PT trong mang la: %.3f\n", Tong);
//}
//void XoatPT_Vitrik (HonSo *dshs, int &n, int &k)
//{
//	do
//	{
//	printf("Nhap vi tri k muon xoa: "); scanf_s("%d", &k);
//	}
//	while (k < n - 1 && k >= 0);
//	if (k < n - 1)
//	{
//		for (int i = k; i < n; i++)
//		{
//			dshs[i] = dshs[i + 1];
//		}
//		n--;
//	}
//	else
//	{
//		n--;
//	}
//}
//void ThemHonSo (HonSo *dshs, int &n, HonSo &x, int &k)
//{
//	printf("Nhap hon so x:\n");
//	printf("Nhap phan nguyen: "); scanf_s("%d", &x.PhanNguyen);
//	printf("Nhap phan tu so: "); scanf_s("%d", &x.ts);
//	printf("Nhap phan mau so: "); scanf_s("%d", &x.ms);
//	printf("Nhap vi tri muon them: "); scanf_s("%d", &k);
//	if (k < 0)
//	{
//		for (int i = n - 1; i >= k; i--)
//		{
//			dshs[i + 1] = dshs[i];
//		}
//		dshs[0] = x;
//		n++;
//	}
//	else if (k > n)
//	{
//		dshs[n] = x;
//		n++;
//	}
//	else
//	{
//		for (int i = n - 1; i >= k; i--)
//		{
//			dshs[i + 1] = dshs[i];
//		}
//		dshs[k] = x;
//		n++;
//	}
//}