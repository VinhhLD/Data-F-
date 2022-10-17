/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void kiemtrasohh (long x)
{
	long tong = 0;
	for(int i = 1; i < x; i++)
	{
		if ( x % i == 0)
			tong = tong + i;
	}
	if (tong == x)
	{
		printf("%d la so hoan hao\n", x);
	}
	else
	{
		printf("%d khong phai la so hoan hao\n", x);
	}
}
int main ()
{
	long x;
	printf("Nhap x: "); scanf_s("%ld", &x);
	kiemtrasohh(x);
	return 0;
	getch ();
}*/