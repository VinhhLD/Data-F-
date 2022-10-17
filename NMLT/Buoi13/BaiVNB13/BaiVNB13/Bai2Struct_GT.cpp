/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
struct dt
{
	char madt[11];
	char tendt[20];
	char hang[20];
	float gia;
	int soluong;
};
void docfiledt (FILE *&f, dt dsdt[], int&n);
void xuat1dt (dt dienthoai);
void xuatdsdt (dt dsdt[], int n);
void sapxepgiamdantheogia (dt dsdt[], int n);
void swap (dt &x, dt&y);
void xuatsoluongnhohon10 (dt dsdt[], int n);
int demhang (dt dsdt[], int n, char *x);
void demsoluongsanpham_tunghang (dt dsdt[], int n, char *x);
int main ()
{
	dt dsdt[MAX];
	FILE *f;
	int n;
	int chon;
	docfiledt(f, dsdt, n);
	do
	{
	printf("\n1.Xuat thong tin danh sach dien thoai\n");
	printf("2.Sap xep danh sach giam dan theo gia ban\n");
	printf("3.Xuat cac dien thoai co so luong < 10\n");
	printf("4.Dem so luong san pham cua tung hang\n");
	printf("Chon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			xuatdsdt(dsdt, n);
			break;
		}
	case 2:
		{
			sapxepgiamdantheogia(dsdt, n);
			break;
		}
	case 3:
		{
			xuatsoluongnhohon10(dsdt, n);
			break;
		}
	case 4:
		{
			char x[20];
			printf("Nhap ten hang muon dem so luong: ");
			fflush(stdin);
			gets(x);

			demsoluongsanpham_tunghang(dsdt, n, x);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void docfiledt (FILE *&f, dt dsdt[], int&n)
{
	f = fopen("dataB2.txt", "rt");
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%s ", dsdt[i].madt);
		fgets(dsdt[i].tendt, 20, f);
		fscanf(f, "%s ", dsdt[i].hang);
		fscanf(f, "%f", &dsdt[i].gia);
		fscanf(f, "%d", &dsdt[i].soluong);
	}
}
void xuat1dt (dt dienthoai)
{
	printf("\tMa dien thoai: %s\n", dienthoai.madt);
	printf("\tTen dien thoai: %s", dienthoai.tendt);
	printf("\tNha san xuat: %s\n", dienthoai.hang);
	printf("\tGia ban: %.3f\n", dienthoai.gia);
	printf("\tSo luong: %d\n", dienthoai.soluong);
}
void xuatdsdt (dt dsdt[], int n)
{
	printf("Danh sach dien thoai\n");
	for (int i = 0; i < n; i++)
	{
		printf("- Dien thoai thu %d\n", i + 1);
		xuat1dt(dsdt[i]);
		printf("\t--------------------------------\n");
	}
}
void swap (dt &x, dt&y)
{
	dt temp = x;
	x = y;
	y = temp;
}
void sapxepgiamdantheogia (dt dsdt[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (dsdt[j].gia > dsdt[i].gia)
			{
				swap(dsdt[j], dsdt[i]);
			}
		}
	}
}
void xuatsoluongnhohon10 (dt dsdt[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (dsdt[i].soluong < 10)
		{
			xuat1dt(dsdt[i]);
			printf("\t--------------------------------\n");
		}
	}
}
int demhang (dt dsdt[], int n, char *x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(dsdt[i].hang, x) == 0)
		{
			dem++;
		}
	}
	return dem;
}
void demsoluongsanpham_tunghang (dt dsdt[], int n, char *x)
{
	int tong = 0;
	if (demhang(dsdt, n, x) != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (strcmp(dsdt[i].hang, x) == 0)
			{
				tong = tong + dsdt[i].soluong;
			}
		}
		printf("Tong so luong san pham cua hang %s la: %d\n", x, tong);
	}
	else
	{
		printf("Khong tim thay ten hang!\n");
	}
}*/