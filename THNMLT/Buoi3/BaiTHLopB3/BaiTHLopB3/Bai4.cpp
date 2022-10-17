/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
int main ()
{
	int n, i;
	printf("Nhap gia tri can kiem tra: "); scanf_s("%d", &n);
	if (n < 2)
	{
		printf("Khong phai la so nguyen to");
	}
	else
	{
		for (i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				printf("Khong phai la so nguyen to\n");
		printf("La so nguyen to");
	}
	return 0;
	getch ();
}*/