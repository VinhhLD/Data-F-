/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
float TinhS2 (int n);
float TinhS3 (int n);
float TinhS4 (int n);
float TinhS6 (int n);
float TinhS7 (int n);
int dequyTinhS8 (int n);
int TinhS8 (int n);
int TinhGiaiThua (int n);
float TinhS9 (int n);
int main ()
{
	int chon;
	do
	{
	printf("1.Tinh S2\n");
	printf("2.Tinh S3\n");
	printf("3.Tinh S4\n");
	printf("4.Tinh S6\n");
	printf("5.Tinh S7\n");
	printf("6.Tinh S8\n");
	printf("7.Tinh S9\n");
	printf("8.Tinh S10\n");
	printf("9.Tinh S11\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int n;
			do
			{
			printf("Nhap n dau can: "); scanf_s("%d", &n);
			if (n < 1)
			{
				printf("Xin vui long nhap >= 1\n");
			}
			}
			while (n < 1);
			printf("Tong S2 la: %.2f\n", TinhS2(n));
			break;
		}
	case 2:
		{
			int n;
			do
			{
			printf("Nhap n: "); scanf_s("%d", &n);
			if (n == 0)
			{
				printf("Tong S3 la: 0\n");
			}
			else if (n < 0)
			{
				printf("Xin Vui long nhap n >= 0");
			}
			}
			while (n < 0);
			printf("Tong S3 la: %.2f\n", TinhS3(n));
			break;
		}
	case 3:
		{
			int n;
			do
			{
			printf("Nhap n: "); scanf_s("%d", &n);
			if (n < 0)
			{
				printf("Vui long nhap n >= 0\n");
			}
			}
			while (n < 0);
			printf("Tong S4 la: %.2f\n", TinhS4(n));
			break;
		}
	case 4:
		{
			int n;
			do
			{
				printf("Nhap n: "); scanf_s("%d", &n);
				if (n <= 0)
				{
					printf("Vui long nhap n > 0\n");
				}
			}
			while (n <= 0);
			printf("Tong S6 la: %.2f\n", TinhS6(n));
			break;
		}
	case 5:
		{
			int n;
			do
			{
			printf("Nhap n: "); scanf_s("%d", &n);
			if (n == 0)
			{
				printf("Tong S7 la: 0\n");
			}
			else if (n < 0)
			{
				printf("Xin vui long nhap n >= 0\n");
			}
			}
			while (n < 0);
			printf("Tong S7 la: %.2f\n", TinhS7(n));
			break;
		}
	case 6:
		{
			int n;
			do
			{
			printf("Nhap n: "); scanf_s("%d", &n);
			if (n < 0)
				{
					printf("Xin vui long nhap n >= 0");
				}
			}
			while (n < 0);
			printf("Tong S8 la: %d\n", TinhS8(n));
			break;
		}
	case 7:
		{
			int n;
			do
			{
			printf("Nhap n: "); scanf_s("%d", &n);
			if (n < 0)
			{
				printf("Xin vui long nhap n >= 0\n");
			}
			}
			while (n < 0);
			printf("Tong S9 la: %.2f\n", TinhS9(n));
			break;
		}

	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
float TinhS2 (int n)
{
	if (n == 1)
		return sqrt((float)2);
	return sqrt(2 + TinhS2(n - 1));
}
float TinhS3 (int n)
{
	if (n == 1)
		return 1.0 / 2;
	return (float)n / (n + 1) + TinhS3(n - 1);
}
float TinhS4 (int n)
{
	if (n == 0)
		return 1;
	return (float)1 / (2 * n + 1) + TinhS4(n - 1);
}
float TinhS6 (int n)
{
	if (n == 1)
		return (float)1 / (1 * 2 * 3);
	return (float)1 / (n * (n + 1) * (n + 2)) + TinhS6(n - 1);
}
float TinhS7 (int n)
{
	if (n == 1)
		return 1;
	return pow((float)n, 2) + TinhS7(n - 1);
}
int dequyTinhS8 (int n)
{
	if (n == 1)
		return 1;
	return dequyTinhS8(n - 1) + n;
}
int TinhS8 (int n)
{
	if (n == 1)
		return 1;
	return dequyTinhS8(n) + TinhS8(n - 1);
}
int TinhGiaiThua (int n)
{
	if (n <= 1)
		return 1;
	return n * TinhGiaiThua(n - 1);
}

float TinhS9 (int n)
{
	if (n == 0)
		return -1;
	return pow((float)(-1), n) * ((2 * n - 1) + (2 * n) / (2 * TinhGiaiThua(n))) + TinhS9(n - 1);
}*/