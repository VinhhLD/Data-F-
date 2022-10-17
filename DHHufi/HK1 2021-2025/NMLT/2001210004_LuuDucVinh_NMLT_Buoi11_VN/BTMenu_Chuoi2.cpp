/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
int demchucai_HOA (char s[]);
int demchuso (char s[]);
int demkhoangtrang (char s[]);
void sosanh (char s[]);
int main ()
{
	char s[MAX];
	int chon;
	do
	{
		printf("\n1.Nhap chuoi");
		printf("\n2.Xuat chuoi");
		printf("\n3.Dem chu cai: A, B, C, ....Z");
		printf("\n4.Dem chu so: 0, 1, 2, ....9");
		printf("\n5.Dem khoang trang");
		printf("\n6.Trong 3 loai tren, loai nao nhieu nhat");
		printf("\nChon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			{
				nhapchuois(s);
				break;
			}
		case 2:
			{
				xuatchuois(s);
				break;
			}
		case 3:
			{
				printf("So luong chu cai IN HOA trong chuoi la: %d\n", demchucai_HOA(s));
				break;
			}
		case 4:
			{
				printf("So luong chu so trong chuoi la: %d\n", demchuso(s));
				break;
			}
		case 5:
			{
				printf("So luong khoang trang trong chuoi la: %d\n", demkhoangtrang(s));
				break;
			}
		case 6:
			{
				sosanh(s);
				break;
			}
		}
	}
	while (chon != 0);
	return 0;
	getch ();
}
void nhapchuois (char s[])
{
	printf("Nhap chuoi s: ");
	flushall();
	gets(s);
}
void xuatchuois (char s[])
{
	printf("Xuat chuoi s la: ");
	puts(s);
}
int demchucai_HOA (char s[])
{
	int dem = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			dem++;
		}
	}
	return dem;
}
int demchuso (char s[])
{
	int dem = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			dem++;
		}
	}
	return dem;
}
int demkhoangtrang (char s[])
{
	int dem = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (isspace(s[i]))
		{
			dem++;
		}
	}
	return dem;
}
void sosanh (char s[])
{
	int hoa = demchucai_HOA(s);
	int so = demchuso(s);
	int space = demkhoangtrang(s);
	if (hoa > so && hoa > space)
	{
		printf("Loai nhieu nhat la: dem chu hoa\n");
	}
	else if (so > hoa && so > space)
	{
		printf("Loai nhieu nhat la: dem chu so\n");
	}
	else
		printf("Loai nhieu nhat la: dem khoang trang\n");
}*/