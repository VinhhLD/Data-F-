#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
typedef struct Sinhvien
{
	char masv[10];
	char hoTen[30];
	int solanvang;
} SV;
void nhap1sv (SV &sv);
void xuat1sv (SV sv);
void nhapDSSV (SV dssv[], int &n);
void xuatDSSV (SV dssv[], int n);
void swap (SV &x, SV &y);
void sapsepSLVgiamdan (SV dssv[], int n);
void timSVvang (SV dssv[], int n);
int demSoSVVangDuoiKLan (SV dssv[], int n, int k);
void timSVvang (SV dssv[], int n);
int main ()
{
	SV dssv[10];
	int n;
	nhapDSSV(dssv, n);
	xuatDSSV(dssv, n);
	printf("\nDanh sach sinh vien sap xep theo so lan vang giam dan la: \n");
	sapsepSLVgiamdan(dssv, n);
	xuatDSSV(dssv, n);
	timSVvang(dssv, n);
	return 0;
	getch ();
}
void nhap1sv (SV &sv)
{
	printf("\tNhap ma sinh vien: "); gets(sv.masv);
	fflush(stdin);
	printf("\tNhap ho ten: "); gets(sv.hoTen);
	printf("\tNhap so lan vang: "); scanf_s("%d", &sv.solanvang);
}
void xuat1sv (SV sv)
{
	printf("\tMa sinh vien: %s\n", sv.masv);
	printf("\tHo ten: %s\n", sv.hoTen);
	printf("\tSo lan vang: %d\n", sv.solanvang);
}
void nhapDSSV (SV dssv[], int &n)
{
	printf("Nhap danh sach sinh vien: \n");
	printf("Nhap so sinh vien: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap thong tin sinh vien thu %d\n", i + 1);
		fflush(stdin);
		nhap1sv(dssv[i]);
	}
}
void xuatDSSV (SV dssv[], int n)
{
	printf("Danh sach sinh vien vua nhap la: \n");
	for (int i = 0; i < n; i++)
	{
		xuat1sv(dssv[i]);
		printf("\t-------------------------\n");
	}
}
void swap (SV &x, SV &y)
{
	SV temp = x;
	x = y;
	y = temp;
}
void sapsepSLVgiamdan (SV dssv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (dssv[j].solanvang > dssv[i].solanvang)
			{
				swap(dssv[j], dssv[i]);
			}
		}
	}
}
int demSoSVVangDuoiKLan (SV dssv[], int n, int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (dssv[i].solanvang < k)
		{
			dem++;
		}
	}
	return dem;
}
void timSVvang (SV dssv[], int n)
{
	if (demSoSVVangDuoiKLan(dssv, n, 3) != 0)
	{
		printf("\nDanh sanh sinh vien vang duoi 3 lan: \n");
		for (int i = 0; i < n; i++)
		{
			if (dssv[i].solanvang < 3)
			{
				printf("Xuat sinh vien thu: %d\n", i + 1);
				xuat1sv(dssv[i]);
			}
		}
	}
	else
	{
		printf("Khong co sinh vien nao vang duoi 3 lan!\n");
	}
}