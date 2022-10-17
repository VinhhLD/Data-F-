/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int KhuDeQuyFi (int n);
int main ()
{
	int chon;
	do
	{
	printf("1.Tim so Fibonacci lon nhat nho hon so nguyen n\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int n;
			again: printf("Nhap n: "); scanf_s("%d", &n);
			if (n <= 0) goto again;
			printf("\n\tSo Fibonacci lon nhat < %d la %d\n", n, KhuDeQuyFi(n));
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
int KhuDeQuyFi (int n)
{
	int F = 0, F1 = 1, F2 = 1;
	if (n == 1) return 0;
	if (n == 2) return 1;
	while (F1 + F2 < n)
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
	}	
	return F;
}*/