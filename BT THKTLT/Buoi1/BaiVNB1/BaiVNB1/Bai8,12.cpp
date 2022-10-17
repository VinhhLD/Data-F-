//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAX 100
//struct PS
//{
//	int ts;
//	int ms;
//};
//void nhap1PS (PS *ps);
//void xuat1PS (PS *ps);
//void nhapN (int &n);
//void nhapdsPS (PS *dsPS, int n);
//void xuatdsPS (PS *dsPS, int n);
//void PT_MauLonHonTu (PS *dsPS, int n);
//int DemPS_Chan (PS *dsPS, int n);
//int ucln (PS *dsPS);
//void RutgonPS (PS *dsPS, int n);
//void rutgon1PS (PS *dsPS);
//void tichPS (PS *dsPS, int n);
//void timPSmax_min (PS *dsPS, int n);
//int Tim_VT_k (PS *dsPS, int n, PS k);
//void XoaPT_TaiK (PS *dsPS, int &n, PS &k);
//void ThemPTx_TaiK (PS *dsPS, int &n, PS &x, int &k);
//int main ()
//{
//	int n, chon;
//	PS *dsPS;
//	do
//	{
//		printf("1.Nhap/Xuat pt trong mang\n");
//		printf("2.Xuat cac phan so mau > tu\n");
//		printf("3.Dem cac phan so mau va tu chan\n");
//		printf("4.Rut gon phan so\n");
//		printf("5.Tinh tich cac PS\n");
//		printf("6.Tim phan tu lon nhat va nho nhat\n");
//		printf("7.Xoa pt tai vi tri k\n");
//		printf("8.Them PT x tai vi tri k\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//			{
//				int choose;
//				do
//				{
//				printf("1.Nhap pt trong mang\n");
//				printf("2.Xuat pt trong mang\n");
//				printf("Chon chuc nang: "); scanf_s("%d", &choose);
//				switch (choose)
//				{
//				case 1:
//					{
//						nhapN(n);
//						dsPS = (PS *)malloc(n*sizeof(PS));
//						nhapdsPS(dsPS, n);
//						break;
//					}
//				case 2:
//					{
//						xuatdsPS(dsPS, n);
//						break;
//					}
//				}
//				}
//				while (choose != 1 && choose != 2);
//				break;
//			}
//		case 2:
//			{
//				PT_MauLonHonTu(dsPS, n);
//				break;
//			}
//		case 3:
//			{
//				printf("So luong phan so co mau va tu chan trong mang la: %d\n", DemPS_Chan(dsPS, n));
//			}
//		case 4:
//			{
//				RutgonPS(dsPS, n);
//				break;
//			}
//		case 5:
//			{
//				tichPS(dsPS, n);
//				break;
//			}
//		case 6:
//			{
//				timPSmax_min(dsPS, n);
//				break;
//			}
//		case 7:
//			{
//				PS k;
//				XoaPT_TaiK(dsPS, n, k);
//				break;
//			}
//		case 8:
//			{
//				PS x;
//				int k;
//				ThemPTx_TaiK(dsPS, n, x, k);
//				break;
//			}
//		}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhap1PS (PS *ps)
//{
//	printf("\tNhap tu so: "); scanf_s("%d", &ps->ts);
//	do
//	{
//		try
//		{
//			printf("\tNhap mau so: "); scanf_s("%d", &ps->ms);
//			if (ps->ms == 0)
//			{
//				throw "\t- Vui long nhap mau khac 0";
//			}
//		}
//		catch (const char *msg)
//		{
//			printf("%s\n", msg);
//		}
//	}
//	while (ps->ms == 0);
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
//void nhapN (int &n)
//{
//	printf("\tNhap danh sach phan so\n");
//	printf("Nhap so luong phan so: "); scanf_s("%d", &n);
//}
//void nhapdsPS (PS *dsPS, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap phan so thu %d\n", i + 1);
//		nhap1PS(dsPS + i);
//	}
//}
//void xuatdsPS (PS *dsPS, int n)
//{
//	printf("Danh sach phan so vua nhap la: \n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Phan so thu %d:\n", i + 1);
//		xuat1PS(dsPS + i);
//		printf("\t----------------------\n");
//	}
//}
//void PT_MauLonHonTu (PS *dsPS, int n)
//{
//	printf("Cac phan so co mau  > tu:\n");
//	for (int i = 0; i < n; i++)
//	{
//		if ((dsPS + i)->ms > (dsPS + i)->ts)
//		{
//			printf("\t%d/%d\n", (dsPS + i)->ts, (dsPS + i)->ms);
//		}
//	}
//}
//int DemPS_Chan (PS *dsPS, int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if ((dsPS + i)->ts % 2 == 0 && (dsPS + i)->ms % 2 == 0)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//int ucln (PS *dsPS)
//{
//	int a = dsPS->ts;
//	int b = dsPS->ms;
//	a = abs(a);
//	b = abs(b);
//	int USCLN = 1;
//	if (a == 0 || b == 0)
//	{
//		USCLN = (a + b);
//	}
//	else
//	{
//		while (a != b)
//		{
//			if (a > b)
//			{
//				a = a - b;
//			}
//			else
//			{
//				b = b - a;
//			}
//		}
//		USCLN = a;
//	}
//	return USCLN;
//}
//void RutgonPS(PS *dsPS, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if((dsPS + i)->ts != 0)
//		{
//			int u = ucln((dsPS + i));
//			(dsPS + i)->ts = (dsPS + i)->ts / u;
//			(dsPS + i)->ms = (dsPS + i)->ms / u;
//		}
//	}
//}
//void rutgon1PS (PS *dsPS)
//{
//	int u = ucln(dsPS);
//	dsPS->ts = dsPS->ts / u;
//	dsPS->ms = dsPS->ms / u;
//	printf("%d/%d\n", dsPS->ts, dsPS->ms);
//}
//void tichPS (PS *dsPS, int n)
//{
//	PS *tich = &dsPS[0];
//	for (int i = 1; i < n; i++)
//	{
//		tich->ts = tich->ts * (dsPS + i)->ts;
//		tich->ms = tich->ms * (dsPS + i)->ms;
//	}
//	printf("Tich cac phan so la:\n");
//	xuat1PS(tich);
//	printf("Phan so %d/%d sau khi rut gon la: ", tich->ts, tich->ms);
//	if (tich->ts == 0)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		rutgon1PS(tich);
//	}
//}
//void timPSmax_min (PS *dsPS, int n)
//{
//	PS max = dsPS[0];
//	PS min = dsPS[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (((float)(dsPS + i)->ts / (dsPS + i)->ms) > (float)max.ts / max.ms)
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
//		if (((float)(dsPS + i)->ts) / (dsPS + i)->ms < (float)min.ts / min.ms)
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
//int Tim_VT_k (PS *dsPS, int n, PS k)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if ((dsPS + i)->ts == k.ts && (dsPS + i)->ms == k.ms)
//		{
//			return i;
//			break;
//		}
//	}
//	return -1;
//}
//void XoaPT_TaiK (PS *dsPS, int &n, PS &k)
//{
//	printf("Nhap phan so muon xoa: \n");
//	printf("\tNhap tu so: "); scanf_s("%d", &k.ts);
//	printf("\tNhap mau so: "); scanf_s("%d", &k.ms);
//	int vitri = Tim_VT_k(dsPS, n, k);
//	if (vitri == -1)
//	{
//		printf("Khong tim thay phan so %d/%d muon xoa\n", k.ts, k.ms);
//	}
//	else
//	{
//		for (int i = vitri; i < n; i++)
//		{
//			dsPS[i].ts = dsPS[i + 1].ts;
//			dsPS[i].ms = dsPS[i + 1].ms;
//		}
//		n--;
//	}
//}
//void ThemPTx_TaiK (PS *dsPS, int &n, PS &x, int &k)
//{
//	printf("Nhap phan so muon them: \n");
//	printf("\tNhap tu so: "); scanf_s("%d", &x.ts);
//	printf("\tNhap mau so: "); scanf_s("%d", &x.ms);
//	printf("Vi tri can them: "); scanf_s("%d", &k);
//	if (k - 1 < 0)
//	{
//		for (int i = n - 1; i >= k; i--)
//		{
//			dsPS[i + 1] = dsPS[i];
//		}
//		dsPS[0] = x;
//		n++;
//	}
//	else if (k - 1 > n)
//	{
//		dsPS[n] = x;
//		n++;
//	}
//	else
//	{
//		for (int i = n - 1; i >= k - 1; i--)
//		{
//			dsPS[i + 1] = dsPS[i];
//		}
//		dsPS[k - 1] = x;
//		n++;
//	}
//}