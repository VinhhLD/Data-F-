/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
int main ()
{
	char s1[MAX], s2[MAX];
	int len1 = 0, len2 = 0;
	printf("Nhap mang 1: ");
	gets(s1);
	printf("Nhap mang 2: ");
	gets(s2);
	//cach 1:
	int i = strlen(s1);
	int j = strlen(s2);
	/*cach 2:
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	printf("\nChieu dai chuoi 1 la %d", i);
	printf("\nChieu dai chuoi 2 la %d", j);
	return 0;
	getch ();
}*/