#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapM1C (int a[], int &n, int *&p);
void XuatM1C (int *p, int n);
int findMax (int a[], int n);
int findMin (int a[], int n);
int DemPTchan (int *p, int n);
int DemPTle (int *p, int n);
int LinearSearch (int a[], int n, int &x);
int BinarySearch (int a[], int n, int &x);
int DemPTx (int a[], int n, int &x);
int DemPT_Lonhon_x (int a[], int n, int &x);
int TongcacPT_trongMang (int a[], int n);
long kiemtrasnt (long n);
void XuatSNT (int a[], int n);
int kiemtrasohh (long n);
void XuatSoHH (int a[], int n);
void XuatPT_vitri_chanle (int a[], int n);
void Xuat_MaxMin_Vitri (int a[], int n);
void Tron_MangBC_VaoA (int a[], int b[], int c[], int &n, int &m, int &l, int *&p, int *&h, int *&k);
void Sapxep_Tangdan (int a[], int b[], int c[], int &n, int &m, int &l, int *&p, int *&h, int *&k);
void swap (int &x, int &y);
int main ()
{
	int a[MAX], n, *p, chon;
	do
	{
	printf("\n1.Nhap/Xuat mang");
	printf("\n2.Tim max/min cua mang");
	printf("\n3.Dem so pt chan/le trong mang");
	printf("\n4.Tim kiem pt x theo 2 dang");
	printf("\n5.Tim trong mang co bao nhieu pt x");
	printf("\n6.Tim trong mang co bao nhieu pt lon hon x");
	printf("\n7.Tong cac pt trong mang");
	printf("\n8.Xuat cac so nguyen to trong mang");
	printf("\n9.Xuat cac so hoan thien trong mang");
	printf("\n10.Xuat cac PT o vi tri chan/le trong mang");
	printf("\n11.Xuat gia tri max/min kem theo vi tri cua gia tri do trong mang");
	printf("\n12.Cho 2 day so b va c co n PT. Ghep b va c thanh day a duoc xep tang dan");
	printf("\nChon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			try
			{
				NhapM1C(a, n ,p);
				XuatM1C(p, n);
			}
			catch (const char *msg)
			{
				printf("%s\n", msg);
			}
			break;
		}
	case 2:
		{
			printf("Pt max trong mang la: %d\n", findMax(a, n));
			printf("PT min trong mang la: %d\n", findMin(a, n));
			break;
		}
	case 3:
		{
			printf("So pt chan trong mang: %d\n", DemPTchan(p, n));
			printf("So pt le trong mang: %d\n", DemPTle(p, n));
			break;
		}
	case 4:
		{
			int choose;
			int x;
			do
			{
			printf("\n1.Tim kiem bang LinearSearch");
			printf("\n2.Tim kiem bang BinarySearch");
			printf("\nChon chuc nang: "); scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
				{
					int vt = LinearSearch(a, n, x);
					if (vt == -1)
					{
						printf("- Khong tim thay pt %d trong mang!\n", x);
					}
					else
					{
						printf("Vi tri cua pt x trong mang la: %d\n", vt);
					}
					break;
				}
			case 2:
				{
					int vt = BinarySearch(a, n, x);
					if (vt == -1)
					{
						printf("- Khong tim thay pt %d trong mang!\n", x);
					}
					else
					{
						printf("Vi tri cua pt x trong mang la: %d\n", vt);
					}
					break;
				}
			}
			}
			while (choose != 1 && choose != 2);
			break;
		}
	case 5:
		{
			int x;
			printf("So luong pt %d co trong mang la: %d\n", x, DemPTx(a, n, x));
			break;
		}
	case 6:
		{
			int x;
			printf("So luong PT lon hon PT %d la: %d\n", x, DemPT_Lonhon_x(a, n, x));
			break;
		}
	case 7:
		{
			printf("Tong cac PT trong mang la: %d\n", TongcacPT_trongMang(a, n));
			break;
		}
	case 8:
		{
			XuatSNT(a, n);
			break;
		}
	case 9:
		{
			XuatSoHH(a, n);
			break;
		}
	case 10:
		{
			XuatPT_vitri_chanle(a, n);
			break;
		}
	case 11:
		{
			Xuat_MaxMin_Vitri(a, n);
			break;
		}
	case 12:
		{
			int d[MAX+MAX], b[MAX], c[MAX], q, m, l, *t, *h, *k;
			Sapxep_Tangdan(d, b, c, q, m, l, t, h, k);
			break;
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
//Cau 1:
void NhapM1C (int a[], int &n, int *&p)
{
	p = a;
	printf("Nhap so luong phan tu cua mang: "); scanf_s("%d", &n);
	if (n <= 0)
	{
		throw "- Khong hop le. Vui long nhap lai!";
	}
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu thu a[%d]: ", i); scanf_s("%d", &p[i]);
	}
}
void XuatM1C (int *p, int n)
{
	printf("Xuat mang:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", p[i]);
	}
	printf("\n");
}
int findMax (int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int findMin (int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int DemPTchan (int *p, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] % 2 == 0)
		{
			dem++;
		}
	}
	return dem;
}
int DemPTle (int *p, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] % 2 != 0)
		{
			dem++;
		}
	}
	return dem;
}
int LinearSearch (int a[], int n, int &x)
{
	printf("Nhap pt x can tim: "); scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
int BinarySearch (int a[], int n, int &x)
{
	printf("Nhap pt x can tim: "); scanf_s("%d", &x);
	int left = 0, right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == x)
		{
			return mid;
		}
		else if (a[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}
int DemPTx (int a[], int n, int &x)
{
	int dem = 0;
	printf("Nhap pt x: "); scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
int DemPT_Lonhon_x (int a[], int n, int &x)
{
	int dem = 0;
	printf("Nhap pt x: "); scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x)
		{
			dem++;
		}
	}
	return dem;
}
int TongcacPT_trongMang (int a[], int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + a[i];
	}
	return Sum;
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
void XuatSNT (int a[], int n)
{
	bool check = false;
	printf("Xuat SNT trong mang: \n");
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasnt(a[i]) == 1)
		{
			check = true;
			printf("%5d", a[i]);
		}
	}
	if (check == false)
	{
		printf("Khong co SNT nao trong mang\n");
	}
}
int kiemtrasohh (long n)
{
	long tong = 0;
	for(int i = 1; i < n; i++)
	{
		if (n % i == 0)
			tong = tong + i;
	}
	if (tong == n)
		return 1;
	return 0;
}
void XuatSoHH (int a[], int n)
{
	bool check = false;
	printf("Xuat so hoan hao trong mang: \n");
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasohh(a[i]) == 1)
		{
			check = true;
			printf("%5d", a[i]);
		}
	}
	if (check == false)
	{
		printf("Khong co so hoan hao nao trong mang\n");
	}
}
void XuatPT_vitri_chanle (int a[], int n)
{
	printf("Xuat cac PT o vi tri chan trong mang: \n");
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%5d", a[i]);
		}
	}
	printf("\nXuat cac PT o vi tri le trong mang: \n");
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			printf("%5d", a[i]);
		}
	}
}
void Xuat_MaxMin_Vitri (int a[], int n)
{
	int max = findMax(a, n);
	int min = findMin(a, n);
	for (int i = 0; i < n; i++)
	{
		if (max == a[i])
		{
			printf("PT max trong mang la: %d \tVi tri cua PT max trong mang la: %d\n", max, i);
		}
		if (min == a[i])
		{
			printf("PT min trong mang la: %d \tVi tri cua PT min trong mang la: %d\n", min, i);
		}
	}
}
void Tron_MangBC_VaoA (int d[], int b[], int c[], int &q, int &m, int &l, int *&t, int *&h, int *&k)
{
	printf("Nhap mang B:\n");
	NhapM1C(b, m, h);
	printf("Nhap mang C:\n");
	NhapM1C(c, l, k);
	q = 0;
	for (int i = 0; i < m; i++)
	{
		d[q] = b[i];
		q++;
	}
	for (int i = 0; i < l; i++)
	{
		d[q] = c[i];
		q++;
	}
}
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Sapxep_Tangdan (int d[], int b[], int c[], int &q, int &m, int &l, int *&t, int *&h, int *&k)
{
	Tron_MangBC_VaoA(d, b, c, q, m, l, t, h, k);
	for (int i = 0; i < q - 1; i++)
	{
		for (int j = i + 1; j < q; j++)
		{
			if (d[i] > d[j])
			{
				swap(d[i], d[j]);
			}
		}
	}
	t = d;
	printf("Mang A khi ghep mang B va C va xep tang dan:\n");
	XuatM1C(t, q);
}