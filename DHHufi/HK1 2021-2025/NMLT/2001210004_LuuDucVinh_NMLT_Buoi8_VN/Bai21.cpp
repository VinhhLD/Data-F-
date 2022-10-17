/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void hoplesaudo (int h, int p, int s)
{
	if ((h >= 0 && h <= 23) && (p >= 0 && p <= 59) && (s >= 0 && s <= 59))
	{
		printf("%d gio %d phut %d giay hop le\n", h, p, s);
		if (s == 59)
		{
			if (p = 59)
			{
				if (h == 23)
					printf("Gio sau do 1 giay la: 00:00:00\n");
				else
					printf("Gio sau do 1 giay la: %d:00:00\n", h + 1);
			}
			else
				printf("Gio sau do 1 giay la: %d:%d:00\n", h, p + 1);
		}
		else
			printf("Gio sau do 1 giay la: %d:%d:%d\n", h, p, s + 1);
	}
	else
		printf("%d gio %d phut %d giay khong hop le\n", h, p, s);
}
void hopletruocdo (int h, int p, int s)
{
	if ((h >= 0 && h <= 23) && (p >= 0 && p <= 59) && (s >= 0 && s <= 59))
	{
		if (s == 0)
		{
			if (p == 0)
			{
				if (h == 0)
					printf("Gio truoc do 1 giay la: 23:59:59\n");
				else 
					printf("Gio truoc do 1 giay la: %d:59:59\n", h - 1);
			}
			else
				printf("Gio truoc do 1 giay la: %d:%d:00\n", h, p - 1);
		}
		else
			printf("Gio truoc do 1 giay la: %d:%d:%d\n", h, p, s - 1);
	}
}
int main ()
{
	int h, p, s;
	int n = 1;
	while (n > 0)
	{
	printf("\nNhap gio: "); scanf_s("%d", &h);
	printf("Nhap phut: "); scanf_s("%d", &p);
	printf("Nhap giay: "); scanf_s("%d", &s);
	hoplesaudo(h, p, s);
	hopletruocdo(h, p, s);
	}
	return 0;
	getch ();
}*/