/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
void tachtu (char s[]);
void tachhoten (char s[]);
void doikituthuong_hoa (char s[]);
int main ()
{
	char s[MAX];
	int chon;
	do
	{
	printf("\n1.Nhap ho ten");
	printf("\n2.Xuat ho ten");
	printf("\n3.Lay ra Ho, Chu lot (neu co), Ten");
	printf("\n4.Doi ki tu dau thanh chu hoa");
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
			tachhoten(s);
			break;
		}
	case 4:
		{
			doikituthuong_hoa(s);
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
void tachhoten (char s[])
{
	char *p = strtok (s, " ");
	int a = 0;
	char mang[5][MAX];
	while (p != NULL)
	{
		strcpy(mang[a], p);
		a++;
		p = strtok (NULL, " ");
	}
	printf("Ho: %s\n", mang[0]);
	printf("Chu lot: ");
	for (int i = 1; i < a - 1; i++)
	{
		printf("%s ", mang[i]);
	}
	printf("\nTen: %s", mang[a - 1]);
}
void doikituthuong_hoa (char s[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || (i > 0 && s[i - 1] == 32))
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}
	}
}*/