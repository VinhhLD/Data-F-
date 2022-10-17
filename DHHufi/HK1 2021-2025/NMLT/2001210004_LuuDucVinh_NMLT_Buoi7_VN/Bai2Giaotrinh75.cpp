/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
long kiemtrasnt (long x)
{
	int dem = 0;
	for (int i = 1; i <= x;  i ++)
	{
		if (x % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main ()
{
	long x;
	printf("Nhap x: "); scanf_s("%ld", &x);
	if (kiemtrasnt(x) == 1)
		printf("%ld la so nguyen to\n", x);
	else
		printf("%ld khong phai la so nguyen to\n", x);
	return 0;
	getch ();
}*/