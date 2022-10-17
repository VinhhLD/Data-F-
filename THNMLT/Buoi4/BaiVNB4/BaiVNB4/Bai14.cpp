/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
long snt (long n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
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
	long n;
	printf("Nhap n: "); scanf_s("%d", &n);
	int dem = n;
	printf("%d so nguyen to dau tien la: ", n);
	for (long i = 1; i <= 9999999; i++)
	{
		if (snt(i))
			{
				printf("%d ", i);
				dem--;
			}
		if (dem == 0)
			break;
	}
	return 0;
	getch ();
}*/