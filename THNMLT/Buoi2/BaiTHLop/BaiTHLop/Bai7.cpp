/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	float toan, ly, hoa, van, anh, su, TB;
	printf("Nhap diem thi THPT:\n");
	printf("Nhap diem toan: "); scanf_s("%f", &toan);
	printf("Nhap diem ly: "); scanf_s("%f", &ly);
	printf("Nhap diem hoa: "); scanf_s("%f", &hoa);
	printf("Nhap diem van: "); scanf_s("%f", &van);
	printf("Nhap diem anh: "); scanf_s("%f", &anh);
	printf("Nhap diem su: "); scanf_s("%f", &su);
	TB = toan + ly + hoa + van + anh + su / 6;
	printf("Diem TB: %.2f\n", TB);
	if (TB >= 8.0 && toan > 6.5 && ly > 6.5 && hoa > 6,5 && van > 6.5 && anh > 6.5 && su > 6.5)
	{
		printf("Xep loai: GIOI\n");
	}
	else
		if (TB >= 7.0 && toan > 5.0 && ly > 5.0 && hoa > 5.0 && van > 5.0 && anh > 5.0 && su > 5.0)
		{
			printf("Xep loai: KHA\n");
		}
		else
			if (TB >= 5.0 && toan > 3.5 && ly > 3.5 && hoa > 3.5 && van > 3.5 && anh > 3.5 && su > 3.5)
			{
				printf("Xep loai: TB\n");
			}
			else
			{
				printf("Xep loai: YEU\n");
			}
	return 0;
	getch ();
}*/
