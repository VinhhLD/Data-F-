/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
void NhapM2C (int a[][MAX], int &m, int &n);
void XuatM2C (int a[][MAX], int m, int n);
int TongCot (int a[][MAX], int i, int n);
void CacCot_TongNhoNhat (int a[][MAX], int m, int n);
int KiemTraHoanThien (long n);
void LietKe_DongNhieuSoHTNhat (int a[][MAX], int m, int n);
void LietKe_DongToanChan (int a[][MAX], int m, int n);
int DemSoLanXuatHien (int a[][MAX], int m, int n, int x);
int LietKe_GiaTriXuatHienNhieuNhat (int a[][MAX], int m, int n);
void Tim_SNT_NhoNhat (int a[][MAX], int m, int n);
int KT_SNT (long n);
int MaxdongK (int a[][MAX], int &k, int n);
int MindongK (int a[][MAX], int &k, int n);
int MaxcotK (int a[][MAX], int &k, int m);
int MincotK (int a[][MAX], int &k, int m);
int main ()
{
	int a[MAX][MAX], m, n, chon;
	do
	{
		printf("1.Nhap mang 2 chieu\n");
		printf("2.Xuat mang\n");
		printf("3.Liet ke cac cot co tong nho nhat trong ma tran\n");
		printf("4.Liet ke cac dong co nhieu so hoan thien nhat trong ma tran\n");
		printf("5.Liet ke chi so cac dong chua toan gia tri chan\n");
		printf("6.Tim gia tri xuat hien nhieu nhat trong ma tran\n");
		printf("7.Tim so nguyen to nho nhat trong ma tran\n");
		printf("8.Tim PT lon (nho) nhat trong dong thu k\n");
		printf("9.Tim PT lon (nho) nhat trong cot thu k\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				NhapM2C(a, m, n);
				break;
			}
		case 2:
			{
				XuatM2C(a, m, n);
				break;
			}
		case 3:
			{
				CacCot_TongNhoNhat(a, m, n);
				break;
			}
		case 4:
			{
				LietKe_DongNhieuSoHTNhat(a, m, n);
				break;
			}
		case 5:
			{
				LietKe_DongToanChan(a, m, n);
				break;
			}
		case 6:
			{
				printf("Gia tri xuat hien nhieu nhat trong ma tran la: %d\n", LietKe_GiaTriXuatHienNhieuNhat(a, m, n));
				break;
			}
		case 7:
			{
				Tim_SNT_NhoNhat(a, m, n);
				break;
			}
		case 8:
			{
				int k;
				printf("Tim PT lon nhat trong dong k\n");
				printf("PT lon nhat trong dong %d la: %d\n", k, MaxdongK(a, k, n));
				printf("Tim PT nho nhat trong dong k\n");
				printf("PT nho nhat trong dong %d la: %d\n", k, MindongK(a, k, n));
				break;
			}
		case 9:
			{
				int k;
				printf("Tim PT lon nhat trong cot k\n");
				printf("PT lon nhat trong cot %d la: %d\n", k, MaxcotK(a, k, m));
				printf("Tim PT nho nhat trong cot k\n");
				printf("PT nho nhat trong cot %d la: %d\n", k, MincotK(a, k, m));
				break;
			}
		}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void NhapM2C (int a[][MAX], int &m, int &n)
{
	printf("Nhap so dong: "); scanf_s("%d", &m);
	printf("Nhap so cot: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ",i ,j); scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatM2C (int a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int TongCot (int a[][MAX], int m, int j)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += a[i][j];
	}
	return sum;
}
void CacCot_TongNhoNhat (int a[][MAX], int m, int n)
{
	int Min = TongCot(a, m, 1);
	int c;
	for (int j = 0; j < n; j++)
	{
		if (Min > TongCot(a, m, j))
		{
			Min = TongCot(a, m, j);
		}
	}
	printf("Cac cot co tong nho nhat trong ma tran la:");
	for (int j = 0; j < n; j++)
	{
		if (Min == TongCot(a, m, j))
		{
			c = j;
			printf("%4d", c);
		}
	}
	printf("\n");
}
int KiemTraHoanThien (long n)
{
	int Tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			Tong = Tong + i;
		}
	}
	if (Tong == n)
	{
		return 1;
	}
	return 0;
}
void LietKe_DongNhieuSoHTNhat (int a[][MAX], int m, int n)
{
	int dem[MAX] = {0};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraHoanThien(a[i][j]) == 1)
			{
				dem[i]++;
			}
		}
	}
	int Max = dem[0];
	for (int i = 1; i < m; i++)
	{
		Max = (Max > dem[i]) ? Max : dem[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (Max == dem[i])
		{
			printf("Dong %d co so hoan thien nhieu nhat: %d so hoan thien\n", i, Max);
		}
	}
}
void LietKe_DongToanChan (int a[][MAX], int m, int n)
{
	int dem = 0;
	bool check = true;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				check = false;
				break;
			}
			else
			{
				check = true;
				dem++;
			}
		}
		if (check == true)
		{
			printf("Dong %d chua toan gia tri chan\n", i);
		}
	}
	if (dem == 0)
	{
		printf("Mang nay ko co dong nao chua toan gia tri chan\n");
	}
}
int DemSoLanXuatHien (int a[][MAX], int m, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				dem++;
			}
		}
	}
	return dem;
}
int LietKe_GiaTriXuatHienNhieuNhat (int a[][MAX], int m, int n)
{
	int demMax = DemSoLanXuatHien(a, m, n, a[0][0]), demMax1;
	int dong = 0, cot = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			demMax1 = DemSoLanXuatHien(a, m, n, a[i][j]);
			if (demMax < demMax1)
			{
				demMax = demMax1;
				dong = i;
				cot = j;
			}
		}
	}
	return a[dong][cot];
}
int KT_SNT (long n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return 1;
	}
	return 0;
}
void Tim_SNT_NhoNhat (int a[][MAX], int m, int n)
{
	int Min;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KT_SNT(a[i][j]) == 1)
			{
				Min = a[i][j];
				break;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KT_SNT(a[i][j]) == 1 && a[i][j] < Min)
			{
				Min = a[i][j];
			}
		}
	}
	printf("So nguyen to nhat nhat trong ma tran la: %d\n", Min);
}
int MaxdongK (int a[][MAX], int &k, int n)
{
	printf("Nhap dong K: "); scanf_s("%d", &k);
	int max = a[k][0];
	for (int j = 0; j < n; j++)
	{
		if (max < a[k][j])
		{
			max = a[k][j];
		}
	}
	return max;
}
int MindongK (int a[][MAX], int &k, int n)
{
	printf("Nhap dong K: "); scanf_s("%d", &k);
	int min = a[k][0];
	for (int j = 0; j < n; j++)
	{
		if (min > a[k][j])
		{
			min = a[k][j];
		}
	}
	return min;
}
int MaxcotK (int a[][MAX], int &k, int m)
{
	printf("Nhap cot K: "); scanf_s("%d", &k);
	int max = a[0][k];
	for (int i = 0; i < m; i++)
	{
		if (max < a[i][k])
		{
			max = a[i][k];
		}
	}
	return max;
}
int MincotK (int a[][MAX], int &k, int m)
{
	printf("Nhap cot K: "); scanf_s("%d", &k);
	int min = a[0][k];
	for (int i = 0; i < m; i++)
	{
		if (min > a[i][k])
		{
			min = a[i][k];
		}
	}
	return min;
}*/
