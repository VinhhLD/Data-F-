/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int socp (int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i < n; i++)
		if (i * i == n)
			return 1;
	return 0;
}
int main ()
{
	int n, dem = 0;
	printf("Nhap n: "); scanf_s("%d", &n);
	for (int i = 1; i < n; i++)
		if (socp(i))
			dem++;
	printf("Dem cac so chinh phuong nho hon %d la: %d\n", n, dem);
	return 0;
	getch ();
}*/