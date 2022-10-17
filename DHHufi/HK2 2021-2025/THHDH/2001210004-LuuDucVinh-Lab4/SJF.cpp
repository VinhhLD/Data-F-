//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//struct Process
//{
//	char pid[11];
//	int tdden, tgxuly, tgdapung, tgcho, tghoanthanh, tdbatdauxuly, tdhoanthanh;
//};
//void NhapTT(Process p[], int &n);
//void XuatTT(Process p[], int n);
//void swap (Process &x, Process &y);
//void SapXep (Process p[], int n);
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
//		printf("Nhap thoi gian xu ly [%d]: ", i); scanf_s("%d", &p[i].tgxuly);
//		p[i].tdden = 0;
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
//void swap (Process &x, Process &y)
//{
//	Process temp = x;
//	x = y;
//	y = temp;
//}
//void SapXep (Process p[], int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (p[j].tgxuly <	p[i].tgxuly)
//			{
//				swap (p[i], p[j]);
//			}
//		}
//	}
//}
//void XuLy (Process p[], int n)
//{
//	SapXep(p, n);
//	p[1].tgdapung = 0;
//	p[1].tgcho = 0;
//	p[1].tdbatdauxuly = p[1].tgcho + p[1].tdden;
//	p[1].tdhoanthanh = p[1].tdbatdauxuly + p[1].tgxuly;
//	p[1].tghoanthanh = p[1].tdhoanthanh - p[1].tdden;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			p[i].tdbatdauxuly = p[j].tdhoanthanh;
//			p[i].tdhoanthanh = p[i].tdbatdauxuly + p[i].tgxuly;
//			p[i].tgdapung = p[i].tdbatdauxuly - p[i].tdden;
//			p[i].tgcho = p[i].tdhoanthanh - p[i].tgxuly - p[i].tdden;
//			p[i].tghoanthanh = p[i].tdhoanthanh - p[i].tdden;
//		}
//	}
//}