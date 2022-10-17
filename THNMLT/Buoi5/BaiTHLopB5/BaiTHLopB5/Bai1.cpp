#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20
void Nhapmang (int a[], int &n);
void Xuatmang (int a[], int n);
void Xuatmangtudong (int a[], int &n);
void Xuatvitrichan (int a[], int n);
int DemPTduong (int a[], int n);
int Vitri (int a[], int n, int x);
int Max (int a[], int n);
int Min (int a[], int n);
void Nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuatmang (int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
void Xuatmangtudong (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: "); scanf_s("%d", &n);
	srand((unsigned)time(NULL));//phat sinh cac phan tu khong trung nhau
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 199 - 99;//trong doan nao thi +- so do -99 den 99
	}
}
int DemPTduong (int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}
int Tongam (int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		tong = tong + a[i];
	}
	return tong;
}

void Xuatvitrichan (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		printf("%d  ", a[i]);
	}
}
int Vitri (int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return 0;
}
int Max (int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}
int Min (int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}
void ThemPT (int a[], int &n, int x, int vitri)
{
	/*if (vitri < 0 || vitri > n)
	{
		printf("Vi tri khong hop le");
		return;
	}*/
	if (vitri < 0)
	{
		for (int i = n - 1; i >= vitri; i--)
			a[i + 1] = a[i];
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
		a[i + 1] = a[i];
	a[vitri] = x;
	n++;
	}
}
int Tongchan(int a[], int n)
{
	int tongchan = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		{
			tongchan = tongchan + a[i];
		}
	return tongchan;
}
int Tongle (int a[], int n)
{
	int tongle = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			tongle = tongle + a[i];
		}
	return tongle;	
}
int kiemtrachan (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			return 0;
		}
	}
	return 1;
}
int kiemtrachanle (int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i] % 2 != 0))
			return 0;
	return 1;
}
void XuatPTtronchuc (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 10 == 0)
			printf("%d  ", a[i]);
	}
}
void ThemPTsauPTdau (int a[], int &n, int x)
{
	for (int i = n - 1; i >= 1; i--)
	{
		a[i + 1] = a [i];
	}
	a[1] = x;
	n++;
}
void ThemPTsauPTMax (int a[], int &n, int x)
{
	int max = a[0];
	int j = 0; //luu giu vi tri max
	for (int i = 1; i < n; i++)
		if (max < a[i])
		{
			max = a[i];
			j = i;
		}
	for (int i = n - 1; i > j; i--)
		a[i + 1] = a[i];
	a[j + 1] = x;
	n++;
}
void XoaPTx (int a[], int &n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		{
			for (int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
			break;
		}
}
void XoacacPTx (int a[], int &n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		{
			for (int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
		}
}
int Doixung (int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		if(a[i] != a[n - i - 1])
			return 0;
	return 1;
}

int main ()
{
	int a[MAX];
	int n, chon, x, vitri;
	do
	{
		printf("\n0.Thoat chuong trinh");
		printf("\n1.Tao mang tu nhap");
		printf("\n2.Tao mang tu dong");
		printf("\n3.Xuat mang");
		printf("\n4.Xuat vi tri chan");
		printf("\n5.Dem PT duong");
		printf("\n6.Tong cac phan tu am");
		printf("\n7.Tim vi tri gia tri cua x trong mang");
		printf("\n8.Tim phan tu lon nhat va nho nhat trong mang");
		printf("\n9.Them phan tu x vao mang tai vi tri k");
		printf("\n10.Tinh tong cac phan tu chan/le");
		printf("\n11.Kiem tra mang co toan so chan khong");
		printf("\n12.Kiem tra mang co gia tri chan le xen ke khong");
		printf("\n13.Xuat cac phan tu tron chuc");
		printf("\n14.Them PT x sau PT dau tien");
		printf("\n15.Them PT x sau PT Max");
		printf("\n16.Xoa PT x dau tien");
		printf("\n17.Xoa cac PT x");
		printf("\n18.Kiem tra mang co doi xung khong");
		printf("\nChon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				Nhapmang(a, n);
				break;
			}
		case 2:
			{
				Xuatmangtudong(a, n);
				break;
			}
		case 3:
			{
				printf("\nXuat mang: ");
				Xuatmang(a, n);
				break;
			}
		case 4:
			{
				Xuatvitrichan(a, n);
				break;
			}
		case 5:
			{
				printf("\nSo cac phan tu duong: %d", DemPTduong(a, n));
				break;
			}
		case 6:
			{
				printf("\nTong cac phan tu am trong mang la: %d", Tongam(a, n));
				break;
			}
		case 7:
			{
				printf("\nNhap gia tri x: "); scanf_s("%d", &x);
				int i = Vitri(a, n, x);
				if (i)
					printf("\nVi tri cua x la: %d", i);
				else
					printf("Khong co x trong mang");
				break;
			}
		case 8:
			{
				printf("\nPhan tu lon nhat trong mang la: %d", Max(a, n));
				printf("\nPhan tu nho nhat torng mang la: %d", Min(a, n));
				break;
			}
		case 9:
			{
				printf("\nNhap gia tri them vao mang: "); scanf_s("%d", &x);
				printf("\nNhap vi tri: "); scanf_s("%d", &vitri);
				ThemPT(a, n, x, vitri);
				printf("\nMang sau khi them: ");
				Xuatmang(a, n);
				break;
			}
		case 10:
			{
				printf("\nTong cac phan tu so chan trong mang la: %d", Tongchan(a, n));
				printf("\nTong cac phan tu so le trong mang la: %d", Tongle(a, n));
				break;
			}
		case 11:
			{
				if (!kiemtrachan(a, n))
					printf("\nKhong hoan toan la so chan");
				else
					printf("\nMang toan so chan");
			}
		case 12:
			{
				int i = kiemtrachanle(a, n);
				if (i)
					printf("\nCac phan tu cua mang xen ke chan le");
				else
					printf("\nCac phan tu cua mang khong xen ke chan le");
				break;
			}
		case 13:
			{
				printf("\nCac so tron chuc la: ");
				XuatPTtronchuc(a, n);
				break;
			}
		case 14:
			{
				printf("\nNhap PT x: "); scanf_s("%d", &x);
				ThemPTsauPTdau(a, n, x);
				printf("\nXuat mang sau khi them: ");
				Xuatmang(a, n);
				break;
			}
		case 15:
			{
				printf("\nNhap PT x: "); scanf_s("%d", &x);
				ThemPTsauPTMax(a, n, x);
				printf("\nXuat mang sau khi them: ");
				Xuatmang(a, n);
				break;
			}
		case 16:
			{
				printf("\nNhap PT x: "); scanf_s("%d", &x);
				XoaPTx(a, n, x);
				printf("\nXuat mang sau khi xoa x: ");
				Xuatmang(a, n);
				break;
			}
		case 17:
			{
				printf("\nNhap PT x: "); scanf_s("%d", &x);
				XoacacPTx(a, n, x);
				printf("\nXuat mang sau khi xoa cac x: ");
				Xuatmang(a, n);
				break;
			}
		case 18:
			{
				int i = Doixung(a, n);
				if (i)
					printf("\nMang doi xung");
				else
					printf("\nMang khong doi xung");
				break;
			}
		}
	}
	while (chon != 0);
	return 0;
	getch ();
}