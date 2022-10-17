/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
struct PS
{
	int ts;
	int ms;
};
void nhap1PS (PS &ps);
void xuat1PS (PS ps);
void nhapdsPS (PS dsPS[], int &n);
void xuatdsPS (PS dsPS[], int n);
void rutgondsPS (PS dsPS[], int n);
void vitri (int &ps1, int &ps2);
void tong2ps (PS dsPS[], int ps1, int ps2);
void rutgon1PS (PS phanso);
void hieu2ps (PS dsPS[], int ps1, int ps2);
void tich2ps (PS dsPS[], int ps1, int ps2);
void thuong2ps (PS dsPS[], int ps1, int ps2);
int main ()
{
	PS dsPS[MAX];
	int n;
	int chon;
	int ps1, ps2;
	do
	{
	printf("\n0.Thoat chuong trinh");
	printf("\n1.Nhap phan so");
	printf("\n2.Xuat phan so");
	printf("\n3.Tinh tong 2 phan so");
	printf("\n4.Tinh hieu 2 phan so");
	printf("\n5.Tinh tich 2 phan so");
	printf("\n6.Tinh thuong 2 phan so");
	printf("\n7.Toi gian phan so");
	printf("\nChon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			nhapdsPS(dsPS, n);
			break;
		}
	case 2:
		{
			xuatdsPS(dsPS, n);
			break;
		}
	case 3:
		{
			vitri(ps1, ps2);
			tong2ps(dsPS, ps1, ps2);
			break;
		}
	case 4:
		{
			vitri(ps1, ps2);
			hieu2ps(dsPS, ps1, ps2);
			break;
		}
	case 5:
		{
			vitri(ps1, ps2);
			tich2ps(dsPS, ps1, ps2);
			break;
		}
	case 6:
		{
			vitri(ps1, ps2);
			thuong2ps(dsPS, ps1, ps2);
			break;
		}
	case 7:
		{
			rutgondsPS(dsPS, n);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void nhap1PS (PS &ps)
{
	printf("\tNhap tu so: "); scanf_s("%d", &ps.ts);
	do
	{
	printf("\tNhap mau so: "); scanf_s("%d", &ps.ms);
	if (ps.ms == 0)
	{
		printf("Vui long nhap mau khac khong!\n");
	}
	}
	while (ps.ms == 0);
}
void xuat1PS (PS ps)
{
	if (ps.ts < 0 && ps.ms < 0)
	{
		printf("\tPhan so: %d/%d\n", ps.ts * -1, ps.ms * -1);
	}
	else if (ps.ms < 0)
	{
		printf("\tPhan so: %d/%d\n", ps.ts * -1, ps.ms * -1);
	}
	else 
		printf("\tPhan so: %d/%d\n", ps.ts, ps.ms);
}
void nhapdsPS (PS dsPS[], int &n)
{
	printf("\tNhap danh sach phan so \n");
	printf("Nhap so phan so: "); scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan so thu %d\n", i + 1);
		nhap1PS(dsPS[i]);
	}
}
void xuatdsPS (PS dsPS[], int n)
{
	printf("Danh sach phan so vua nhap la: \n");
	for (int i = 0; i < n; i++)
	{
		printf("- Phan so thu %d:\n", i + 1);
		xuat1PS(dsPS[i]);
		printf("\t----------------------\n");
	}
}
int ucln (int a, int b)
{
	if (a < 0)
	{
		a = a * -1;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
void rutgondsPS (PS dsPS[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if(dsPS[i].ts != 0)
		{
			int u = ucln(dsPS[i].ts, dsPS[i].ms);
			dsPS[i].ts = dsPS[i].ts / u;
			dsPS[i].ms = dsPS[i].ms / u;
		}
	}
}
void rutgon1PS (PS phanso)
{
	int u = ucln(phanso.ts, phanso.ms);
	phanso.ts = phanso.ts / u;
	phanso.ms = phanso.ms / u;
	printf("%d/%d\n", phanso.ts, phanso.ms);
}
void vitri (int &ps1, int &ps2)
{
	printf("\nNhap 2 phan so can tinh\n");
	printf("Phan so thu: "); scanf_s("%d", &ps1);
	printf("Phan so thu: "); scanf_s("%d", &ps2);
}
void tong2ps (PS dsPS[], int ps1, int ps2)
{
	PS tong;
	tong.ts = dsPS[ps1 - 1].ts  * dsPS[ps2 - 1].ms + dsPS[ps2 - 1].ts * dsPS[ps1 - 1].ms;
	tong.ms = dsPS[ps1 - 1].ms * dsPS[ps2 - 1].ms;
	xuat1PS(tong);
	printf("Tong 2 phan so sau khi rut gon la: ");
	rutgon1PS(tong);
}
void hieu2ps (PS dsPS[], int ps1, int ps2)
{
	PS hieu;
	hieu.ts = dsPS[ps1 - 1].ts  * dsPS[ps2 - 1].ms - dsPS[ps2 - 1].ts * dsPS[ps1 - 1].ms;
	hieu.ms = dsPS[ps1 - 1].ms * dsPS[ps2 - 1].ms;
	xuat1PS(hieu);
	printf("Hieu 2 phan so sau khi rut gon la: ");
	rutgon1PS(hieu);
}
void tich2ps (PS dsPS[], int ps1, int ps2)
{
	PS tich;
	tich.ts = dsPS[ps1 - 1].ts  * dsPS[ps2 - 1].ts;
	tich.ms = dsPS[ps1 - 1].ms * dsPS[ps2 - 1].ms;
	xuat1PS(tich);
	printf("Tich 2 phan so sau khi rut gon la: ");
	rutgon1PS(tich);
}
void thuong2ps (PS dsPS[], int ps1, int ps2)
{
	PS thuong;
	thuong.ts = dsPS[ps1 - 1].ts  * dsPS[ps2 - 1].ms;
	thuong.ms = dsPS[ps1 - 1].ms * dsPS[ps2 - 1].ts;
	xuat1PS(thuong);
	printf("Thuong 2 phan so sau khi rut gon la: ");
	rutgon1PS(thuong);
}*/