/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void tienluong (float gv, float gr)
{
	float tienluong;
	if (gv >= gr)
	{
		printf("Vui long nhap gio vao < gio ra!");
	}
	else if (gr <= 12)
	{
		tienluong = (gr - gv) * (float)6.000;
		printf("Tien luong ngay cho cong nhan la: %.3fd\n", tienluong);
	}
		else 
		{
			if (gv <= 12)
			{
				tienluong = (12 - gv) * (float)6.000 + (gr - 12) * (float)7.500;
				printf("Tien luong ngay cho cong nhan la: %.3fd\n", tienluong);
			}
			else
			{
				tienluong = (gr - gv) * (float)7.500;
				printf("Tien luong ngay cho cong nhan la: %.3fd\n", tienluong);
			}
		}
}
int main ()
{
	float gv, gr;
	do
	{
	printf("Nhap gio vao ca (gio vao >= 6): "); scanf_s("%f", &gv);
	printf("Nhap gio ra ca (gio ra <= 18): "); scanf_s("%f", &gr);
	}
	while (gv < 6 || gr > 18);
	tienluong(gv, gr);
	return 0;
	getch ();
}*/