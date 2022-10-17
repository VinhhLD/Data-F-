//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 50
//struct PS
//{
//	int ts;
//	int ms;
//};
//void nhap1PS (PS &ps);
//void xuat1PS (PS ps);
//void nhapdsPS (PS dsPS[], int &n);
//void xuatdsPS (PS dsPS[], int n);
//void timPSmax_min (PS dsPS[], int n);
//PS NghichDao(PS x);
//void Xuat_NghichDao (PS dsPS[], int n);
//int ucln (int a, int b);
//void rutgon1PS (PS ps);
//void tongPS (PS dsPS[], int n);
//void tichPS (PS dsPS[], int n);
//void swap (PS &x, PS &y);
//void sapxepPSgiamdan (PS dsps[], int n);
//void sapxepPStangdan (PS dsps[], int n);
//int main ()
//{
//	PS dsPS[MAX];
//	int n, chon;
//	do
//	{
//	printf("1.Nhap danh sach cac phan so\n");
//	printf("2.Xuat danh sach cac phan so\n");
//	printf("3.Tim phan so MAX/MIN\n");
//	printf("4.Tinh tong va tich cac phan so\n");
//	printf("5.Xuat ra nghich dao gia tri cac phan so trong mang\n");
//	printf("6.Sap xep mang tang/giam dan\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			nhapdsPS(dsPS, n);
//			break;
//		}
//	case 2:
//		{
//			xuatdsPS(dsPS, n);
//			break;
//		}
//	case 3:
//		{
//			timPSmax_min(dsPS, n);
//			break;
//		}
//	case 4:
//		{
//			tongPS(dsPS, n);
//			tichPS(dsPS, n);
//			break;
//		}
//
//	case 5:
//		{
//			Xuat_NghichDao(dsPS, n);
//			break;
//		}
//	case 6:
//		{
//			sapxepPStangdan(dsPS, n);
//			sapxepPSgiamdan(dsPS, n);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhap1PS (PS &ps)
//{
//	printf("\tNhap tu so: "); scanf_s("%d", &ps.ts);
//	printf("\tNhap mau so: "); scanf_s("%d", &ps.ms);
//}
//void xuat1PS (PS ps)
//{
//	if (ps.ts < 0 && ps.ms < 0)
//	{
//		printf("\tPhan so: %d/%d\n", ps.ts * -1, ps.ms * -1);
//	}
//	else if (ps.ms < 0)
//	{
//		printf("\tPhan so: %d/%d\n", ps.ts * -1, ps.ms * -1);
//	}
//	else if (ps.ms == 1)
//	{
//		printf("\tPhan so: %d\n", ps.ts);
//	}
//	else 
//		printf("\tPhan so: %d/%d\n", ps.ts, ps.ms);
//}
//void nhapdsPS (PS dsPS[], int &n)
//{
//	printf("\tNhap danh sach phan so\n");
//	printf("Nhap so luong phan so: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap phan so thu %d\n", i + 1);
//		nhap1PS(dsPS[i]);
//	}
//}
//void xuatdsPS (PS dsPS[], int n)
//{
//	printf("Danh sach phan so vua nhap la: \n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Phan so thu %d:\n", i + 1);
//		xuat1PS(dsPS[i]);
//		printf("\t----------------------\n");
//	}
//}
//void timPSmax_min (PS dsPS[], int n)
//{
//	PS max = dsPS[0];
//	PS min = dsPS[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (float(dsPS[i].ts) / dsPS[i].ms > float(max.ts) / max.ms)
//		{
//			max = dsPS[i];
//		}
//	}
//	if (max.ts < 0 && max.ms < 0)
//	{
//		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts * -1, max.ms * -1);
//	}
//	else if (max.ms < 0)
//	{
//		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts * -1, max.ms * -1);
//	}
//	else if (max.ms == 1)
//	{
//		printf("Phan so lon nhat trong danh sach la: %d\n", max.ts);
//	}
//	else
//	{
//		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts, max.ms);
//	}
//	for (int i = 1; i < n; i++)
//	{
//		if (float(dsPS[i].ts) / dsPS[i].ms < float(min.ts) / min.ms)
//		{
//			min = dsPS[i];
//		}
//	}
//	if (min.ts < 0 && min.ms < 0)
//	{
//		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts * -1, min.ms * -1);
//	}
//	else if (min.ms < 0)
//	{
//		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts * -1, min.ms * -1);
//	}
//	else if (min.ms == 1)
//	{
//		printf("Phan so nho nhat trong danh sach la: %d\n", min.ts);
//	}
//	else
//	{
//		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts, min.ms);
//	}
//}
//PS NghichDao(PS x)
//{
//	PS b;
//	b.ts = x.ms;
//	b.ms = x.ts;
//	return b;
//}
//void Xuat_NghichDao (PS dsPS[], int n)
//{
//	printf("Xuat nghich dao gia tri cac phan so trong mang:\n");
//	for (int i = 0; i < n; i++)
//	{
//		xuat1PS(NghichDao(dsPS[i]));
//	}
//}
//int ucln (int a, int b)
//{
//	if (a < 0)
//	{
//		a = a * -1;
//	}
//	if (b < 0)
//	{
//		b = b * -1;
//	}
//	while (a != b)
//	{
//		if (a > b)
//		{
//			a = a - b;
//		}
//		else
//		{
//			b = b - a;
//		}
//	}
//	return a;
//}
//void rutgon1PS (PS ps)
//{
//	int u = ucln(ps.ts, ps.ms);
//	ps.ts = ps.ts / u;
//	ps.ms = ps.ms / u;
//	printf("%d/%d\n", ps.ts, ps.ms);
//}
//void tongPS (PS dsPS[], int n)
//{
//	PS tong = dsPS[0];
//	for (int i = 1; i < n; i++)
//	{
//		tong.ts = tong.ts * dsPS[i].ms + dsPS[i].ts * tong.ms;
//		tong.ms = tong.ms * dsPS[i].ms;
//	}
//	printf("Tong cac phan so la:\n");
//	xuat1PS(tong);
//	printf("Phan so %d/%d sau khi rut gon la: ", tong.ts, tong.ms);
//	if (tong.ts == 0)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		rutgon1PS(tong);
//	}
//}
//void tichPS (PS dsPS[], int n)
//{
//	PS tich = dsPS[0];
//	for (int i = 1; i < n; i++)
//	{
//		tich.ts = tich.ts * dsPS[i].ts;
//		tich.ms = tich.ms * dsPS[i].ms;
//	}
//	printf("Tich cac phan so la:\n");
//	xuat1PS(tich);
//	printf("Phan so %d/%d sau khi rut gon la: ", tich.ts, tich.ms);
//	if (tich.ts == 0)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		rutgon1PS(tich);
//	}
//}
//void swap (PS &x, PS &y)
//{
//	PS temp = x;
//	x = y;
//	y = temp;
//}
//void sapxepPSgiamdan (PS dsps[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (float(dsps[j].ts) / dsps[j].ms > float(dsps[i].ts) / dsps[i].ms)
//			{
//				swap(dsps[j], dsps[i]);
//			}
//		}
//	}
//	printf("Mang PS sau khi sap xep giam dan:\n");
//	xuatdsPS(dsps, n);
//}
//void sapxepPStangdan (PS dsps[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (float(dsps[j].ts) / dsps[j].ms < float(dsps[i].ts) / dsps[i].ms)
//			{
//				swap(dsps[j], dsps[i]);
//			}
//		}
//	}
//	printf("Mang PS sau khi sap xep tang dan:\n");
//	xuatdsPS(dsps, n);
//}