//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//struct Process
//{
//	char pid[11];
//	int tdden, tgxuly, tgdapung, tgcho, tghoanthanh, tgbatdauxuly, check;
//};
//void NhapTT(Process p[], int &n);
//void XuatTT(Process p[], int n);
//void XuLy (Process p[], int n);
//int main()
//{
//	Process p[MAX];
//	int n, chon;
//	do
//	{
//		printf("1.Nhap tien trinh\n");
//		printf("2.Xuat tien trinh\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon);
//		switch (chon)
//		{
//			case 1:
//			{
//				NhapTT(p, n);
//				break;
//			}
//			case 2:
//			{
//				XuLy(p, n);
//				XuatTT(p, n);
//				break;
//			}
//		}
//	} 
//	while (chon != 0);
//	return 0;
//	getch();
//}
//void NhapTT(Process p[], int &n)
//{
//	printf("Nhap so luong tien trinh: "); scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//
//		printf("Nhap ma tien trinh [%d]: ", i); 
//		fflush(stdin);
//		gets(p[i].pid);
//		printf("Nhap thoi diem den [%d]: ", i); scanf_s("%d", &p[i].tdden);
//		printf("Nhap thoi gian xu ly [%d]: ", i); scanf_s("%d", &p[i].tgxuly);
//		p[i].check = 1;
//	}
//}
//void XuatTT (Process p[], int n)
//{
//	int tongtgdapung = 0, tongtgcho = 0, tongtghoanthanh = 0;
//	float tg_dapung_tb, tg_cho_tb, tg_hoanthanh_tb;
//	for (int i = 1; i <= n; i++)
//	{
//		tongtgdapung += p[i].tgdapung;
//		tongtgcho += p[i].tgcho;
//		tongtghoanthanh += p[i].tghoanthanh;
//	}
//	tg_dapung_tb = tongtgdapung / (float)n;
//	tg_cho_tb = tongtgcho / (float)n;
//	tg_hoanthanh_tb = tongtghoanthanh / (float)n;
//	printf("%10s%15s%15s%15s\n", "TT", "TG-DAP UNG", "TG-CHO", "TG-HOAN THANH");
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%10s%15d%15d%15d\n", p[i].pid, p[i].tgdapung, p[i].tgcho, p[i].tghoanthanh);
//	}
//	printf("Thoi gian dap ung trung binh: %.2f\n", tg_dapung_tb);
//	printf("Thoi gian cho trung binh: %.2f\n", tg_cho_tb);
//	printf("Thoi gian hoan thanh trung binh: %.2f\n", tg_hoanthanh_tb);
//}
//void XuLy (Process p[], int n)
//{
//	int check = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		if (p[check].tdden == p[i].tdden)
//		{
//			if (p[check].tgxuly > p[i].tgxuly)
//			{
//				check = i;
//			}
//		}
//		if (p[check].tdden > p[i].tdden)
//		{
//			check = i;
//		}
//	}
//	p[check].tgdapung = 0;
//	p[check].tgcho = 0;
//	p[check].tgbatdauxuly = p[check].tgcho + p[check].tdden;
//	p[check].tghoanthanh = (p[check].tgbatdauxuly + p[check].tgxuly) - p[check].tdden;
//	int kt;
//	for (int i = 2; i < n; i++)
//	{
//		kt = 999999999;
//		int index = 0;
//		for (int j = 2; j <= n; j++)
//		{
//			if (p[j].check)
//			{
//				if (kt > p[j].tgxuly)
//				{
//					kt = p[j].tgxuly;
//					index = j;
//				}
//
//			}
//
//		}
//		p[i].tgdapung = p[check].tgbatdauxuly - p[check].tdden;
//		p[i].tgcho = p[check].tghoanthanh - p[check].tgxuly - p[check].tdden;
//		p[i].tgbatdauxuly = p[i].tgcho + p[index].tdden;
//		p[i].tghoanthanh = (p[i].tgbatdauxuly + p[index].tgxuly) - p[index].tdden;
//		p[index].check = 0;
//		check = index;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		int Min = p[i].tgxuly;
//		if (p[i].tdden < p[check].tghoanthanh)
//		{
//			for (int j = 2; j <= n; j++)
//			{
//				p[i].tgdapung = p[j].tgbatdauxuly - p[j].tdden;
//				p[i].tgcho = p[j].tghoanthanh - p[j].tgxuly - p[j].tdden;
//				p[i].tgbatdauxuly = p[i].tgcho + p[i].tdden;
//				p[i].tghoanthanh = (p[i].tgbatdauxuly + p[i].tgxuly) - p[1].tdden;
//			}
//		}
//		else
//		{
//
//		}
//
//
//}
//}

//	for (int i = 2; i <= n; i++)
//	{
//		for (int k = i + 1; k < n; k++)
//		{
//		for (int j = 1; j < i; j++)
//		{
//			if (p[j].tghoanthanh >)
//			p[i].tgdapung = p[j].tgbatdauxuly - p[j].tdden;
//			p[i].tgcho = p[j].tghoanthanh - p[j].tgxuly - p[j].tdden;
//			p[i].tgbatdauxuly = p[i].tgcho + p[i].tdden;
//			p[i].tghoanthanh = (p[i].tgbatdauxuly + p[i].tgxuly) - p[1].tdden;
//		}
//}