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
void docfileps (FILE *&f, PS dsps[], int &n);
void xuat1PS (PS ps);
void xuatdsPS (PS dsps[], int n);
int ucln (int a, int b);
void rutgondsPS (PS dsps[], int n);
void rutgon1PS (PS ps);
void swap (PS &x, PS &y);
void sapxepPSgiamdan (PS dsps[], int n);
void tongPS (PS dsps[], int n);
void timPSmax_min (PS dsps[], int n);
int demPSlonhon1 (PS dsps[], int n);
int demGTNguyen (PS dsps[], int n);
void xuatPS_GTnguyen (PS dsps[], int n);
int timBCNN (PS dsps[], int n);
void quydong (PS dsps[], int n);
int main ()
{
	FILE *f;
	PS dsps[MAX];
	int chon;
	int n;
	docfileps(f, dsps, n);
	do
	{
	printf("\n1.Xuat danh sach phan so\n");
	printf("2.Xuat danh sach phan so sau khi rut gon\n");
	printf("3.Sap xep day phan so giam dan\n");
	printf("4.Tinh tong cac phan so\n");
	printf("5.Tim phan so Max/min\n");
	printf("6.Dem phan so lon hon 1\n");
	printf("7.Xuat cac phan so co gia tri nguyen\n");
	printf("8.Quy dong cac phan so\n");
	printf("Chon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			xuatdsPS(dsps, n);
			break;
		}
	case 2:
		{
			rutgondsPS(dsps, n);
			xuatdsPS(dsps, n);
			break;
		}
	case 3:
		{
			sapxepPSgiamdan(dsps, n);
			break;
		}
	case 4:
		{
			tongPS(dsps, n);
			break;
		}
	case 5:
		{
			timPSmax_min(dsps, n);
			break;
		}
	case 6:
		{
			printf("So luong phan so > 1 la: %d\n", demPSlonhon1(dsps, n));
			break;
		}
	case 7:
		{
			xuatPS_GTnguyen(dsps, n);
			break;
		}
	case 8:
		{
			quydong(dsps, n);
			break;
		}

	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void docfileps (FILE *&f, PS dsps[], int &n)
{
	f = fopen("dataps.txt", "rt");
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", &dsps[i].ts);
		fscanf(f, "%d", &dsps[i].ms);
	}
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
	else if (ps.ms == 1)
	{
		printf("\tPhan so: %d\n", ps.ts);
	}
	else 
		printf("\tPhan so: %d/%d\n", ps.ts, ps.ms);
}
void xuatdsPS (PS dsps[], int n)
{
	printf("Danh sach phan so:\n");
	for (int i = 0; i < n; i++)
	{
		printf("- Phan so thu %d:\n", i + 1);
		xuat1PS(dsps[i]);
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
void rutgondsPS (PS dsps[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if(dsps[i].ts != 0)
		{
			int u = ucln(dsps[i].ts, dsps[i].ms);
			dsps[i].ts = dsps[i].ts / u;
			dsps[i].ms = dsps[i].ms / u;
		}
	}
}
void rutgon1PS (PS ps)
{
	int u = ucln(ps.ts, ps.ms);
	ps.ts = ps.ts / u;
	ps.ms = ps.ms / u;
	printf("%d/%d\n", ps.ts, ps.ms);
}
void swap (PS &x, PS &y)
{
	PS temp = x;
	x = y;
	y = temp;
}
void sapxepPSgiamdan (PS dsps[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((dsps[j].ts / dsps[j].ms) > (dsps[i].ts / dsps[i].ms))
			{
				swap(dsps[j], dsps[i]);
			}
		}
	}
}
void tongPS (PS dsps[], int n)
{
	PS tong = dsps[0];
	for (int i = 1; i < n; i++)
	{
		tong.ts = tong.ts * dsps[i].ms + dsps[i].ts * tong.ms;
		tong.ms = tong.ms * dsps[i].ms;
	}
	printf("Tong cac phan so la:\n");
	xuat1PS(tong);
	printf("Phan so %d/%d sau khi rut gon la: ", tong.ts, tong.ms);
	rutgon1PS(tong);
}
void timPSmax_min (PS dsps[], int n)
{
	PS max = dsps[0];
	PS min = dsps[0];
	for (int i = 1; i < n; i++)
	{
		if ((dsps[i].ts / dsps[i].ms) > (max.ts / max.ms))
		{
			max = dsps[i];
		}
	}
	if (max.ts < 0 && max.ms < 0)
	{
		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts * -1, max.ms * -1);
	}
	else if (max.ms < 0)
	{
		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts * -1, max.ms * -1);
	}
	else if (max.ms == 1)
	{
		printf("Phan so lon nhat trong danh sach la: %d\n", max.ts);
	}
	else
	{
		printf("Phan so lon nhat trong danh sach la: %d/%d\n", max.ts, max.ms);
	}
	for (int i = 1; i < n; i++)
	{
		if ((dsps[i].ts / dsps[i].ms) < (min.ts / min.ms))
		{
			min = dsps[i];
		}
	}
	if (min.ts < 0 && min.ms < 0)
	{
		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts * -1, min.ms * -1);
	}
	else if (min.ms < 0)
	{
		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts * -1, min.ms * -1);
	}
	else if (min.ms == 1)
	{
		printf("Phan so nho nhat trong danh sach la: %d\n", min.ts);
	}
	else
	{
		printf("Phan so nho nhat trong danh sach la: %d/%d\n", min.ts, min.ms);
	}
}
int demPSlonhon1 (PS dsps[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((dsps[i].ts / dsps[i].ms) > 1)
		{
			dem++;
		}
	}
	return dem;
}
int demGTNguyen (PS dsps[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((dsps[i].ts / dsps[i].ms) > 1)
		{
			dem++;
		}
	}
	return dem;
}
void xuatPS_GTnguyen (PS dsps[], int n)
{
	if (demGTNguyen(dsps, n) != 0)
	{
		printf("Cac phan so > 1 la:\n");
		for (int i = 0; i < n; i++)
		{
			if ((dsps[i].ts / dsps[i].ms) > 1)
			{
				xuat1PS(dsps[i]);
			}
		}
	}
	else
	{
		printf("Khong co phan so nao > 1\n");
	}
}
int timBCNN (PS dsps[], int n)
{
	PS max = dsps[0];
	for (int i = 1; i < n; i++)
	{
		if (max.ms < dsps[i].ms)
		{
			max.ms = dsps[i].ms;
		}
	}
	int BCNN = max.ms;
	for (int i = 0; i < n; i++)
	{
		if (BCNN % dsps[i].ms != 0)
		{
			BCNN = BCNN + max.ms;
			i--;
		}
	}
	return BCNN;
}
void quydong (PS dsps[], int n)
{
	int BCNN = timBCNN(dsps, n);
	for (int i = 0; i < n; i++)
	{
		dsps[i].ts = dsps[i].ts * (BCNN / dsps[i].ms);
		dsps[i].ms = BCNN;
	}
}*/