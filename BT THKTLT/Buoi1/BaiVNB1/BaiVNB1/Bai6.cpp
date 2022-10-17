//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//void Tinh_Thoigian_Nghihuu (char *x, char *s, int &d, int &m, int &y);
//int main ()
//{
//	char x[30], s[10];
//	int d, m, y;
//	try
//	{
//		Tinh_Thoigian_Nghihuu(x, s, d, m, y);
//	}
//	catch (const char *msg)
//	{
//		printf("%s\n", msg);
//	}
//	catch (int Num)
//	{
//		printf("Loi ma: %d\n", Num);
//	}
//	return 0;
//	getch ();
//}
//void Tinh_Thoigian_Nghihuu (char *x, char *s, int &d, int &m, int &y)
//{
//	printf("Nhap ho ten: ");
//	fflush(stdin);
//	gets(x);
//	do
//	{
//		printf("\t\t- Nhap ngay: ");
//		scanf_s("%d", &d);
//	}
//	while (d <= 0 || d > 31);
//	do
//	{
//		printf("\t\t- Nhap thang: ");
//		scanf_s("%d", &m);
//	}
//	while (m <= 0 || m > 12);
//	printf("\t\t- Nhap vao nam: ");
//	scanf_s("%d", &y);
//	printf("Nhap gioi tinh: ");
//	fflush(stdin);
//	gets(s);
//	if ((2022 - y) < 18)
//	{
//		throw 101;
//	}
//	else if (stricmp(s, "Nam") != 0 && stricmp(s, "Nu") != 0)
//	{
//		throw "errorcode";
//	}
//	else
//	{
//		printf("Ho ten: %s\n", x);
//		printf("Gioi tinh: %s\n", s);
//		printf("Sinh ngay: %d/%d/%d\n", d, m, y);
//		printf("Hien tai (nam 2022) %s da duoc %d tuoi\n", x, (2022 - y));
//		if (stricmp(s, "Nam") == 0)
//		{
//			printf("Thoi gian %s duoc nghi huu la thang %d/%d\n", x, m, y + 62);
//		}
//		else
//		{
//			printf("Thoi gian %s duoc nghi huu la thang %d/%d\n", x, m, y + 60);
//		}
//	}
//}
