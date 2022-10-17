//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//int CSC (int n, int a, int r);
//int CSN (int n, int a, int q);
//long TinhUn (int n);
//int main ()
//{
//	int chon;
//	do
//	{
//	printf("1.Cap so cong\n");
//	printf("2.Cap so nhan\n");
//	printf("3.Tinh Un\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			int n, a, r;
//			printf("Nhap so hang dau a: "); scanf_s("%d", &a);
//			printf("Nhap cong sai r: "); scanf_s("%d", &r);
//			printf("Nhap PT thu n can tim gia tri: "); scanf_s("%d", &n);
//			printf("Gia tri thu %d cua csc la: %d\n", n, CSC(n, a, r));
//			break;
//		}
//	case 2:
//		{
//			int n, a, q;
//			printf("Nhap so hang dau a: "); scanf_s("%d", &a);
//			printf("Nhap cong boi q: "); scanf_s("%d", &q);
//			printf("Nhap PT thu n can tim gia tri: "); scanf_s("%d", &n);
//			printf("Gia tri thu %d cua csn la: %d\n", n, CSN(n, a, q));
//			break;
//		}
//	case 3:
//		{
//			int n;
//			printf("Nhap n: "); scanf_s("%d", &n);
//			printf("Tong U(%d) la: %d\n", n, TinhUn(n));
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//int CSC (int n, int a, int r)
//{
//	if (n == 1) return a;
//	return r + CSC(n - 1, a, r);
//}
//int CSN (int n, int a, int q)
//{
//	if (n == 1) return a;
//	return q * CSN(n - 1, a, q);
//}
//long TinhUn (int n)
//{
//	if (n < 6) return n;
//	long S = 0;
//	for (int i = 5; i > 0; i--)
//	{
//		S += TinhUn(n - i);
//	}
//	return S;
//}