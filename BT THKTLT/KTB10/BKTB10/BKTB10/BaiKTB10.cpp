#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
struct SinhVien
{
	char maKH[6];
	char tenKH[11];
	char sdt[11];
	int namsinh;
};
void menuBai2 ();
void NhapMang (int a[], int &n);
void XuatMang (int a[], int n);
int DXDQ (int a[], int m, int n);
void inChuoiNguoc(int a[],int n);
void menuBai3 ();
int tinhTongDauNgoac (int n);
int TinhXn (int n);
void TachSo_DeQuy (int n);
void menuBai4 ();
void docFile (FILE *&f, SinhVien dsSV[], int &n);
void xuatFile (SinhVien dsSV[], int n);
void swap (SinhVien &x, SinhVien &y);
void Sapxepmang_TangdanTheoSDT (SinhVien dsSV[], int n);
int BinarySearch (SinhVien dsSV[], int n, char *x);
int main ()
{
	int chon;
	do
	{
		printf("1.Bai 2\n");
		printf("2.Bai 3\n");
		printf("3.Bai 4\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				menuBai2();
				break;
			}
		case 2:
			{
				menuBai3();
				break;
			}
		case 3:
			{
				menuBai4();
				break;
			}
		}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void menuBai2 ()
{
	int a[MAX], n, chon1;
	do
	{
		printf("1.Nhap mang\n");
		printf("2.Xuat mang\n");
		printf("3.Kiem tra PT cua mang co doi xung hay khong\n");
		printf("4.In cac PT cua mang theo thu tu tu cuoi den dau\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon1);
		switch (chon1)
		{
		case 1:
			{
				NhapMang(a, n);
				break;
			}
		case 2:
			{
				XuatMang(a, n);
				break;
			}
		case 3:
			{
				int m = n / 2;
				int b = DXDQ(a, m, n);
				if (b == 0)
				{
					printf("- Mang khong doi xung\n");
				}
				else
				{
					printf("- Mang doi xung\n");
				}
				break;
			}
		case 4:
			{
				inChuoiNguoc(a, n);
				printf("\n");
				break;
			}
		}
	}
	while (chon1 != 0);
}
void NhapMang (int a[], int &n)
{
	printf("Nhap so luong pt mang: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap pt a[%d]: ", i); scanf_s("%d", &a[i]);
	}
}
void XuatMang (int a[], int n)
{
	printf("Xuat mang:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
}
int DXDQ (int a[], int m, int n)
{
	if (m > 0)
	{
		if (a[m] != a[n - m - 1]) return 0;
			DXDQ(a, m - 1, n);
	}
	return 1;
}
void inChuoiNguoc(int a[],int n)
{
	if (n == 1)
		printf("%5d", a[0]);
	else
	{
		printf("%5d", a[n - 1]);
		inChuoiNguoc(a, n - 1);
	}
}
void menuBai3 ()
{
	int n, chon1;
	do
	{
		printf("1.Tinh S(n)\n");
		printf("2.Tinh X(n)\n");
		printf("3.In tung chu so cua so nguyen duong\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon1);
		switch (chon1)
		{
		case 1:
			{
				printf("Nhap n dau ngoac: "); scanf_s("%d", &n);
				printf("KQ la: %d\n", tinhTongDauNgoac(n));
				break;
			}
		case 2:
			{
				printf("Nhap n: "); scanf_s("%d", &n);
				printf("X(%d): %d\n", n, TinhXn(n));
				break;
			}
		case 3:
			{
				do
				{
				printf("Nhap n: "); scanf_s("%d", &n);
				}
				while (n < 0);
				printf("Tung chu so cua so nguyen duong %d la:\n", n);
				TachSo_DeQuy(n);
				printf("\n");
				break;
			}
		}
	}
	while (chon1 != 0);
}
int tinhTongDauNgoac (int n)
{
	if (n == 1)
		return 3;
	return (3 + tinhTongDauNgoac(n - 1));
}
int TinhXn (int n)
{
	if (n == 1 || n == 2)
		return 1;
	return (n - 1) * TinhXn(n - 1) + (n - 2) * TinhXn(n - 2);
}
void TachSo_DeQuy (int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		int s = n % 10;
		printf("%5d", s);
		TachSo_DeQuy(n / 10);
	}
}
void menuBai4 ()
{
	FILE *f;
	SinhVien dsSV[MAX];
	int n, chon1;
	do
	{
		printf("1.Doc File\n");
		printf("2.Xuat File\n");
		printf("3.Sap xep mang sinh vien tang dan theo SDT\n");
		printf("4.Tim kiem thong tin khach hang theo SDT bang BinarySearch\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon1);
		switch (chon1)
		{
		case 1:
			{
				docFile(f, dsSV, n);
				break;
			}
		case 2:
			{
				xuatFile(dsSV, n);
				break;
			}
		case 3:
			{
				Sapxepmang_TangdanTheoSDT(dsSV, n);
				break;
			}
		case 4:
			{
				char x[11];
				printf("Nhap SDT khach hang can tim: ");
				fflush(stdin);
				fgets(x, sizeof(x), stdin);
				int b = BinarySearch(dsSV, n, x);
				if (b == -1)
				{
					printf("Khong tim thay khach hang nay\n");
				}
				else
				{
					printf("%10s%20s%15s%15s\n", "MAKH", "TENKH", "SDT", "NAM SINH");
					printf("%10s%20s%15s%15d\n", dsSV[b].maKH, dsSV[b].tenKH, dsSV[b].sdt, dsSV[b].namsinh);
				}
				break;
			}
		}
	}
	while (chon1 != 0);
}
void docFile (FILE *&f, SinhVien dsSV[], int &n)
{
	f = fopen("filesinhvien.txt", "rt");
	if (!f)
	{
		printf("Loi doc file\n");
		return;
	}
	fscanf(f, "%d", &n);
	fgetc(f);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%[^#]%*c%[^#]%*c%[^#]%*c%d\n", &dsSV[i].maKH, &dsSV[i].tenKH, &dsSV[i].sdt, &dsSV[i].namsinh);
	}
	fclose(f);
}
void xuatFile (SinhVien dsSV[], int n)
{
	printf("%10s%20s%15s%15s\n", "MAKH", "TENKH", "SDT", "NAM SINH");
	for (int i = 0; i < n; i++)
	{
		printf("%10s%20s%15s%15d\n", dsSV[i].maKH, dsSV[i].tenKH, dsSV[i].sdt, dsSV[i].namsinh);
	}
}
void swap (SinhVien &x, SinhVien &y)
{
	SinhVien temp = x;
	x = y;
	y = temp;
}
void Sapxepmang_TangdanTheoSDT (SinhVien dsSV[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(dsSV[i].sdt, dsSV[j].sdt) > 0)
			{
				swap(dsSV[i], dsSV[j]);
			}
		}
	}
}
int BinarySearch (SinhVien dsSV[], int n, char *x)
{
	int left = 0, right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (strcmp(dsSV[mid].sdt, x) == 0)
			return mid;
		else
			if (strcmp(dsSV[mid].sdt, x) < 0)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
	}
	return -1;
}