/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, a, b, c, dem = 0;
	do
	{
	printf("Nhap n: "); scanf_s("%d", &n);
	a = n / 100;
	b = n % 100 / 10;
	c = n % 10;
	dem++;
	}
	while ( n >= 100 && n < 1000 && a != b && b != c && a != c);
	printf("So luong cac so vua nhap la: %d\n", dem);
	return 0;
	getch ();
}*/