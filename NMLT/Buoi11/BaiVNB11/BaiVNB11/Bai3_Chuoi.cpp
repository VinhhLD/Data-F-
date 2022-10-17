/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuois (char s[]);
void xuatchuois (char s[]);
void moitu_1dong (char s[]);
int main ()
{
	char s[MAX];
	nhapchuois(s);
	xuatchuois(s);
	moitu_1dong(s);
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
void moitu_1dong (char s[])
{
	printf("Xuat moi tu 1 dong: \n");
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			printf("%c", s[i]);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	printf("\n");
}*/