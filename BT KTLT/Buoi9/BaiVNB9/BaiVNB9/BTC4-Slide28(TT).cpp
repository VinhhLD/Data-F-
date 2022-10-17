//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//long TinhFn (int n);
//int main ()
//{
//	int chon;
//	do
//	{
//	printf("1.Tinh f(5)\n");
//	printf("2.Tinh f(n)\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			printf("F(5): %d\n", TinhFn(5));
//			break;
//		}
//	case 2:
//		{
//			int n;
//			printf("Nhap n: "); scanf_s("%d", &n);
//			printf("F(%d): %d\n", n, TinhFn(n));
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//long TinhFn (int n)
//{
//	if(n == 1) return n;
//    if(n % 2 == 0) return 2 * TinhFn(n / 2);
//	else return 2 * TinhFn((n - 1) / 2) + 3 * TinhFn((n + 1) / 2);
//}