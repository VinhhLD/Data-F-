//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//void NhapChuoi (char *s);
//void XuatChuoi (char *s);
//void XuatTungKyTu (char *s);
//void ChuyenKyTuHoa (char *s);
//void VietHoaChu_SauDauCach (char *s);
//int main ()
//{
//	char *s;
//	s = (char *)malloc(100*sizeof(char));
//	int chon;
//	do
//	{
//	printf("1.Nhap chuoi\n");
//	printf("2.Xuat chuoi\n");
//	printf("3.Xuat gia tri tung ky tu\n");
//	printf("4.Chuyen cac ky tu ve chu hoa\n");
//	printf("5.Chuyen cac ky tu dau moi tu (dung sau dau cach) ve chu hoa\n");
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
//			XuatTungKyTu(s);
//			break;
//		}
//	case 4:
//		{
//			ChuyenKyTuHoa(s);
//			break;
//		}
//	case 5:
//		{
//			VietHoaChu_SauDauCach(s);
//			break;
//		}
//	}
//	}
//	while (chon != 0);
//	return 0;
//	getch ();
//	free(s);
//}
//void NhapChuoi (char *s)
//{
//	printf("Nhap chuoi s: ");
//	fflush(stdin);
//	gets(s);
//}
//void XuatChuoi (char *s)
//{
//	printf("Xuat chuoi s: ");
//	puts(s);
//}
//void XuatTungKyTu (char *s)
//{
//	for (int i = 0; i < strlen(s); i++)
//	{
//		printf("Ky tu s[%d]: %c\n", i, *(s + i));
//	}
//}
//void ChuyenKyTuHoa (char *s)
//{
//	printf("Chuyen sang chu hoa: %s\n", strupr(s));
//}
//void VietHoaChu_SauDauCach (char *s)
//{
//	if (*s >= 'a' && *s <= 'z')
//	{
//		*s -= 32;
//	}
//	for (int i = 1; i < strlen(s); i++)
//	{
//		if (*(s + i - 1) == ' ' && *(s + i) >= 'a' && *(s + i) <= 'z')
//		{
//			*(s + i) -= 32;
//		}
//	}
//}