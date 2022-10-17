#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
void kiemtrascp (long x)
{
	if ((sqrt((float)x)) == (int) sqrt((float)x))
		printf("\n%ld la so chinh phuong\n", x);
	else
		printf("\n%ld khong phai la so chinh phuong\n", x);
}
int main ()
{
	long x;
	printf("Nhap x: "); scanf_s("%ld", &x);
	kiemtrascp(x);
	return 0;
	getch ();
}