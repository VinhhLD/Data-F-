//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define MAXROW 100
//#define MAXCOL 100
//void NhapMTV (int a[][MAXCOL], int &n);
//void XuatMTV (int a[][MAXCOL], int n);
//int TongCheoChinh (int a[][MAXCOL], int n);
//int TongCheoPhu (int a[][MAXCOL], int n);
//int KT_scp_CuacoLe (int a[][MAXCOL], int n);
//int Kiemtrascp (int x);
//int DemSCPtren_CheoPhu (int a[][MAXCOL], int n);
//int KTDgcheoChinh_Toanso1 (int a[][MAXCOL], int n);
//int KT_DX (int a[][MAXCOL], int n);
//int main ()
//{
//	int a[MAXROW][MAXCOL], n;
//	NhapMTV(a, n);
//	printf("Xuat ma tran vuong: \n");
//	XuatMTV(a, n);
//	printf("Tong duong cheo chinh trong ma tran vuong la: %d\n", TongCheoChinh(a, n));
//	printf("Tong duong cheo phu trong ma tran vuong la: %d\n", TongCheoPhu(a, n));
//	printf("So luong SCP tren duong cheo phu la: %d\n", DemSCPtren_CheoPhu(a, n));
//	if (KTDgcheoChinh_Toanso1(a, n) == 0)
//	{
//		printf("Duong cheo chinh trong ma tran vuong ko toan so 1");
//	}
//	else printf("Duong cheo chinh trong ma tran vuong toan so 1");
//	return 0;
//	getch ();
//}
//void NhapMTV (int a[][MAXCOL], int &n)
//{
//	printf("Nhap cap cua ma tran vuong: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("Nhap a[%d][%d]: ", i, j); scanf_s("%d", &a[i][j]);
//		}
//	}
//}
//void XuatMTV (int a[][MAXCOL], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int TongCheoChinh (int a[][MAXCOL], int n)
//{
//	int tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				tong = tong + a[i][j];
//			}
//		}
//	}
//	return tong;
//}
//int TongCheoPhu (int a[][MAXCOL], int n)
//{
//	int tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if ((i + j) == (n - 1))
//			{
//				tong = tong + a[i][j];
//			}
//		}
//	}
//	return tong;
//}
//int KT_scp_CuacoLe (int n)
//{
//	int i = 1;
//	while (i * i <= n)
//	{
//		if (i * i == n)
//			return 1;
//		i++;
//	}
//	return 0;
//}
//int Kiemtrascp (int x)
//{
//	if ((sqrt((float)x)) == (int) sqrt((float)x))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int DemSCPtren_CheoPhu (int a[][MAXCOL], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (Kiemtrascp(a[i][j]) == 1 && i + j == n - 1)
//			{
//				dem++;
//			}
//		}
//	}
//	return dem;
//}
//int KTDgcheoChinh_Toanso1 (int a[][MAXCOL], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j && a[i][j] != 1)
//				return 0;
//		}
//	}
//	return 1;
//}
//int KT_DX (int a[][MAXCOL], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i][j] != a[j][i])
//				return 0;
//		}
//	}
//	return 1;
//}
//int VitriPT_XHnhieunhat (int a[][MAXCOL], int n)
//{
//
//}
