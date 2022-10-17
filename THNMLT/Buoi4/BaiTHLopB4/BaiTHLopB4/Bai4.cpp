/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
float dientich (float a, float b, float c)
{
	float s, p;
	if (a + b > c && a + c > b && b + c > a)
	{
		p = (float)(a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
	else
		return 0;
}
int main ()
{
	float a, b, c;
	printf("Nhap 3 canh tam giac: "); scanf_s("%f%f%f", &a, &b, &c);
	if (dientich(a, b, c))
	{
		printf("La 3 canh cua tam giac\n");
		printf("Dien tich tam giac la: %.2f\n", dientich(a, b, c));
	}
	else
	{
		printf("3 canh khong tao thanh tam giac\n");
	}
	return 0;
	getch ();
}*/