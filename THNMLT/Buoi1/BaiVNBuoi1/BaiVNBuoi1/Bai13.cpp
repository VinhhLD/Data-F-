#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int sodien;
	printf("Nhap muc tieu thu dien trong thang: "); scanf_s("%d", &sodien);
	if (sodien <= 100)
	{
		printf("Tien dien su dung trong thang la: %d$\n", sodien * 5);
	}
	else 
		if (sodien <= 150)
		{
			printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + ((sodien - 100) * 7));
		}
		else
			if (sodien <= 200)
			{
				printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + ((sodien - 150) * 10));
			}
			else 
				if (sodien <= 300)
				{
					printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + (50 * 10) + ((sodien - 200) * 15));
				}
				else
				{
					printf("Tien dien su dung trong thang la: %d$\n", (100 * 5) + (50 * 7) + (50 * 10) + (100 * 15) + ((sodien - 300) * 20));
				}
	return 0;
	getch ();
}