#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 100
struct SV
{
	char mssv[5];
	char TenSV[10];
	float diemTB;
	int Namsinh;
};
void nhapM1C_Random(int *&a, int n);
void xuatM1C(int *a, int n);
void TimPT_Le_Max_NuaBenTrai(int *a, int n);
void NhapMTV(int b[][MAX], int &m);
void XuatMTV(int b[][MAX], int m);
void swap(int &x, int &y);
void SapXep_Cot_ChanTren_LeDuoi(int b[][MAX], int m);
void docFile(FILE *&f, SV dsSV[], int &e);
void xuat1SV(SV sv);
void xuatdsSV(SV dsSV[], int e);
void swap2(SV &x, SV &y);
void SapXep_TangDan_TheoMSSV(SV dsSV[], int e);
int TimMSSV_BinarySearch(SV dsSV[], int e, char *x);
int main()
{
	FILE *f;
	SV dsSV[MAX];
	int *a, n = 10, chon, m, e;
	int b[MAX][MAX];
	a = (int *)malloc(n*sizeof(int));
	do
	{
		printf("1.Tao mang 1 chieu ngau nhien\n");
		printf("2.Xuat mang 1 chieu\n");
		printf("3.Tim PT le lon nhat trong nua ben trai trong mang\n");
		printf("4.Nhap MTV\n");
		printf("5.Xuat MTV\n");
		printf("6.Sap xep tren tung cot sao cho so chan o tren, so le o duoi\n");
		printf("7.Sap xep tren tung cot sao cho cac so chan o tren va sap theo thu tu giam dan, so le o duoi sap theo thu tu tang dan\n");
		printf("8.Doc du lieu tu file\n");
		printf("9.Xuat danh sach sinh vien\n");
		printf("10.Sap xep danh sach sinh vien tang dan theo ma sinh vien\n");
		printf("11.Tim sinh vien theo ma so\n");
		printf("Chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
		{
				  nhapM1C_Random(a, n);
				  break;
		}
		case 2:
		{
				  xuatM1C(a, n);
				  break;
		}
		case 3:
		{
				  TimPT_Le_Max_NuaBenTrai(a, n);
				  break;
		}
		case 4:
		{
				  NhapMTV(b, m);
				  break;
		}
		case 5:
		{
				  XuatMTV(b, m);
				  break;
		}
		case 6:
		{
				  SapXep_Cot_ChanTren_LeDuoi(b, m);
				  break;
		}
		case 8:
		{
				  docFile(f, dsSV, e);
				  break;
		}
		case 9:
		{
				  xuatdsSV(dsSV, e);
				  break;
		}
		case 10:
		{
				   SapXep_TangDan_TheoMSSV(dsSV, e);
				   break;
		}
		case 11:
		{
				   char x[5];
				   printf("Nhap mssv can tim: ");
				   fflush(stdin);
				   fgets(x, sizeof(x), stdin);
				   int b = TimMSSV_BinarySearch(dsSV, e, x);
				   if (b == -1)
				   {
					   printf("Khong tim thay\n");
				   }
				   else
				   {
					   printf("Tim thay sinh vien thu %d\n", b + 1);
					   xuat1SV(dsSV[b]);
				   }
		}
		}
	} while (chon != 0);
	return 0;
	getch();
}
void nhapM1C_Random(int *&a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		*(a + i) = rand() % 100;
	}
}
void xuatM1C(int *a, int n)
{
	printf("Xuat mang:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
}
void TimPT_Le_Max_NuaBenTrai(int *a, int n)
{
	int max = a[0];
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] % 2 != 0 && max < a[i])
		{
			max = a[i];
		}
	}
	printf("PT le lon nhat trong nua ben trai cua mang a la: %d\n", max);
}
void NhapMTV(int b[][MAX], int &m)
{
	printf("Nhap cap cua ma tran: "); scanf_s("%d", &m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Nhap PT a[%d][%d]: ", i, j); scanf_s("%d", &b[i][j]);
		}
	}
}
void XuatMTV(int b[][MAX], int m)
{
	printf("Xuat ma tran vuong:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
}
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void SapXep_Cot_ChanTren_LeDuoi(int b[][MAX], int m)
{
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (b[i][k] % 2 != 0 && b[j][k] % 2 == 0)
				{
					swap(b[i][k], b[j][k]);
				}
			}
		}
	}
}
void docFile(FILE *&f, SV dsSV[], int &e)
{
	f = fopen("datastruct.txt", "rt");
	if (!f)
	{
		printf("Loi doc file.");
		return;
	}
	fscanf(f, "%d", &e);
	for (int i = 0; i < e; i++)
	{
		fscanf(f, "%s", dsSV[i].mssv);
		fscanf(f, "%s", dsSV[i].TenSV);
		fscanf(f, "%f", &dsSV[i].diemTB);
		fscanf(f, "%d", &dsSV[i].Namsinh);
	}
	fclose(f);
}
void xuat1SV(SV sv)
{
	printf("\tMa sinh vien: %s\n", sv.mssv);
	printf("\tTen sinh vien: %s\n", sv.TenSV);
	printf("\tDiem TB: %.2f\n", sv.diemTB);
	printf("\tNam sinh: %d\n", sv.Namsinh);
}
void xuatdsSV(SV dsSV[], int e)
{
	printf("Xuat danh sach sinh vien:\n");
	for (int i = 0; i < e; i++)
	{
		printf("- Sinh vien thu %d:\n", i + 1);
		fflush(stdin);
		xuat1SV(dsSV[i]);
		printf("\t-------------------------------------\n");
	}
}
void swap2(SV &x, SV &y)
{
	SV temp = x;
	x = y;
	y = temp;
}
void SapXep_TangDan_TheoMSSV(SV dsSV[], int e)
{
	for (int i = 0; i < e - 1; i++)
	{
		for (int j = i + 1; j < e; j++)
		{
			if (strcmp(dsSV[i].mssv, dsSV[j].mssv) > 0)
			{
				swap2(dsSV[i], dsSV[j]);
			}
		}
	}
}
int TimMSSV_BinarySearch(SV dsSV[], int e, char *x)
{
	int left = 0, right = e - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (strcmp(dsSV[mid].mssv, x) == 0)
		{
			return mid;
		}
		else
		{
			if (strcmp(dsSV[mid].mssv, x) < 0)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	return -1;
}
