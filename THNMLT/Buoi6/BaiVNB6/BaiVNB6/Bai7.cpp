/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
void nhapchuoi (char s[]);
void xuatchuoi (char s[]);
int demkitudacbiet (char s[]);
int main ()
{
	char s[MAX];
	nhapchuoi(s);
	xuatchuoi(s);
	printf("So luong ki tu dac biet trong chuoi la: %d\n", demkitudacbiet(s));
	return 0;
	getch ();
}
void nhapchuoi (char s[])
{
	printf("Nhap chuoi: ");
	gets(s);
}
void xuatchuoi (char s[])
{
	printf("Xuat chuoi: ");
	puts(s);
	int i = strlen(s);
	printf("Do dai chuoi la: %d\n", i);
}
int demkitudacbiet (char s[])
{
	int count = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		char a = s[i];
		if (a == ' ' || a == '!' || a == '@' || a == '#' || a == '%' || a == '^' || a == '&' || a == '*' || a == '(' || a == ')' || a == '-' || a == '+' || a == '=' || a == '{' || a == '}' || a == '|')
		{
			count++;
		}
	}
	return count;
}*/