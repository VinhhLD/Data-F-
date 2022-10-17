/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void xoa (char s[], int vt);
void xoacackhoangtrang (char s[]);
int main ()
{
	char s[MAX];
	printf("Nhap mang: ");
	fflush(stdin);
	gets(s);
	printf("Xuat mang: ");
	puts(s);
	xoacackhoangtrang(s);
	printf("Mang sau khi xoa tat ca cac khoang trang: ");
	puts(s);
	return 0;
	getch ();
}
void xoa (char s[], int vt)
{
	int n = strlen(s);
	for (int i = vt; i < n; i++)
	{
		s[i] = s[i + 1];
	}
	s[n - 1] = '\0';
}
void xoacackhoangtrang (char s[])
{
	for (int i = 0; i < strlen(s); i++)	
	{
		if (s[i] == ' ')
		{
			xoa(s, i);
			i--;
		}
	}
}*/