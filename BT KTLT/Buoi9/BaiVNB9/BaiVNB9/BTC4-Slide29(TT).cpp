//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//long tinhTong (int n);
//long TinhAn (int n);
//int main ()
//{
//	int chon;
//	do
//	{
//	printf("1.Tinh day A(n)\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			int n;
//			printf("Nhap n: "); scanf_s("%d", &n);
//			printf("A(%d): %d\n", n, TinhAn(n));
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//long tinhTong (int n)
//{
//	if (n == 0) return 1;
//	return (n -	1) + tinhTong(n - 1);
//}
//
//long TinhAn (int n)
//{
//	if (n == 1) return 1;
//	return TinhAn(n - 1) + tinhTong(n);
//}