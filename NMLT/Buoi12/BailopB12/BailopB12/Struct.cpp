#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
typedef struct Sinhvien
{
	char maSV[10];
	char Hoten[30];
	int solanvang;
} SV;
void nhap1SV (SV &sv);
void xuat1SV (SV sv);
void nhapdsSV (SV dssv[], int &n);
void xuatdsSV (SV dssv[], int n);
int main ()
{
	SV dssv[10];
	int n;
	nhapdsSV(dssv, n);
	xuatdsSV(dssv, n);
	return 0;
	getch ();
}
void nhap1SV (SV &sv)
{
	printf("\tNhap ma sinh vien: "); scanf("%s", sv.maSV);
	fflush(stdin);
	printf("\tNhap ho ten: "); gets(sv.Hoten);
	printf("\tNhap so lan vang: "); scanf("%d", sv.solanvang);
}
void xuat1SV (SV sv)
{
	printf("\tMa sinh vien: %s\n", sv.maSV);
	printf("\tHo ten: %s\n", sv.Hoten);
	printf("\nSo lan vang: %d\n", sv.solanvang);
}
void nhapdsSV (SV dssv[], int &n)
{
	printf("Nhap danh sach sinh vien: \n");
	printf("Nhap so sinh vien: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap thong tin sinh vien thu %d\n", i + 1);
		nhap1SV(dssv[i]);
	}
}
void xuatdsSV (SV dssv[], int n)
{
	printf("Danh sach sinh vien vua nhap la: \n");
	for (int i = 0; i < n; i++)
	{
		xuat1SV(dssv[i]);
		printf("\t--------------------------\n");
	}
}