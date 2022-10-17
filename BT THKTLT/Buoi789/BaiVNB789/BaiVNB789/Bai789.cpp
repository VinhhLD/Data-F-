#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int ucln(int a, int b);
int BinarySearch_Recursive (int a[], int left, int right, int x);
int TinhS1 (int n);
float TinhS2 (int n);
float TinhS3 (int n);
float TinhS4 (int n);
int TinhS5 (int n);
int TinhGiaiThua (int n);
float TinhS6 (int n);
float TinhS7 (int n);
void move(int n, char A, char B, char C);
int main ()
{
	int chon;
	do
	{
	printf("1.Tim uoc chung lon nhat cua 2 so nguyen duong a, b\n");
	printf("2.Tinh cac S(n)\n");
	printf("3.Tim kiem PT tren mang da sap xep bang phuong phap nhi phan de quy\n");
	printf("4.Bai toan toa thap Ha Noi\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int a, b;
			printf("Nhap a, b: "); scanf_s("%d%d", &a, &b);
			printf("UCLN(a, b) la: %d", ucln(a, b));
		}
	case 2:
		{
			int chon;
			do
			{
				printf("1.Tinh S1\n");
				printf("2.Tinh S2\n");
				printf("3.Tinh S3\n");
				printf("4.Tinh S4\n");
				printf("5.Tinh S5\n");
				printf("6.Tinh S6\n");
				printf("7.Tinh S7\n");
				printf("Chon chuc nang: "); scanf_s("%d", &chon);
				switch (chon)
				{
					case 1:
						{
							int n;
							do
							{
								printf("Nhap n: "); scanf_s("%d", &n);
								if (n < 1)
								{
									printf("Xin vui long nhap >= 1\n");
								}
							}
							while (n < 1);
							printf("Tong S1 la: %d\n", TinhS1(n));
							break;
						}
					case 2:
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
					case 3:
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
					case 4:
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
					case 5:
						{
							int n;
							do
							{
								printf("Nhap n: "); scanf_s("%d", &n);
								if (n < 1)
								{
									printf("Vui long nhap n >= 1\n");
								}
							}
							while (n < 0);
							printf("Tong S5 la: %d\n", TinhS5(n));
							break;
						}
					case 6:
						{
							int n;
							do
							{
								printf("Nhap n: "); scanf_s("%d", &n);
								if (n < 1)
								{
									printf("Vui long nhap n >= 1\n");
								}
							}
							while (n < 0);
							printf("Tong S6 la: %.3f\n", TinhS6(n));
							break;
						}
					case 7:
						{
							int n;
							do
							{
								printf("Nhap n: "); scanf_s("%d", &n);
								if (n < 1)
								{
									printf("Vui long nhap n >= 1\n");
								}
							}
							while (n < 0);
							printf("Tong S7 la: %.3f\n", TinhS7(n));
							break;
						}
				}
			}
			while (chon != 0);
			break;
		}
	case 3:
		{
			int n;
			int *a;
			int x;
			printf("Nhap so luong pt cua mang: "); scanf_s("%d", &n);
			a = (int *)malloc(n*sizeof(int));
			printf("Nhap pt mang da duoc sap xep:\n");
			for (int i = 0; i < n; i++)
			{
				printf("Nhap pt a[%d]: ", i); scanf_s("%d", &a[i]);
			}
			printf("Xuat mang: \n");
			for (int i = 0; i < n; i++)
			{
				printf("%5d", a[i]);
			}
			printf("\nNhap pt x muon tim trong mang: "); scanf_s("%d", &x);
			if (BinarySearch_Recursive(a, 0, n - 1, x) == -1)
			{
				printf("- Khong tim thay PT trong mang\n");
			}
			else
			{
				printf("Tim thay PT %d trong mang o vi tri: %d\n", x, BinarySearch_Recursive(a, 0, n - 1, x));
			}
			break;
		}
	case 4:
		{
			int n;
			printf("Nhap vao so dia N ma ban muon tim cach giai: "); scanf_s("%d", &n);
			printf("Thu tu dich chuyen cac vi tri A B C la: \n");
			move(n, 'A', 'B', 'C');
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
int ucln(int a, int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a % b);
}
int BinarySearch_Recursive (int a[], int left, int right, int x)
{
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (a[mid] == x)
		return mid;
	else if (a[mid] < x)
		return BinarySearch_Recursive(a,  mid + 1, right, x);
	else
		return BinarySearch_Recursive(a,  left, mid - 1, x);
}
int TinhS1 (int n)
{
	if (n <= 1)
		return 1;
	return n + TinhS1(n - 1);
}
float TinhS2 (int n)
{
	if (n == 1)
		return sqrt((float)5);
	return sqrt(5 + TinhS2(n - 1));
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
int TinhS5 (int n)
{
	if (n == 1)
		return 2;
	return n * (n + 1) + TinhS5(n - 1);
}
int TinhGiaiThua (int n)
{
	if (n <= 1)
		return 1;
	return n * TinhGiaiThua(n - 1);
}
float TinhS6 (int n)
{
	if (n == 1)
		return ((1 * TinhGiaiThua(2)) / (2 + sqrt((float)3)));
	return (n * TinhGiaiThua(n + 1)) / ((n + 1) + sqrt((float)n + 2)) + TinhS6(n - 1);
}
float TinhS7 (int n)
{
	if (n == 1)
		return ((1 + sqrt((float)3)) / (2 + sqrt((float)TinhGiaiThua(3))));
	return TinhS7(n - 1) + (n + sqrt((float)2 * n + 1)) / ((n + 1) + sqrt((float)TinhGiaiThua(n + 2)));
}
void move(int n, char A, char B, char C)
 {
      if(n == 1)
	  {
        printf("%c ==> %c\n", A, C);
      }
      else
	  {        
        move(n - 1, A, C, B);
        printf("%c ==> %c\n", A, C);
        move(n - 1, B, A, C);
      }
 }