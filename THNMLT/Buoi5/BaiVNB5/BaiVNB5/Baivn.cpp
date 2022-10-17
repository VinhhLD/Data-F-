/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
void nhapmang (int a[], int &n)
{
	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu [%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
void xuatmang (int a[], int n)
{
	printf("Xuat mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
void timgiatrixuathiennhieunhat (int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] == a[j])
			{
				b[i]++;
			}
		}
	}
	int max = 1;
	for (int i = 0; i < n; i++)
	{
		if (b[i] > max)
		{
			max = b[i];
		}
	}
	for (int i = 0; i < n ; i++)
	{
		if (b[i] == max)
		{
			printf("\nVay phan tu xuat nhieu nhat trong mang la %d va xuat hien %d lan", a[i], b[i]);
			break;
		}
	}
}
long kiemtrasnt (long n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void demSNT (int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(kiemtrasnt(a[i]) == 1)
		{
			dem++;
			printf("\n%d la so nguyen to", a[i]);
		}
		else
		{
			printf("\n%d khong phai la so nguyen to", a[i]);
		}
	}
	printf("\n=> Mang nay co %d so nguyen to\n", dem);
}
void timsochanlonnhat (int a[], int n)
{
	int max = a[0];
	printf("Cac phan tu so chan co trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\nSo chan lon nhat trong mang la: %d\n", max);
}
int main ()
{
	int a[100], b[100] = {0}, n;
	int chon;
	do
	{
	printf("\n1.Nhap mang");
	printf("\n2.Xuat mang");
	printf("\n3.Tim gia tri phan tu xuat hien nhieu nhat trong mang, neu so lan xuat hien bang nhau thi xuat pt dau tien");
	printf("\n4.Dem so nguyen to trong mang");
	printf("\n5.Tim so chan lon nhat trong mang");
	printf("\nChon chuc nang: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			nhapmang(a, n);
			break;
		}
	case 2:
		{
			xuatmang(a, n);
			break;
		}
	case 3:
		{
			timgiatrixuathiennhieunhat(a, b, n);
			break;
		}
	case 4:
		{
			kiemtrasnt(n);
			demSNT(a, n);
			break;
		}
	case 5:
		{
			timsochanlonnhat(a, n);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}*/