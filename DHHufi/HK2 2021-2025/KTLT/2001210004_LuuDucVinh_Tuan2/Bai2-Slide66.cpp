//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#define MAX 100
//struct SV
//{
//	char mssv[11];
//	char hoten[30];
//	float diemTB;
//};
//void docfile (FILE *&f, SV dsSV[], int &n);
//void xuatdsSV (SV dsSV[], int n);
//void ghifile (FILE *&f, SV dsSV[], int &n);
//int main ()
//{
//	FILE *f;
//	SV dsSV[MAX];
//	int n, chon;
//	do
//	{
//	printf("1.Ghi ra file bin\n");
//	printf("2.Doc tu file bin\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			try
//			{
//				ghifile(f, dsSV, n);
//			}
//			catch (const char* msg)
//			{
//				printf("%s\n", msg);
//			}
//			break;
//		}
//	case 2:
//		{
//			docfile(f, dsSV, n);
//			xuatdsSV(dsSV, n);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void docfile (FILE *&f, SV dsSV[], int &n)
//{
//	f = fopen("Struct.bin", "rb");
//	if (!f)
//	{
//		printf("Loi doc file.");
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		fread(&dsSV[i], sizeof (struct SV), 1, f);
//	}
//	fclose(f);
//}
//void xuatdsSV (SV dsSV[], int n)
//{
//	printf("- Danh sach sinh vien:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Sinh vien thu %d\n", i + 1);
//		printf("\tMa so sinh vien: %s\n", dsSV[i].mssv);
//		printf("\tHo ten: %s\n", dsSV[i].hoten);
//		printf("\tDiem TB: %.2f\n", dsSV[i].diemTB);
//		printf("\t---------------------------------\n");
//	}
//}
//void ghifile (FILE *&f, SV dsSV[], int &n)
//{
//	f = fopen("Struct.bin", "wb");
//	if (!f)
//	{
//		printf("Loi ghi file.");
//		return;
//	}
//	printf("Nhap so luong sinh vien: "); scanf_s("%d", &n);
//	if (n <= 0)
//	{
//		throw "\t- Khong hop le. Vui long nhap lai!";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("- Sinh vien thu %d\n", i + 1);
//		printf("\tNhap ma so sinh vien: ");
//		fflush(stdin);
//		gets(dsSV[i].mssv);
//		if (strlen(dsSV[i].mssv) > 11)
//		{
//			throw "\t- Nhap qua ki tu cho phep. Vui long nhap lai!";
//		}
//		printf("\tNhap ho ten: ");
//		fflush(stdin);
//		gets(dsSV[i].hoten);
//		if (strlen(dsSV[i].hoten) > 30)
//		{
//			throw "\t- Nhap qua ki tu cho phep. Vui long nhap lai!";
//		}
//		printf("\tNhap diem TB: "); scanf_s("%f", &dsSV[i].diemTB);
//		if (dsSV[i].diemTB < 0)
//		{
//			throw "\t- Khong hop le. Vui long nhap lai!";
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		fwrite(&dsSV[i], sizeof(struct SV), 1, f);
//	}
//	fclose(f);
//}