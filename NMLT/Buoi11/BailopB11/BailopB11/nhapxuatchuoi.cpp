/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	char mssv[11], hoten[30], msv[9];
	printf("Nhap ma so sinh vien: "); scanf_s("%s", mssv);
	printf("Ma so sinh vien: %s so do dai cua chuoi la: %d", mssv, strlen(mssv));
	printf("\nNhap ho ten: ");
	fflush(stdin);
	gets(hoten);
	printf("Ho ten: %s", hoten);
	puts(hoten);
	printf("In dao nguoc Ho ten: "); puts(strrev(hoten));
	printf("Nhap ma so sinh vien 2 la: ");
	scanf_s("%s", msv);
	printf("Ma so sinh vien 2 la: %s", msv);
	if (strcmp(mssv, msv) == 0)
	{
		printf("mssv %s = msv %s", mssv, msv);
	}
	else
		printf("Hai ma so sv khac nhau!");
	return 0;
	getch ();
}*/