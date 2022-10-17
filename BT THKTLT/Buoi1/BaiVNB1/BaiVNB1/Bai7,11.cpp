#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void NhapM1C (int *&a, int &n);
void nhapM1C_Random (int * &a, int &n);
void xuatM1C(int *a, int n);
void Max_M1C (int *a, int n);
int *PT_Chan_Max (int *a, int n);
int *PT_Le_Min (int *a, int n);
void XoaVT (int *a, int &n, int x);
void XoatPT_0 (int *a, int &n);
void ThemPT_SauPTFirst (int *a, int &n, int &x);
int kiemtrascp (int n);
int TongSCP (int *a, int n);
void XuatPT_CucDai (int *a, int n);
void XuatPT_CucTieu (int *a, int n);
void themPT (int *a, int &n, int &x, int &vitri);
void XoaPT (int *a, int &n, int &x);
int kiemtrachanle (int *a, int n);
void swap (int &x, int &y);
void DuaChanLenDau_LeXuongDuoi (int *a, int n);
int main ()
{
	int *a;
	int n, chon;
	do
	{
	printf("1.Nhap M1C\n");
	printf("2.Nhap M1C random\n");
	printf("3.Xuat M1C\n");
	printf("4.PT Max trong mang\n");
	printf("5.Xuat dia chi PT chan lon nhat va PT le nho nhat\n");
	printf("6.Xoa PT co gia tri 0\n");
	printf("7.Them PT x vao sau PT dau tien\n");
	printf("8.Tinh tong cac PT la so chinh phuong\n");
	printf("9.Xuat cac so cuc dai trong mang\n");
	printf("10.Xuat cac so cuc tieu trong mang\n");
	printf("11.Xoa pt tai vi tri k\n");
	printf("12.Them PT x tai vi tri k\n");
	printf("13.Chuyen so chan len dau mang va so le xuong cuoi mang\n");
	printf("14.Kiem tra mang co chua chan le xen ke khong\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			NhapM1C(a, n);
			break;
		}
	case 2:
		{
			nhapM1C_Random(a, n);
			break;
		}
	case 3:
		{
			xuatM1C(a, n);
			break;
		}
	case 4:
		{
			Max_M1C(a, n);
			break;
		}
	case 5:
		{
			int *b[1];
			try
			{
			b[0] = PT_Chan_Max(a, n);
			printf("\nPT chan Max co gia tri %d va dia chi o nho la %x\n", *b[0], b[0]);
			}
			catch (const char *msg)
			{
				printf("\n%s\n", msg);
			}
			try
			{
			b[1] = PT_Le_Min(a, n);
			printf("\nPT le Min co gia tri %d va dia chi o nho la %x\n", *b[1], b[1]);
			}
			catch (const char *msg)
			{
				printf("\n%s\n", msg);
			}
		}
	case 6:
		{
			XoatPT_0(a, n);
			break;
		}
	case 7:
		{
			int x;
			ThemPT_SauPTFirst(a, n, x);
			break;
		}
	case 8:
		{
			printf("Tong cac PT la so chinh phuong la: %d\n", TongSCP(a, n));
			break;
		}
	case 9:
		{
			XuatPT_CucDai(a, n);
			break;
		}
	case 10:
		{
			XuatPT_CucTieu(a, n);
			break;
		}
	case 11:
		{
			int x;
			XoaPT(a, n, x);
			break;
		}
	case 12:
		{
			int x, vitri;
			themPT(a, n, x, vitri);
			break;
		}
	case 13:
		{
			DuaChanLenDau_LeXuongDuoi(a, n);
			break;
		}
	case 14:
		{
			int i = kiemtrachanle(a, n);
			if (i != 0)
				printf("\nMang co chua chan le xen ke\n");
			else
				printf("\nMang khong chua chan le xen ke\n");
			break;
		}
	}
	}
	while (chon != 0);;
	return 0;
	getch ();
}
void NhapM1C (int *&a, int &n)
{
	printf("Nhap so luong PT mang: "); scanf_s("%d", &n);
	a = (int *)malloc(n*sizeof(int));
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		printf("Nhap PT a[%d]: ", i); scanf_s("%d", &a[i]);
	}
}
void nhapM1C_Random (int *&a, int &n)
{
	printf("Nhap so luong PT mang: "); scanf("%d", &n);
	a = (int *)malloc(n*sizeof(int));
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++)
	{
		*(a + i) = rand() % 100;
	}
}
void xuatM1C(int *a, int n)
{
	printf("Xuat mang:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5.3f", (float)a[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		printf("\nPhan tu thu %d co gia tri %.2f va dia chi o nho la %x\n", i, (float)*(a + i), a + i);
	}
}
void Max_M1C (int *a, int n)
{
	int *Max = a;
	for (int i = 0; i < n; i++)
	{
		if (*Max < a[i])
		{
			*Max = a[i];
		}
	}
	printf("PT Max cua mang co gia tri %d va dia chi o nho la %x\n", *Max, Max);
}
int *PT_Chan_Max (int *a, int n)
{
	int i, d, vt;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			d = i;
			break;
		}
	}
	if (i == n)
	{
		throw "Khong co PT chan trong mang";
	}
	vt = d;
	for (i = d + 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > a[vt])
		{
			vt = i;
		}
	}
	return &a[vt];
}
int *PT_Le_Min (int *a, int n)
{
	int i, d, vt;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			d = i;
			break;
		}
	}
	if (i == n)
	{
		throw "Khong co PT le trong mang";
	}
	vt = d;
	for (i = d + 1; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] < a[vt])
		{
			vt = i;
		}
	}
	return &a[vt];
}
void XoaVT (int *a, int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoatPT_0 (int *a, int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			XoaVT(a, n, i);
			i--;
		}
	}
}
void ThemPT_SauPTFirst (int *a, int &n, int &x)
{
	printf("\nNhap PT x: "); scanf_s("%d", &x);
	for (int i = n - 1; i >= 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[1] = x;
	n++;
}
int kiemtrascp (int n)
{
	if (sqrt(float(n)) == (int)sqrt(float(n)))
		return 1;
	else
		return 0;
}
int TongSCP (int *a, int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtrascp(a[i]) == 1)
		{
			s += a[i];
		}
	}
	return s;
}
void XuatPT_CucDai (int *a, int n)
{
	int dem = 0;
	printf("Xuat cac PT cuc dai trong mang:\n");
	if (a[0] > a[1])
	{
		dem++;
		printf("%5d", a[0]);
	}
	if (a[n - 1] > a[n - 2])
	{
		dem++;
		printf("%5d", a[n - 1]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
		{
			dem++;
			printf("%5d", a[i]);
		}
	}
	printf("\n");
	if (dem == 0)
	{
		printf("\t- Khong co PT nao trong mang la so cuc dai\n");
	}
}
void XuatPT_CucTieu (int *a, int n)
{
	int dem = 0;
	printf("Xuat cac PT cuc tieu trong mang:\n");
	if (a[0] < a[1])
	{
		dem++;
		printf("%5d", a[0]);
	}
	if (a[n - 1] < a[n - 2])
	{
		dem++;
		printf("%5d", a[n - 1]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
		{
			dem++;
			printf("%5d", a[i]);
		}
	}
	printf("\n");
	if (dem == 0)
	{
		printf("\t- Khong co PT nao trong mang la so cuc tieu\n");
	}
}
void XoaPT (int *a, int &n, int &x)
{
	int dem = 0;
	printf("\nNhap PT x: "); scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
			XoaVT(a, n, i);
			i--;
		}
	}
	if (dem == 0)
	{
		printf("Khong co PT %d trong mang\n", x);
	}
}
void themPT (int *a, int &n, int &x, int &vitri)
{
	printf("\nNhap PT x: "); scanf_s("%d", &x);
	printf("\nNhap vi tri k: "); scanf_s("%d", &vitri);
	if (vitri < 0)
	{
		for (int i = n - 1; i >= vitri; i--)
		{
			a[i + 1] = a[i];
		}
		a[0] = x;
		n++;
	}
	else if (vitri > n)
	{
		a[n] = x;
		n++;
	}
	else
	{
		for (int i = n - 1; i >= vitri; i--)
		{
			a[i + 1] = a[i];
		}
	a[vitri] = x;
	n++;
	}
}
int kiemtrachanle (int *a, int n)
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
		if ((a[i] % 2 == 0 && a[i + 1] % 2 != 0) || (a[i] % 2 != 0 && a[i + 1] % 2 == 0))
			dem++;
	return dem;
}
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void DuaChanLenDau_LeXuongDuoi (int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] % 2 == 0)
			{
				swap(a[i], a[j]);
				break;
			}
		}
	}
}