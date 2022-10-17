/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
typedef struct Congnhan
{
	char hoten[50];
	int namsinh;
	float giolam;
}CN;
void nhap1CN (CN &cn);
void xuat1CN (CN cn, int i);
void nhapdscn (CN dscn[], int &n);
void xuatdscn (CN dscn[], int n);
int demCN_nhanthuong (CN dscn[], int n);
void lietkeCN_nhanthuong (CN dscn[], int n);
void sapxepgiolam_giamdan (CN dscn[], int n);
void swap (CN &x, CN &y);
int main ()
{
	CN dscn[MAX];
	int n;
	int chon;
	do
	{
	printf("1.Nhap danh sanh cong nhan\n");
	printf("2.Xuat danh sanh cong nhan\n");
	printf("3.Liet ke cong nhan nhan thuong (gio lam > 40)\n");
	printf("4.Sap xep danh sach cong nhan giam dan theo gio lam\n");
	printf("Chon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			nhapdscn(dscn, n);
			break;
		}
	case 2:
		{
			xuatdscn(dscn, n);
			break;
		}
	case 3:
		{
			lietkeCN_nhanthuong(dscn, n);
			break;
		}
	case 4:
		{
			sapxepgiolam_giamdan(dscn, n);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void nhap1CN (CN &cn)
{
	printf("\tNhap ho ten: ");
	gets(cn.hoten);
	printf("\tNhap nam sinh: ");
	scanf_s("%d", &cn.namsinh);
	printf("\tNhap gio lam: ");
	scanf_s("%f", &cn.giolam);
}
void xuat1CN (CN cn, int i)
{
	printf("- Cong nhan thu %d:\n", i + 1);
	printf("\tHo ten cong nhan: %s\n", cn.hoten);
	printf("\tNam sinh: %d\n", cn.namsinh);
	printf("\tGio lam: %.2fh\n", cn.giolam);
}
void nhapdscn (CN dscn[], int &n)
{
	printf("Nhap so luong cong nhan: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Cong nhan thu %d\n", i + 1);
		fflush(stdin);
		nhap1CN(dscn[i]);
	}
}
void xuatdscn (CN dscn[], int n)
{
	printf("Danh sach cong nhan\n");
	for (int i = 0; i < n; i++)
	{
		xuat1CN(dscn[i], i);
		printf("\t-------------------------------\n");
	}
}
int demCN_nhanthuong (CN dscn[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (dscn[i].giolam > 40)
		{
			dem++;
		}
	}
	return dem;
}
void lietkeCN_nhanthuong (CN dscn[], int n)
{
	if (demCN_nhanthuong(dscn, n) != 0)
	{
		printf("Danh sach cong nhan nhan thuong:\n");
		for (int i = 0; i < n; i++)
		{
			if (dscn[i].giolam > 40)
			{
				xuat1CN(dscn[i], i);
			}
		}
	}
	else
	{
		printf("Khong co cong nhan nao duoc nhan thuong\n");
	}
}
void swap (CN &x, CN &y)
{
	CN temp = x;
	x = y;
	y = temp;
}
void sapxepgiolam_giamdan (CN dscn[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (dscn[j].giolam > dscn[i].giolam)
			{
				swap(dscn[j], dscn[i]);
			}
		}
	}
}*/