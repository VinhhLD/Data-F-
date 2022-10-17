/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int dem = 0;
	int n, m;
	printf("Nhap so nguyen n: "); scanf_s("%d", &n);
	m = n;
	while (n > 0)
	{
		if (n % 10 % 2 == 0)
			dem++;
		n = n / 10;
	}
	printf("Cac so chan trong %d la: %d\n", m, dem);
	return 0;
	getch ();
}*/