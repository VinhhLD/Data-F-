//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//struct Process
//{
//	char pid[11];
//	int tdden, tgxuly, tgdapung, tgcho, tghoanthanh, tdbatdauxuly, tdhoanthanh;
//};
//void NhapTT(Process p[], int &n, int &q);
//void XuatTT(Process p[], int n);
//void XuLy (Process p[], int n, int q);
//int main()
//{
//	Process p[MAX];
//	int n, q, chon;
//	do
//	{
//		printf("1.Nhap tien trinh\n");
//		printf("2.Xuat tien trinh\n");
//		printf("Chon chuc nang: "); scanf_s("%d", &chon);
//		switch (chon)
//		{
//			case 1:
//			{
//				NhapTT(p, n, q);
//				break;
//			}
//			case 2:
//			{
//				XuLy(p, n, q);
//				XuatTT(p, n);
//				break;
//			}
//		}
//	} 
//	while (chon != 0);
//	return 0;
//	getch();
//}
//void NhapTT(Process p[], int &n, int &q)
//{
//	printf("Nhap so luong tien trinh: "); scanf_s("%d", &n);
//	printf("Nhap quantum: "); scanf_s("%d", &q);
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
//void XuLy (Process p[], int n, int q)
//{
//	Process *s;
//	s = (Process *)malloc(n*sizeof(Process));
//	s = p;
//	int mocq = 0, check = 999999, sum = 1;
//	p[1].tgdapung = 0;
//	for (int i = check; i < sum;)
//	{
//		s[i].tgxuly -= q;
//		mocq += q;
//		if ((s[i].tgxuly + q) == p[i].tgxuly)
//		{
//			p[i].tdbatdauxuly = mocq;
//		}
//		if (s[i].tgxuly >= 0 && s[i].tgxuly <= q)
//		{
//			p[i].tdhoanthanh = mocq + s[i].tgxuly;
//			p[i].tgcho = p[i].tdhoanthanh - p[i].tgxuly - p[i].tdden;
//			p[i].tgdapung = p[i].tdbatdauxuly - p[i].tdden;
//			p[i].tghoanthanh = p[i].tdhoanthanh - p[i].tdden;
//		}
//	}
//}