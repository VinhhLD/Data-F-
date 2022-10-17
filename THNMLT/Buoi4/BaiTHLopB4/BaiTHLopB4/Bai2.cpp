/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int SNT (int x)
{
	if (x < 2)
		return 0;
	for (int i = 2; i <= sqrt((float)x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main ()
{
	int n;
	printf("Nhap so can kiem tra: "); scanf_s("%d", &n);
	if (SNT(n))
		printf("La SNT\n");
	else
		printf("Khong phai la SNT\n");
	return 0;
	getch ();
}*/