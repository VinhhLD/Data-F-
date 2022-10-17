//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#define MAX 100
//struct SACH
//{
//	char maso[11];
//	char tensach[30];
//	float gia;
//	int soluong;
//};
//void docfilebook (FILE *&F, SACH dsbook[], int&n);
//void nhap1book (SACH &book);
//void xuat1book (SACH book);
//void xuatdsbook (SACH dsbook[], int n);
//void swap (SACH &x, SACH &y);
//void sapxeptangtheoten (SACH dsbook[], int n);
//void xuatbook_slhon10 (SACH dsbook[], int n);
//void xoavitri_sl0 (SACH dsbook[], int &n, int x);
//void xoabooksl0 (SACH dsbook[], int &n);
//void sapxepgiamdantheosl (SACH dsbook[], int n);
//int main ()
//{
//	FILE *f;
//	SACH dsbook[MAX];
//	int n;
//	int chon;
//	docfilebook(f, dsbook, n);
//	do
//	{
//	printf("1.Xuat thong tin danh sach\n");
//	printf("2.Sap xep danh sach tang dan theo ten\n");
//	printf("3.Xuat cac sach co so luong > 10\n");
//	printf("4.Xoa cac danh sach co so luong = 0\n");
//	printf("5.Sap xep danh sach giam dan theo so luong\n");
//	printf("Chon chuc nang: ");
//	scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			xuatdsbook(dsbook, n);
//			break;
//		}
//	case 2:
//		{
//			sapxeptangtheoten(dsbook, n);
//			break;
//		}
//	case 3:
//		{
//			xuatbook_slhon10(dsbook, n);
//			break;
//		}
//	case 4:
//		{
//			xoabooksl0(dsbook, n);
//			break;
//		}
//	case 5:
//		{
//			sapxepgiamdantheosl(dsbook, n);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	xuatdsbook(dsbook, n);
//	getch ();
//}
//void docfilebook (FILE *&f, SACH dsbook[], int &n)
//{
//	f = fopen("ip.txt", "rt");
//	fscanf(f, "%d ", &n);
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(f, "%s ", dsbook[i].maso);
//		fgets(dsbook[i].tensach, 30, f);
//		fscanf(f, "%f ", &dsbook[i].gia);
//		fscanf(f, "%d", &dsbook[i].soluong);
//	}
//}
//void nhap1book (SACH &book)
//{
//	printf("\tNhap ma so sach: ");
//	scanf_s("%s", book.maso);
//	printf("\tNhap ten sach: ");
//	fflush(stdin);
//	gets(book.tensach);
//	printf("\tNhap gia ban: ");
//	scanf_s("%f", &book.gia);
//	printf("\tNhap so luong: ");
//	scanf_s("%d", &book.soluong);
//}
//void xuat1book (SACH sach)
//{
//	printf("\tMa sach: %s\n", sach.maso);
//	printf("\tTen sach: %s", sach.tensach);
//	printf("\tGia ban: %.3f\n", sach.gia);
//	printf("\tSo luong: %d\n", sach.soluong);
//}
//void xuatdsbook (SACH dsbook[], int n)
//{
//	printf("Danh sach nhung cuon sach\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Sach thu %d\n", i + 1);
//		xuat1book(dsbook[i]);
//		printf("\t--------------------------------\n");
//	}
//}
//void swap (SACH &x, SACH &y)
//{
//	SACH temp = x;
//	x = y;
//	y = temp;
//}
//void sapxeptangtheoten (SACH dsbook[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if(strcmp(dsbook[j].tensach, dsbook[i].tensach) < 0)
//			{
//				swap(dsbook[j], dsbook[i]);
//			}
//		}
//	}
//}
//void xuatbook_slhon10 (SACH dsbook[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dsbook[i].soluong > 10)
//		{
//			xuat1book(dsbook[i]);
//			printf("\t--------------------------------\n");
//		}
//	}
//}
//void xoavitri_sl0 (SACH dsbook[], int &n, int x)
//{
//	for (int i = x; i < n; i++)
//	{
//		dsbook[i] = dsbook[i + 1];
//	}
//	n--;
//}
//void xoabooksl0 (SACH dsbook[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (dsbook[i].soluong == 0)
//		{
//			xoavitri_sl0(dsbook, n, i);
//			i--;
//		}
//	}
//}
//void sapxepgiamdantheosl (SACH dsbook[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if(dsbook[j].soluong > dsbook[i].soluong)
//			{
//				swap(dsbook[j], dsbook[i]);
//			}
//		}
//	}
//}