#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void NhapMTV (int a[][MAX], int &n);
void NhapMTV_Random (int a[][MAX], int &n);
void XuatMTV (int a[][MAX], int n);
void PT_TrenDuongCheoChinh (int a[][MAX], int n);
void PT_SongSongDuongCheoChinh (int a[][MAX], int n);
int TimPTMax_TamGiacTren (int a[][MAX], int n);
void Sapxep_Dgcheochinh_TangdanTuTrenXuongDuoi (int a[][MAX], int n);
void Sapxep_DgCheoPhu_TangdanTuTrenXuongDuoi (int a[][MAX], int n);
void Sapxep_DgCheoPhu_GiamdanTuTrenXuongDuoi (int a[][MAX], int n);
void Sapxep_DongChanGiam_DongLeTang (int a[][MAX], int n);
void Sapxep_CotChanTang_CotLeGiam (int a[][MAX], int n);
//void SapxepPT_SongSongDuongCheoChinh_DuongcheoChinh_Tangdan (int a[][MAX], int n);
int KiemTraPT_DoixungQuaDuongcheochinh (int a[][MAX], int n);
int main ()
{
	int a[MAX][MAX], n, chon;
	do
	{
	printf("1.Nhap ma tran vuong n>= 5\n");
	printf("2.Xuat ma tran vuong\n");
	printf("3.Xuat cac PT tren duong cheo chinh\n");
	printf("4.Xuat cac PT thuoc duong cheo song song voi duong cheo chinh\n");
	printf("5.Tim Max thuoc tam giac tren cua duong cheo chinh\n");
	printf("6.Sap xep ma tran tang dan theo kieu zic zac\n");
	printf("7.Sap xep duong cheo chinh tang dan tu tren xuong duoi\n");
	printf("8.Sap xep duong cheo phu tang dan/giam dan tu tren xuong duoi\n");
	printf("9.Sap xep dong chan giam dong le tang\n");
	printf("10.Sap xep cot chan tang cot le giam\n");
	printf("11.Sap xep cac PT tren duong cheo chinh va duong cheo song song voi duong cheo chinh tang dan\n");
	printf("12.Kiem tra cac PT trong mang co doi xung nhau qua duong cheo chinh\n");
	printf("Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		{
			int choose;
			do
			{
			printf("1.Nhap ma tran thu cong\n");
			printf("2.Nhap ma tran ngau nhien\n");
			printf("Chon chuc nang: "); scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
				{
					NhapMTV(a, n);
					break;
				}
			case 2:
				{
					NhapMTV_Random(a, n);
					break;
				}
			}
			}
			while (choose != 1 && choose != 2);
			break;
		}
	case 2:
		{
			XuatMTV(a, n);
			break;
		}
	case 3:
		{
			PT_TrenDuongCheoChinh(a, n);
			break;
		}
	case 4:
		{
			PT_SongSongDuongCheoChinh(a, n);
			break;
		}
	case 5:
		{
			printf("PT Max thuoc tam giac tren cua duong cheo chinh trong mang la: %d\n", TimPTMax_TamGiacTren(a, n));
			break;
		}
	case 6:
		{
			break;
		}
	case 7:
		{
			Sapxep_Dgcheochinh_TangdanTuTrenXuongDuoi(a, n);
			break;
		}
	case 8:
		{
			int choose;
			do
			{
			printf("1.Tang dan tu tren xuong duoi\n");
			printf("2.Giam dan tu tren xuong duoi\n");
			printf("Chon chuc nang: "); scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
				{
					Sapxep_DgCheoPhu_TangdanTuTrenXuongDuoi(a, n);
					break;
				}
			case 2:
				{
					Sapxep_DgCheoPhu_GiamdanTuTrenXuongDuoi(a, n);
					break;
				}
			}
			}
			while (choose != 1 && choose != 2);
			break;
		}
	case 9:
		{
			Sapxep_DongChanGiam_DongLeTang(a, n);
			break;
		}
	case 10:
		{
			Sapxep_CotChanTang_CotLeGiam(a, n);
			break;
		}
	case 11:
		{
			//SapxepPT_SongSongDuongCheoChinh_DuongcheoChinh_Tangdan(a, n);
			break;
		}
	case 12:
		{
			printf("%s\n", (KiemTraPT_DoixungQuaDuongcheochinh(a, n) == 1 ? "Mang doi xung qua duong cheo chinh":"Mang ko doi xung qua duong cheo chinh"));
		}
	}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void NhapMTV (int a[][MAX], int &n)
{
	do
	{
		printf("Nhap cap cua ma tran: "); scanf_s("%d", &n);
	}
	while (n < 5);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void NhapMTV_Random (int a[][MAX], int &n)
{
	do
	{
	printf("Nhap cap cua ma tran: "); scanf_s("%d", &n);
	}
	while (n < 5);
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 101;
		}
	}
}
void XuatMTV (int a[][MAX], int n)
{
	printf("Xuat ma tran vuong:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void PT_TrenDuongCheoChinh (int a[][MAX], int n)
{
	printf("Cac PT tren duong cheo chinh:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%5d", a[i][j]);
			}
		}
	}
	printf("\n");
}
void PT_SongSongDuongCheoChinh (int a[][MAX], int n)
{
	printf("Cac PT thuoc duong cheo song song voi duong cheo chinh\n");
	for (int x = 0; x < n; x++)
	for (int y = 0; y < n; y++)
	if (x == 0 && y != n - 1 && x != y || y == 0 && x != n - 1 && x != y)
		{
			for (int i = x, j = y; i < n && j < n; i++, j++)
			{
				printf("%5d", a[i][j]);
			}
			printf("\n");
		}
}
int TimPTMax_TamGiacTren (int a[][MAX], int n)
{
	int max = a[0][n - 1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j && a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Sapxep_Dgcheochinh_TangdanTuTrenXuongDuoi (int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][i] > a[j][j])
			{
				int temp = a[i][i];
				a[i][i] = a[j][j];
				a[j][j] = temp;
			}
		}
	}
}
void Sapxep_DgCheoPhu_TangdanTuTrenXuongDuoi (int a[][MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][n - 1 - i] > a[j][n - 1 - j])
			{
				swap(a[i][n - 1 - i], a[j][n - 1 - j]);
			}
		}
	}
}
void Sapxep_DgCheoPhu_GiamdanTuTrenXuongDuoi (int a[][MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][n - 1 - i] < a[j][n - 1 - j])
			{
				swap(a[i][n - 1 - i], a[j][n - 1 - j]);
			}
		}
	}
}
void Sapxep_DongChanGiam_DongLeTang (int a[][MAX], int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 == 0 && a[k][i] < a[k][j])
				{
					swap(a[k][i], a[k][j]);
				}
			}
		}
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 != 0 && a[k][i] > a[k][j])
				{
					swap(a[k][i], a[k][j]);
				}
			}
		}
	}
}
void Sapxep_CotChanTang_CotLeGiam (int a[][MAX], int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 == 0 && a[i][k] > a[j][k])
				{
					swap(a[i][k], a[j][k]);
				}
			}
		}
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (k % 2 != 0 && a[i][k] < a[j][k])
				{
					swap(a[i][k], a[j][k]);
				}
			}
		}
	}
}
//void SapxepPT_SongSongDuongCheoChinh_DuongcheoChinh_Tangdan (int a[][MAX], int n)
//{
//	printf("Cac PT thuoc duong cheo song song voi duong cheo chinh\n");
//	for (int x = 0; x < n; x++)
//	for (int y = 0; y < n; y++)
//	if (x == 0 && y != n - 1 || y == 0 && x != n - 1)
//		{
//			for (int i = x, j = y; i < n - 1 && j < n - 1; i++, j++)
//			{
//				for (int d = x + 1, c = y + 1; d < n && c < n; d++, c++)
//				{
//					if (a[i][j] > a[d][c])
//					{
//						swap(a[i][j], a[d][c]);
//					}
//				}
//			}
//		}
//}
int KiemTraPT_DoixungQuaDuongcheochinh (int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] != a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}
