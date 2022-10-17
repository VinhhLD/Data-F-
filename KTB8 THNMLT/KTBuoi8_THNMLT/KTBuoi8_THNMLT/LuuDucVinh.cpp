#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
void nhapMaTranVuong (int a[][MAXSIZE], int &n);
void xuatMaTranVuong (int a[][MAXSIZE], int n);
void xuatcacPTchantamgiactren (int a[][MAXSIZE], int n);
void Timvitrilonnhat (int a[][MAXSIZE], int n);
void Sapxep(int a[][100], int n);
int main ()
{
	int a[MAXSIZE][MAXSIZE], n;
	int chon;
	do
	{
	printf("\n1.Nhap xuat mang 2 chieu vuong");
	printf("\n2.Tinh tong cac phan tu chan thuoc tam giac tren");
	printf("\n3.Xuat cac dong tang dan");
	printf("\n4.Sap xep ma tran theo quy tac dong tang dan");
	printf("\n5.Tim vi tri lon nhat trong ma tran");
	printf("\nChon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			nhapMaTranVuong(a, n);
			printf("Mang tran vuong vua nhap la: \n");
			xuatMaTranVuong(a, n);
			break;
		}
	case 2:
		{
			xuatcacPTchantamgiactren(a, n);
			break;
		}
	case 4:
		{
			Sapxep(a, n);
			xuatMaTranVuong(a, n);
			break;
		}
	case 5:
		{
			Timvitrilonnhat(a, n);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void nhapMaTranVuong (int a[][MAXSIZE], int &n)
{
	printf("Nhap cap cua ma tran: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void xuatMaTranVuong (int a[][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}
void xuatcacPTchantamgiactren (int a[][MAXSIZE], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j && a[i][j] % 2 == 0)
			{
				tong = tong + a[i][j];
			}
		}
	}
	printf("Tong cac PT chan thuoc tam giac tren la: %d\n", tong);
}
void Timvitrilonnhat (int a[][MAXSIZE], int n)
{
	int max = a[0][0];
	int maxdong;
	int maxcot;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				maxdong = i;
				maxcot = j;
			}
		}
	}
	printf("Vi tri co gia tri lon nhat trong ma tran: Dong %d cot %d", maxdong, maxcot);
}
void Sapxep(int a[][100], int n)
{
   for(int k = 0; k < n ; k++)
      for(int i = 0; i < n - 1; i++)
      for(int j = n - 1; j > i ; j--)
      if(a[k][j]<a[k][j-1])
      {
         int temp = a[k][j];
         a[k][j] = a[k][j-1];
         a[k][j-1] = temp;
      }
}