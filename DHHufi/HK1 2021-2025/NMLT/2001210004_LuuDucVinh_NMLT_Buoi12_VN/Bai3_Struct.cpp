/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
struct date
{
	int d;
	int m;
	int y;
};
struct NV
{
	int maso;
	char ho[15];
	char ten[15];
	date ns;
	date ngayct;
	int luong;
	char noisinh[300];
	char diachi [300];
};
void nhapntn (date &ntn);
void xuatntn (date ntn);
void nhap1NV (NV &nv);
void xuat1NV (NV nv);
void nhapdsnv (NV dsnv[], int &n);
void xuatdsnv (NV dsnv[], int n);
void themnv (NV dsnv[], NV &x, int &n, int &k);
int timMSNV (NV dsnv[], int n, int y);
int timtenNV (NV dsnv[], int n, char *z);
void swap (NV &x, NV &y);
void sapxepluong_giamdan (NV dsnv[], int n);
void xoanhanvien (NV dsnv[], int &n, int t);
int main ()
{
	NV dsnv[MAX];
	NV x;
	int n;
	int k;
	int y;
	int t;
	int chon;
	do
	{
	printf("1.Nhap danh sach nhan vien\n");
	printf("2.Xuat danh sach nhan vien\n");
	printf("3.Them vao 1 nhan vien\n");
	printf("4.Tim nhan vien theo ma so\n");
	printf("5.Tim 1 nhan vien theo ten\n");
	printf("6.In ra bang luong cua cac nhan vien theo thu tu giam dan\n");
	printf("7.Xoa 1 nhan vien\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			nhapdsnv(dsnv, n);
			break;
		}
	case 2:
		{
			xuatdsnv(dsnv, n);
			break;
		}
	case 3:
		{
			themnv(dsnv, x, n, k);
			break;
		}
	case 4:
		{
			printf("\nNhap ma so nhan vien can tim: "); scanf_s("%d", &y);
			int b = timMSNV(dsnv, n, y);
			if (timMSNV(dsnv, n, y) == -1)
			{
				printf("Khong tim thay\n");
			}
			else
			{
				printf("Tim thay nhan vien thu %d\n", b + 1);
				xuat1NV(dsnv[b]);
			}
			break;
		}
	case 5:
		{
			char z[20];
			printf("\nNhap ten nhan vien can tim: ");
			fflush(stdin);
			gets(z);
			int b = timtenNV(dsnv, n, z);
			if (timtenNV(dsnv, n, z) == -1)
			{
				printf("Khong tim thay\n");
			}
			else
			{
				printf("Tim thay nhan vien thu %d\n", b + 1);
				xuat1NV(dsnv[b]);
			}
			break;
		}
	case 6:
		{
			sapxepluong_giamdan(dsnv, n);
			printf("\n\tDANH SACH NHAN VIEN SAU KHI SAP XEP\n");
			xuatdsnv(dsnv, n);
			break;
		}
	case 7:
		{
			printf("\nNhap ma so nhan vien muon xoa: "); scanf_s("%d", &t);
			xoanhanvien(dsnv, n, t);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void nhapntn (date &ntn)
{
	do
	{
	printf("\t\t- Nhap ngay: ");
	scanf_s("%d", &ntn.d);
	}
	while (ntn.d < 0 || ntn.d > 31);
	do
	{
	printf("\t\t- Nhap thang: ");
	scanf_s("%d", &ntn.m);
	}
	while (ntn.m < 0 || ntn.m > 12);
	printf("\t\t- Nhap vao nam: ");
	scanf_s("%d", &ntn.y);
}
void xuatntn (date ntn)
{
	printf("%d-", ntn.d);
	printf("%d-", ntn.m);
	printf("%d\n", ntn.y);
}
void nhap1NV (NV &nv)
{
	printf("\tNhap ma so: ");
	scanf_s("%d", &nv.maso);
	printf("\tNhap ho: ");
	fflush(stdin);
	gets(nv.ho);
	printf("\tNhap ten: ");
	fflush(stdin);
	gets(nv.ten);
	printf("\tNgay sinh: \n");
	nhapntn(nv.ns);
	printf("\tNhap noi sinh: ");
	fflush(stdin);
	gets(nv.noisinh);
	printf("\tNhap dia chi: ");
	fflush(stdin);
	gets(nv.diachi);
	printf("\tNhap luong: "); scanf_s("%d", &nv.luong);
	printf("\tNhap ngay cong tac: \n");
	nhapntn(nv.ngayct);
}
void xuat1NV (NV nv)
{
	printf("\tMa so nhan vien: %d\n", nv.maso);
	printf("\tHo: %s\n", nv.ho);
	printf("\tTen: %s\n", nv.ten);
	printf("\tNgay sinh: ");
	xuatntn(nv.ns);
	printf("\tNoi sinh: %s\n", nv.noisinh);
	printf("\tDia chi: %s\n", nv.diachi);
	printf("\tLuong: %d\n", nv.luong);
	printf("\tNgay cong tac: ");
	xuatntn(nv.ngayct);
}
void nhapdsnv (NV dsnv[], int &n)
{
	printf("\nNhap so luong nhan vien: "); scanf_s("%d", &n);
	printf("\tNhap thong tin nhan vien\n");
	for (int i = 0; i < n; i++)
	{
		printf("Nhan vien thu %d\n", i + 1);
		fflush(stdin);
		nhap1NV(dsnv[i]);
	}
}
void xuatdsnv (NV dsnv[], int n)
{
	printf("Danh sach nhan vien\n");
	for (int i = 0; i < n; i++)
	{
		printf("- Nhan vien thu %d\n", i + 1);
		xuat1NV(dsnv[i]);
		printf("\t---------------------------------------\n");
	}
}
void themnv (NV dsnv[], NV &x, int &n, int &k)
{
	printf("Vi tri can them: "); scanf_s("%d", &k);
	nhap1NV(x);
	if (k - 1 < 0)
	{
		for (int i = n - 1; i >= k; i--)
		{
			dsnv[i + 1] = dsnv[i];
		}
		dsnv[0] = x;
		n++;
	}
	else if (k - 1 > n)
	{
		dsnv[n] = x;
		n++;
	}
	else
	{
		for (int i = n - 1; i >= k - 1; i--)
		{
			dsnv[i + 1] = dsnv[i];
		}
		dsnv[k - 1] = x;
		n++;
	}
}
int timMSNV (NV dsnv[], int n, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (dsnv[i].maso == y)
		{
			return i;
			break;
		}
	}
	return -1;
}
int timtenNV (NV dsnv[], int n, char *z)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(dsnv[i].ten, z) == 0)
		{
			return i;
			break;
		}
	}
	return -1;
}
void swap (NV &x, NV &y)
{
	NV temp = x;
	x = y;
	y = temp;
}
void sapxepluong_giamdan (NV dsnv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (dsnv[j].luong > dsnv[i].luong)
			{
				swap(dsnv[j], dsnv[i]);
			}
		}
	}
}
void xoanhanvien (NV dsnv[], int &n, int t)
{
	int vitri = timMSNV(dsnv, n, t);
	if (vitri == -1)
	{
		printf("Khong tim thay ma so nhan vien %d muon xoa\n", t);
	}
	else
	{
		for (int i = vitri; i < n; i++)
		{
			dsnv[i] = dsnv[i + 1];
		}
		n--;
	}
}*/