/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
int Doixungchuoi (char s[]);
int main ()
{
	char s[MAX];
	nhapchuois(s);
	xuatchuois(s);
	if (Doixungchuoi(s) == 0)
	{
		printf("Chuoi %s khong doi xung\n", s);
	}
	else
		printf("Chuoi %s doi xung\n", s);
	return 0;
	getch ();
}
void nhapchuois (char s[])
{
	printf("Nhap chuoi s: ");
	gets(s);
}
void xuatchuois (char s[])
{
	printf("Xuat chuoi s la: ");
	puts(s);
}
int Doixungchuoi (char s[])
{
	int len = strlen(s) / 2;
	for (int i = 0; i < len; i++)
	{
		if (s[i] != s[strlen(s) - i - 1])
		{
			return 0;
			break;
		}
	}
	return 1;
}*/