/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int uscln (int a, int b)
{
	for (int uc = a; uc >= 1; uc--)
	{
		if (a % uc == 0 && b % uc == 0)
		return uc;
	}
	return 1;
}
int main ()
{
	int a, b;
	printf("Nhap a: "); scanf_s("%d", &a);
	printf("Nhap b: "); scanf_s("%d", &b);
	printf("USCLN(%d,%d) la: %d\n", a, b, uscln(a, b));
	return 0;
	getch ();
}*/