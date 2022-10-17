#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
void xoa (char s[], int vitrixoa);
void xoakt (char *s);
int main ()
{
	char s[MAX];
	nhapchuois(s);
	xuatchuois(s);
	printf("Chuoi sau khi xoa khoang trang thua: ");
	xoakt(s);
	puts(s);
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
void xoa (char s[], int vitrixoa)
{
	int n = strlen(s);
	for (int i = vitrixoa; i < n; i++)
	{
		s[i] = s[i + 1];
	}
	s[n - 1] = '\0';
}
void xoakt (char *s)
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			xoa(s, i);
			i--;
		}
	}
	if (s[0] == ' ')
	{
		xoa(s, 0);
	}
	if (s[strlen(s) - 1] == ' ')
	{
		xoa(s, strlen(s) - 1);
	}
}