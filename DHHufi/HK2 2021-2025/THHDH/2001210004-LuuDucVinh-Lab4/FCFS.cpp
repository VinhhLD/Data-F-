//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//struct Process
//{
//	int pid, tgcho, tgxuly, tong_tgian;
//};
//void NhapTT(Process p[], int &n);
//void XuatTT(Process p[], int n);
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
//		case 1:
//		{
//				  NhapTT(p, n);
//				  break;
//		}
//		case 2:
//		{
//				  XuatTT(p, n);
//				  break;
//		}
//		}
//	} while (chon != 0);
//	return 0;
//	getch ();
//}
//void NhapTT(Process p[], int &n)
//{
//	printf("Nhap so luong tien trinh: "); scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("Nhap ma dinh danh tien trinh [%d]: ", i); scanf_s("%d", &p[i].pid);
//		printf("Nhap tgian xu ly cua tien tinh [%d]: ", i); scanf_s("%d", &p[i].tgxuly);
//	}
//	p[1].tgcho = 0;
//	p[1].tong_tgian = p[1].tgxuly;
//}
//void XuatTT(Process p[], int n)
//{
//	int tong_tgcho = 0, tong_tghoantat = 0, tg_cho_tb, tg_hoantat_tb;
//	for (int i = 2; i <= n; i++)
//	{	
//		for (int j = 1; j < i; j++)
//		{
//			p[i].tgcho = p[j].tgcho + p[j].tgxuly;
//		}
//		tong_tgcho = tong_tgcho + p[i].tgcho;
//		p[i].tong_tgian = p[i].tgcho + p[i].tgxuly;
//		tong_tghoantat = tong_tghoantat + p[i].tong_tgian;
//	}
//	tg_hoantat_tb = tong_tghoantat / n;
//	tg_cho_tb = tong_tgcho / n;
//	printf("%10s%10s%10s%10s\n", "TT", "TG-XULY", "TG-CHO", "TONG");
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%10d%10d%10d%10d\n", p[i].pid, p[i].tgxuly, p[i].tgcho, p[i].tong_tgian);
//	}
//	printf("Thoi gian cho trung binh: %d\n", tg_cho_tb);
//	printf("Thoi gian hoan tat trung binh: %d\n", tg_hoantat_tb);
//}