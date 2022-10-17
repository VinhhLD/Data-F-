/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void tongtich (int a, int b, int c, int d, int e, int f)
{
	long double tong = 0;
	long double tich = 0;
	tong = ((float)a / b) + ((float)c / d) + ((float)d / f);
	printf("Tong cua %d/%d + %d/%d + %d/%d la: %.2lf\n", a, b, c, d, e, f, tong);
	tich = ((float)a / b) * ((float)c / d) * ((float)d / f);
	printf("Tich cua %d/%d + %d/%d + %d/%d la: %.2lf\n", a, b, c, d, e, f, tich);
}
int main ()
{
	int a, b, c, d, e, f;
	do
	{
	printf("Nhap a/b: "); scanf_s("%d%d", &a, &b);
	printf("Nhap c/d: "); scanf_s("%d%d", &c, &d);
	printf("Nhap e/f: "); scanf_s("%d%d", &e, &f);
	}
	while (b <= 0 && d <= 0 && f <= 0);
	tongtich(a, b, c, d, e, f);
	return 0;
	getch ();
}*/