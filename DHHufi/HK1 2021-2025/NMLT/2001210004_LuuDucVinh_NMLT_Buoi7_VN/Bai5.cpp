/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int stn (int n)
{
	long tong = 0;
	printf("Tong cac so tu nhien nho hon %d la: ", n);
	for (int i = 1; i < n; i++)
	{
		tong = tong + i;
	}
	printf("%d\n", tong);
	return 1;
}
int main ()
{
	int n;
	printf("Nhap n: "); scanf_s("%d", &n);
	stn(n);
	return 0;
	getch ();
}*/
