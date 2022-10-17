/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
void NhapM2C (int a[][MAX], int &m, int &n);
void XuatM2C (int a[][MAX], int m, int n);
int TimChuSoDauLe (int n);
int TinhTongCacChuSoDauLe (int a[][MAX], int m, int n);
int KiemTraHoanThien (long n);
void LietKeSHT (int a[][MAX], int m, int n);
void TinhTong_TrenDongK (int a[][MAX], int n, int &x);
int Demsolanxuathienx (int a[][MAX], int m, int n, int &x);
int KT_SNT (long n);
void DemSL_Chan_Le_Am_Duong_NguyenTo (int a[][MAX], int m, int n);
int TinhTongCacGiaTriTrenBien (int a[][MAX], int m, int n);
int TinhTongCacPT_LonHonTriTuyetDoiCuaPTLienSauNo (int a[], int n);
int main ()
{
	int a[MAX][MAX], m, n, chon;
	do
	{
	printf("1.Nhap mang 2 chieu\n");
	printf("2.Xuat mang\n");
	printf("3.Tinh tong cac pt co chu so dau la chu so le\n");
	printf("4.Liet ke cac so hoan thien trong ma tran\n");
	printf("5.Tinh tong cac pt lon hon tri tuyet doi cua pt lien sau no\n");
	printf("6.Tinh tong gia tri tren dong k ma tran\n");
	printf("7.Tinh tong cac gia tri nam tren bien cua ma tran\n");
	printf("8.Dem tuan suat xuat hien cua 1 gia tri x trong ma tran\n");
	printf("9.Dem so luong cac pt la so chan, so le, so am, so duong, so nguyen to\n");
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
			printf("Tong cac pt co chu so dau la le: %d\n", TinhTongCacChuSoDauLe(a, m, n));
			break;
		}
	case 4:
		{
			LietKeSHT(a, m, n);
			break;
		}
	case 5:
		{
			printf("Tong bang: %d\n", TinhTongCacPT_LonHonTriTuyetDoiCuaPTLienSauNo(a, n));
			break;
		}
	case 6:
		{
			int x;
			TinhTong_TrenDongK(a, n, x);
			break;
		}
	case 7:
		{
			printf("Tong cac gia tri tren bien la: %d\n", TinhTongCacGiaTriTrenBien(a, m, n));
			break;
		}
	case 8:
		{
			int x;
			printf("So lan xuat hien gia tri %d trong mang la: %d\n", x, Demsolanxuathienx(a, m, n, x));
			break;
		}
	case 9:
		{
			DemSL_Chan_Le_Am_Duong_NguyenTo(a, m, n);
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
int TimChuSoDauLe (int n)
{
	int a;
	while (n > 0)
	{
		a = n;
		n = n / 10;
	}
	if (a % 2 == 0)
	{
		return 0;
	}
	return 1;
}
int TinhTongCacChuSoDauLe (int a[][MAX], int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (TimChuSoDauLe(a[i][j]) == 1)
			{
				Tong = Tong + a[i][j];
			}
		}
	}
	return Tong;
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
void LietKeSHT (int a[][MAX], int m, int n)
{
	int dem = 0;
	printf("Cac so hoan thien trong ma tran:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraHoanThien(a[i][j]) == 1)
			{
				dem++;
				printf("%5d", a[i][j]);
			}
		}
	}
	printf("\n");
	if (dem == 0)
	{
		printf("Khong co so hoan thien nao\n");
	}
}
void TinhTong_TrenDongK (int a[][MAX], int n, int &x)
{
	int Tong = 0;
	printf("Nhap dong muon tinh tong: "); scanf_s("%d", &x);
	for (int j = 0; j < n; j++)
	{
		Tong = Tong + a[x][j];
	}
	printf("Tong cac PT tren dong %d trong mang la: %d\n", x, Tong);
}
int Demsolanxuathienx (int a[][MAX], int m, int n, int &x)
{
	int dem = 0;
	printf("Nhap gia tri can tim: "); scanf_s("%d", &x);
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
void DemSL_Chan_Le_Am_Duong_NguyenTo (int a[][MAX], int m, int n)
{
	int demchan = 0;
	int demle = 0;
	int demam = 0;
	int demduong = 0;
	int demngto = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				demchan = demchan + a[i][j];
			}
			else if (a[i][j] % 2 != 0)
			{
				demle = demle + a[i][j];
			}
			else if (a[i][j] < 0)
			{
				demam = demam + a[i][j];
			}
			else if (a[i][j] > 0)
			{
				demduong = demduong + a[i][j];
			}
			else if (KT_SNT(a[i][j]) == 1)
			{
				demngto = demngto + a[i][j];
			}
		}
	}
	printf("So luong cac PT la chan: %d\n", demchan);
	printf("So luong cac PT la le: %d\n", demle);
	printf("So luong cac PT la am: %d\n", demam);
	printf("So luong cac PT la duong: %d\n", demduong);
	printf("So luong cac PT la so nguyen to: %d\n", demngto);
}
int TinhTongCacGiaTriTrenBien (int a[][MAX], int m, int n)
{
	int tong = 0;
	for (int j = 0; j < n; j++)
	{
		tong = tong + a[0][j];
		tong = tong + a[m - 1][j];
	}
	for (int i = 1; i < m - 1; i++)
	{
		tong = tong + a[i][0];
		tong = tong + a[i][n - 1];
	}
	return tong;
}
int TinhTongCacPT_LonHonTriTuyetDoiCuaPTLienSauNo (int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > abs(a[i + 1]))
		{
			sum += a[i];
		}
	}
	return sum;
}*/