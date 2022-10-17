//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#define maxrow 100
//#define maxcol 100
//void nhapm2c (int a[][maxcol], int m, int n);
//void xuatm2c (int a[][maxcol], int m, int n);
//void nhap_random (int a[][maxcol], int &m, int &n);
//int check_sothinhvuong (int n);
//void kiemtracot_lasothinhvuong (int a[][maxcol], int m, int n);
//int demsolanxuathien_etronga (int a[][maxcol], int e[][maxcol], int arow, int acol, int erow, int ecol);
//int main ()
//{
//	int a[maxrow][maxcol];
//	int e[maxrow][maxcol];
//	int arow, acol;
//	int chon;
//	do
//	{
//	printf("\t\t================ menu ================\n");
//	printf("1.nhap ma tran a tu ban phim\n");
//	printf("2.tao ma tran a ngau nhien\n");
//	printf("3.xuat ma tran a\n");
//	printf("4.abc\n");
//	printf("5.liet ke danh sach phan tu cua tung cot chua so thinh vuong\n");
//	printf("8.dem so lan xuat hien cua ma tran e trong ma tran a\n");
//	printf("chon chuc nang: ");
//	scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			printf("nhap so dong: ");
//			scanf_s("%d", &arow);
//			printf("nhap so cot: ");
//			scanf_s("%d", &acol);
//			nhapm2c(a, arow, acol);
//			break;
//		}
//	case 2:
//		{
//			nhap_random(a, arow, acol);
//			break;
//		}
//	case 3:
//		{
//			printf("mang 2 chieu a vua nhap la:\n");
//			xuatm2c(a, arow, acol);
//			break;
//		}
//	case 5:
//		{
//			kiemtracot_lasothinhvuong(a, arow, acol);
//			break;
//		}
//	case 8:
//		{
//			int erow, ecol;
//			printf("nhap so dong: ");
//			scanf_s("%d", &erow);
//			printf("nhap so cot: ");
//			scanf_s("%d", &ecol);
//			nhapm2c(e, erow, ecol);
//			printf("mang 2 chieu e vua nhap la:\n");
//			xuatm2c(e, erow, ecol);
//			int temp = demsolanxuathien_etronga(a, e, arow, acol, erow, ecol);
//			if (temp == demsolanxuathien_etronga(a, e, arow, acol, erow,ecol))
//			{
//				printf("so lan xuat hien cua ma tran e trong ma tran a la: %d\n", temp);
//			}
//			else
//			{
//				printf("ma tran e ko xuat hien trong ma tran a\n");
//			}
//			break;
//		}
//
//
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void nhapm2c (int a[][maxcol], int m, int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("nhap a[%d][%d]: ", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//}
//void xuatm2c (int a[][maxcol], int m, int n)
//{
//	printf("xuat ma tran:\n");
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void nhap_random (int a[][maxcol], int &m, int &n)
//{
//	printf("nhap so dong: "); scanf_s("%d", &m);
//	printf("nhap so cot: "); scanf_s("%d", &n);
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = rand();
//		}
//	}
//}
//int check_sothinhvuong (int n)
//{
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum > n)
//	{
//		return 1;
//	}
//	return 0;
//}
//void kiemtracot_lasothinhvuong (int a[][maxcol], int m, int n)
//{
//	bool flag = true;
//	for (int j = 0; j < n; j++)
//	{
//		flag = false;
//		printf("so thinh vuong trong cot %d la: ", j);
//		for (int i = 0; i < m; i++)
//		{
//			int b = check_sothinhvuong(a[i][j]);
//			if (b == 1)
//			{
//				printf("%d  ", a[i][j]);
//				flag = true;
//			}
//		}
//		if (flag == false)	
//		{
//			printf("khong tim thay so thinh vuong nao");
//		}
//		printf("\n");
//	}
//}
//int demsolanxuathien_etronga (int a[][maxcol], int e[][maxcol], int arow, int acol, int erow, int ecol)
//{
//	bool check;
//	int count = 0;
//	for (int iarow = 0; iarow < arow; iarow++)
//	{
//		for (int jacol = 0; jacol < acol; jacol++)
//		{
//			check = true;
//			for (int ierow = 0; ierow < erow; ierow++)
//			{
//				for (int jecol = 0; jecol < ecol; jecol++)
//				{
//					if (e[ierow][jecol] != a[iarow + ierow][jacol + jecol])
//					{
//						check = false;
//						break;
//					}
//				}
//				if (check == false)
//				{
//					break;
//				}
//			}
//			if (check == true)
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}