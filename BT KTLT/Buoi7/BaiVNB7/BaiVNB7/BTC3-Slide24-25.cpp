//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#define MAX 100
//void NhapChuoi (char s[]);
//void XuatChuoi (char s[]);
//void DemKhoangTrang (char s[]);
//void XoaKT (char s[], int vitrixoa);
//void XoaKT_Thua (char *s);
//void ChuyenDoi (char s[]);
//void TimTen (char s[], char *x);
//int DauCachCuoi (char *s);
//void HienThi (char *s);
//char* ThemTu (char *s, char *x, int &vt);
//int DemTu (char s[], char x);
//void DemCacKiTu (char s[]);
//void DemKiTu (char *s);
//void KiTuXuatHienNhieuNhat (char *s);
//void Chen (char *s, char *x, int &vt);
//void xoatu(char *s, char *b);
//int main ()
//{
//	char s[MAX];
//	int chon;
//	do
//	{
//	printf("1.Nhap chuoi s\n");
//	printf("2.Xuat chuoi s\n");
//	printf("3.Dem co bao nhieu khoang trang trong chuoi\n");
//	printf("4.Xoa khoang trang THUA trong chuoi\n");
//	printf("5.Viet HOA chu cai dau tien cua moi tu va neu khong phai chu cai dau tien moi tu thi viet THUONG\n");
//	printf("6.Tim ten trong chuoi Ho Ten\n");
//	printf("7.Cat chuoi thanh chuoi ho lot va chuoi ten\n");
//	printf("8.Chen 1 tu o bat ki vi tri nao\n");
//	printf("9.Xoa 1 tu nao do trong chuoi\n");
//	printf("10.Dem so lan xuat hien cua moi ky tu\n");
//	printf("11.Tim ky tu xuat hien nhieu nhat trong chuoi\n");
//	printf("Chon chuc nang: "); scanf_s("%d", &chon);
//	switch (chon)
//	{
//	case 1:
//		{
//			NhapChuoi(s);
//			break;
//		}
//	case 2:
//		{
//			XuatChuoi(s);
//			break;
//		}
//	case 3:
//		{
//			DemKhoangTrang(s);
//			break;
//		}
//	case 4:
//		{
//			XoaKT_Thua(s);
//			break;
//		}
//	case 5:
//		{
//			ChuyenDoi(s);
//			break;
//		}
//	case 6:
//		{
//			char x[15];
//			TimTen(s, x);
//			break;
//		}
//	case 7:
//		{
//			HienThi(s);
//			break;
//		}
//	case 8:
//		{
//			char x[MAX];
//			int vt;
//			Chen(s, x, vt);
//			break;
//		}
//	case 9:
//		{
//			char b[MAX];
//			xoatu(s, b);
//			break;
//		}
//	case 10:
//		{
//			DemKiTu(s);
//			break;
//		}
//	case 11:
//		{
//			KiTuXuatHienNhieuNhat(s);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//}
//void NhapChuoi (char s[])
//{
//	printf("Nhap chuoi s: ");
//	fflush(stdin);
//	gets(s);
//}
//void XuatChuoi (char s[])
//{
//	printf("Xuat chuoi s: ");
//	puts(s);
//}
//void DemKhoangTrang (char s[])
//{
//	int dem = 0;
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] == ' ')
//		{
//			dem++;
//		}
//	}
//	printf("Chuoi co %d khoang trang!\n", dem);
//}
//void XoaKT (char s[], int vitrixoa)
//{
//	int n = strlen(s);
//	for (int i = vitrixoa; i < n; i++)
//	{
//		s[i] = s[i + 1];
//	}
//	s[n - 1] = '\0';
//}
//void XoaKT_Thua (char *s)
//{
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] == ' ' && s[i + 1] == ' ')
//		{
//			XoaKT(s, i);
//			i--;
//		}
//	}
//	if (s[0] == ' ')
//	{
//		XoaKT(s, 0);
//	}
//	if (s[strlen(s) - 1] == ' ')
//	{
//		XoaKT(s, strlen(s) - 1);
//	}
//}
//void ChuyenDoi (char s[])
//{
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (i == 0 || (i > 0 && s[i -1] == ' '))
//		{
//			if (s[i] >= 'a' && s[i] <= 'z')
//			{
//				s[i] = s[i] - 32;
//			}
//		}
//		else
//		{
//			if (s[i] >= 'A' && s[i] <= 'Z')
//			{
//				s[i] = s[i] + 32;
//			}
//		}
//	}
//	XuatChuoi(s);
//}
//void TimTen (char s[], char *x)
//{
//	printf("Nhap ten muon tim: ");
//	fflush(stdin);
//	gets(x);
//	int n = strlen(s);
//	char *t;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (s[i] == ' ')
//		{
//			t = s + i + 1;
//			break;
//		}
//	}
//	if (strcmpi(t, x) == 0)
//	{
//		printf("Ten nay da nhap dung\n");
//	}
//	else
//	{
//		printf("Ban nhap sai ten\n");
//	}
//}
//int DauCachCuoi (char *s)
//{
//	int n = strlen(s);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (s[i] == ' ')
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void HienThi (char *s)
//{
//	int last = DauCachCuoi(s);
//	printf("Ho lot: ");
//	for (int i = 0; i < last; i++)
//	{
//		printf("%c", s[i]);
//	}
//	printf("\tTen: ");
//	for (int i = last + 1; i < strlen(s); i++)
//	{
//		printf("%c", s[i]);
//	}
//	printf("\n");
//}
//char* ThemTu (char *s, char *x, int &vt)
//{
//	printf("Nhap tu can chen: ");
//	fflush(stdin);
//	gets(x);
//	int n1 = strlen(s);
//	int n2 = strlen(x);
//	char *result;
//	printf("Nhap vi tri can chen: "); scanf_s("%d", &vt);
//	//for (int i = n1 - 1; i >= vt; i--)
//	//{
//	//	s[i + 1] = s[i];
//	//}
//	//strcpy(s[vt], *x,);
//	//s[n1 + 1] = '\0';
//	if (n1 >= vt)
//	{
//		size_t result_size = n1 + n2 + 1;
//		result = (char *)malloc(sizeof(char) * result_size);
//		if (result == NULL)
//			return NULL;
//	}
//	for (int i = 0; i < vt; i++)
//	{
//		result[0] = s[i];
//	}
//	for (int j = vt; j < n2; j++)
//	{
//		result[vt] = x[j];
//	}
//	for (int d = vt; d < n1; d++)
//	{
//		result[vt + n2] = s[d];
//	}
//	return result;
//}
////int DemTu (char s[], char x)
////{
////	int dem = 0;
////	for (int i = 0; i < strlen(s); i++)
////	{
////		if (s[i] == x)
////		{
////			dem++;
////		}
////	}
////	return dem;
////}
////void DemCacKiTu (char s[])
////{
////	for (int i = 0; i < strlen(s); i++)
////	{
////		printf("Ky tu %c xuat hien %d lan\n", s[i], DemTu(s, s[i])); 
////	}
////}
//void DemKiTu (char *s)
//{
//	int a[MAX], n = 0;
//    for(int i = 0; i < (int)strlen(s); i++)
//    {
//        int d = 1;
//        for (int j = i + 1; j < (int)strlen(s); j++)
//            if (s[i] == s[j])
//            {    d++;
//                for (int k = j; k < (int)strlen(s); k++)
//                    s[k] = s[k + 1];
//                        j--;
//            }
//            a[n++] = d;
//    }
//	for(int i = 0; i < (int)strlen(s); i++)
//	{
//		printf("Ki tu %c xuat hien %d lan\n", s[i], a[i]);
//	}
//}
//void KiTuXuatHienNhieuNhat (char *s)
//{
//	int a[MAX], n = 0;
//	for(int i = 0; i < (int)strlen(s); i++)
//    {
//        int d = 1;
//        for (int j = i + 1; j < (int)strlen(s); j++)
//            if (s[i] == s[j])
//            {    d++;
//                for (int k = j; k < (int)strlen(s); k++)
//                    s[k] = s[k + 1];
//                        j--;
//            }
//            a[n++] = d;
//    }
//	int max = a[0];
//	for (int i = 1; i < strlen(s); i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	for (int  i = 1; i < strlen(s); i++)
//	{
//		if (a[i] == max)
//		{
//			printf("Ki tu %c xuat hien nhieu nhat la %d lan\n", s[i], a[i]);
//		}
//	}
//}
//void Chen (char *s, char *x, int &vt)
//{
//	char c[255];
//	printf("Nhap tu can chen: ");
//	fflush(stdin);
//	gets(x);
//	printf("Nhap vi tri can chen: "); scanf_s("%d", &vt);
//	strcpy(c, s + vt);
//	strcpy(s + vt, x);
//	strcat(s, c);
//	printf("Chuoi sau khi chen:");
//	puts(s);
//}
//void xoatu(char *s, char *b)
//{
//	printf("Nhap tu can xoa: ");
//	fflush(stdin);
//	gets(b);
//	while(strstr(s,b) != NULL)
//	{
//		int t = strlen(s) - strlen(strstr(s,b)), d = strlen(b);
//		if ((s[t - 1] == ' ' && s[t + d] == ' ') || (s[t - 1] == ' ' && t + d == strlen(s)))
//			//truong hop tu giua va tu cuoi
//		{
//			strcpy(s + t - 1, s + t + d);
//		}// s+t-1 la khoang trang 
//		if (s[t + d] == ' ' && t == 0)
//		{//truong hop xoa tu dau tien
//			strcpy(s, s + t + d + 1);
//		}
//	}
//	printf("Chuoi sau khi xoa:");
//	puts(s);
//}	
//
