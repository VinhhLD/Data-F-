//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//int Tinhgiaithua (int n);
//int TinhSoFibonacci (int n);
//long U (int n);
//long U2 (int n);
//long G (int n);
//int main ()
//{
//	int n;
//	printf("Nhap n: "); scanf_s("%d", &n);
//	printf("%d! = %d\n", n, Tinhgiaithua(n));
//	printf("So fibonacci thu %d: %d\n", n, TinhSoFibonacci(n));
//	printf("U(%d): %d\n", n, U(n));
//	printf("G(%d): %d\n", n, G(n));
//	return 0;
//	getch ();
//}
//int Tinhgiaithua (int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * Tinhgiaithua(n - 1);
//}
//int TinhSoFibonacci (int n)
//{
//	int kq;
//	if (n < 2)
//	{
//		kq = 1;
//	}
//	else
//		kq = TinhSoFibonacci(n - 1) + TinhSoFibonacci(n - 2);
//	return kq;
//}
//long U (int n)
//{
//	if (n < 6) return n;
//	long S = 0;
//	for (int i = 5; i > 0; i--)
//	{
//		S = S + U(n - i);
//	}
//	return S;
//}
//long U2 (int n)
//{ 
//	if (n < 5) return n;
//	return U(n - 1) + G(n - 2);
//}
//long G (int n)
//{ 
//	if (n < 8) return n - 3;
//	return U2(n - 1) + G(n - 2);
//}