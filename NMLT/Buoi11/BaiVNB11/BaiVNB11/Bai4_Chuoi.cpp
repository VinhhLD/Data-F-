/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
int demsotu (char s[]);
int main ()
{
	char s[MAX];
	nhapchuois(s);
	xuatchuois(s);
	printf("So tu trong chuoi la: %d\n", demsotu(s));
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
int demsotu (char s[])
{
	int n = strlen(s);
	int dem = 0;
	if (s[0] != ' ')
	{
		dem = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			dem++;
		}
	}
	return dem;
}*/